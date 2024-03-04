//***************************************************************************
// Copyright 2007-2023 Universidade do Porto - Faculdade de Engenharia      *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  *
//***************************************************************************
// This file is part of DUNE: Unified Navigation Environment.               *
//                                                                          *
// Commercial Licence Usage                                                 *
// Licencees holding valid commercial DUNE licences may use this file in    *
// accordance with the commercial licence agreement provided with the       *
// Software or, alternatively, in accordance with the terms contained in a  *
// written agreement between you and Faculdade de Engenharia da             *
// Universidade do Porto. For licensing terms, conditions, and further      *
// information contact lsts@fe.up.pt.                                       *
//                                                                          *
// Modified European Union Public Licence - EUPL v.1.1 Usage                *
// Alternatively, this file may be used under the terms of the Modified     *
// EUPL, Version 1.1 only (the "Licence"), appearing in the file LICENCE.md *
// included in the packaging of this file. You may not use this work        *
// except in compliance with the Licence. Unless required by applicable     *
// law or agreed to in writing, software distributed under the Licence is   *
// distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF     *
// ANY KIND, either express or implied. See the Licence for the specific    *
// language governing permissions and limitations at                        *
// https://github.com/LSTS/dune/blob/master/LICENCE.md and                  *
// http://ec.europa.eu/idabc/eupl.html.                                     *
//***************************************************************************
// Author: Melih Akdağ                                                      *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>
#include <DUNE/Control.hpp>
#include <DUNE/Navigation/sb_mpc.hpp>
#include <DUNE/Navigation/velocity_obstacle.hpp>
#include <DUNE/Time/Delay.hpp>
#include <Eigen/Dense>
#include <random>
#include <eFLL/Fuzzy.h>

// ISO C++ 98 headers.
#include <iomanip>
#include <cmath>

static const double DEG2RAD = M_PI/180.0f;
static const double RAD2DEG = 180.0f/M_PI;

namespace Control
{
  namespace Path
  {
    namespace COLAV
    {
      namespace ColavSbmpcNegotiation
      {
        using DUNE_NAMESPACES;

        struct Arguments
        {
          // ILOS parameters
          double corridor;
          double entry_angle;
          double lookahead;
          double int_gain;
          double int_init;
          bool out_vec;
          bool out_los;

          bool collab_colav;
          int colav_algorithm;

          // Sbmpc parameters
          double T, DT, P, Q, D_CLOSE, D_SAFE, K_COLL, 
          KAPPA, PHI_AH, PHI_OT, PHI_HO, PHI_CR, K_P, K_DP,
          K_CHI, K_DCHI, K_DCHI_SB, K_DCHI_P;

          std::string mmsi;
        };

        struct Task: public DUNE::Control::PathController
        {
          //! ILOS m_integrator
          double m_integrator;
          //! Time of last path controller step
          Delta m_last_step;
          //! Loiter controller gain.
          double m_gain;
          //! Outgoing desired heading message.
          IMC::DesiredHeading m_heading;

          //! sb_mpc object.
          simulationBasedMpc sb_mpc;
          //! velocity_obstacle object
          velocityObstacle velocity_obstacle;
          //! List of asv states
          std::vector<double> m_asv_state = std::vector<double>(6,0.0);
          Math::Matrix m_dyn_obst_state;
          //! List of obstacle mmsi
          std::vector<int> m_dyn_obst_ids;
          //! Desired speed message
          IMC::DesiredSpeed des_speed;
          //! Negotiation data to send
          IMC::NegotiationData intention_to_send;
          //! Negotiation message counts
          IMC::NegotiationMsgLog negotiation_msg_log;
          //! Ownship mmsi
          std::string m_mmsi;
          //! Ownship latitude
          double m_lat_asv;
          //! Ownship longitude
          double m_lon_asv;
          //! Obstacle latitude
          double m_lat_obst;
          //! Obstacle longitude
          double m_lon_obst;
          //! Timestamp - new 
          double m_timestamp_new;
          //! Timestamp - old 
          double m_timestamp_prev;
          //! Desired heading message.
          double m_des_heading;
          double m_des_heading_prev = m_des_heading;
          //! Desired speed message.
          double m_des_speed;
          double m_des_speed_init;
          double m_des_speed_prev = m_des_speed;
          //! Desired speed units.
          uint8_t m_des_speed_units;
          //! Desired speed temporary
          double m_des_speed_temp;
          //! Cost <Output from CAS>
          double cost;
          //! Cost previous <Output from CAS>
          double cost_prev = std::numeric_limits<double>::infinity();
          //! Speed offset <Output from CAS>
          double u_os;
          //! Heading offset <Output from CAS>
          double psi_os;
          //! Speed offset temporary <Output from CAS>
          double u_os_temp;
          //! Heading offset temporary <Output from CAS>
          double psi_os_temp;

          double u_os_prev;
          double psi_os_prev;
          
          //! Variable to check if own ship is in negotation cycle
          bool in_negotiation;
          //! Negotiation state
          int negotiation_state;
          //! Invited to negotiation
          bool invited_to_negotiate;
          //! All ships ready to finish negotiation
          bool others_ready;
          //! All TCPAs are negative
          bool all_tcpa_passed;
          //! COLAV state
          bool in_colav_range;
          //! Same decision counter for negotation
          int same_decision_counter;
          //! Sending message counter
          int msg_out_counter;
          //! Incoming message counter
          int msg_in_counter;
          int utc_time_prev;
          double concession_level;
          bool start_colav;

          double m_heading_last;
          double m_speed_last;
          double psi_os_last;
          double u_os_last;

          //! Task arguments.
          Arguments m_args;

          Task(const std::string& name, Tasks::Context& ctx):
          DUNE::Control::PathController(name, ctx),
          m_lat_asv(0.0),
          m_lon_asv(0.0),
          m_lat_obst(0.0),
          m_lon_obst(0.0),
          m_timestamp_new(0.0),
          m_timestamp_prev(0.0),
          cost(0.0),
          u_os(1.0),
          psi_os(0.0),
          u_os_prev(1.0),
          psi_os_prev(0.0),
          in_negotiation(false),
          negotiation_state(0),
          //invited_to_negotiate(false),
          others_ready(false),
          all_tcpa_passed(false),
          in_colav_range(false),
          same_decision_counter(0),
          msg_out_counter(0),
          msg_in_counter(0),
          concession_level(0.0),
          start_colav(false)
          {
            param("MMSI",  m_args.mmsi)
            .description("Vessel MMSI");

            param("Collaborative COLAV", m_args.collab_colav)
            .defaultValue("true")
            .description("Collaborative or Reactive COLAV");

            param("COLAV Algorithm", m_args.colav_algorithm)
            .defaultValue("1")
            .description("COLAV algorithm 1=SB-MPC, 2=Velocity Obstacle");

            param("Corridor -- Width", m_args.corridor)
            .minimumValue("1.0")
            .maximumValue("500.0")
            .defaultValue("100.0")
            .units(Units::Meter)
            .description("Width of corridor for attack entry angle");
  
            param("Corridor -- Entry Angle", m_args.entry_angle)
            .minimumValue("2")
            .maximumValue("45")
            .defaultValue("10")
            .units(Units::Degree)
            .description("Attack angle when lateral track error equals corridor width");
  
            param("Corridor -- Out Vector Field", m_args.out_vec)
            .defaultValue("false")
            .description("Out of corridor guidance law: vector field");
  
            param("Corridor -- Out LOS", m_args.out_los)
            .defaultValue("false")
            .description("Out of corridor guidance law: LOS");
  
            param("ILOS Lookahead Distance", m_args.lookahead)
            .minimumValue("1.0")
            .maximumValue("500.0")
            .defaultValue("100.0")
            .units(Units::Meter)
            .description("Integral Line-of-Sight look ahead distance");
  
            param("ILOS Integrator Gain", m_args.int_gain)
            .minimumValue("0")
            .maximumValue("4")
            .defaultValue("0.1")
            .description("Integral Line-of-Sight integral gain");
  
            param("ILOS Integrator Initial Value", m_args.int_init)
            .minimumValue("0")
            .maximumValue("10")
            .defaultValue("0")
            .description("M_Integrator inital value");

            param("Prediction Horizon - Simulation Time", m_args.T)
            .units(Units::Second)
            .minimumValue("0.0")
            .maximumValue("6000.0")
            .defaultValue("600.0")
            .description("Simulation time - Prediction Horizon [sec].");
  
            param("Horizon Time Step", m_args.DT)
            .units(Units::Second)
            .minimumValue("0")
            .maximumValue("20")
            .defaultValue("1")
            .description("Simulation Time Step [sec].");

            param("Weight on Time to Evaluation Instant", m_args.P)
            .minimumValue("0.5")
            .maximumValue("10.0")
            .defaultValue("0.5")
            .description("Weight on Time to Evaluation Instant.");
  
            param("Weight on Distance at Evaluation Instant", m_args.Q)
            .minimumValue("1.0")
            .maximumValue("10.0")
            .defaultValue("3.0")
            .description("Weight on Distance at Evaluation Instant.");
  
            param("COLREGS Distance", m_args.D_CLOSE)
            .units(Units::Meter)
            .minimumValue("10.0")
            .maximumValue("2000.0")
            .defaultValue("600.0")
            .description("Distance where COLREGS are applied [m].");
  
            param("Minimum safe distance to vessels", m_args.D_SAFE)
            .units(Units::Meter)
            .minimumValue("10.0")
            .description("Minimum distance to moving obstacle which is considered as safe [m].");
  
            param("Cost of collisions", m_args.K_COLL)
            .minimumValue("0.0")
            .maximumValue("10.0")
            .defaultValue("1.0")
            .description("Cost of Collision.");
  
            param("Cost of not complying COLREGS", m_args.KAPPA)
            .minimumValue("0.0")
            .maximumValue("10.0")
            .defaultValue("5.0")
            .description("Cost of not Complying with the COLREGS.");
            
            param("PHI AH", m_args.PHI_AH)
            .units(Units::Degree)
            .minimumValue("0.0")
            .maximumValue("180.0")
            .defaultValue("22.5")
            .description("Angle within which an obstacle is said to be ahead [deg].");
  
            param("PHI OT", m_args.PHI_OT)
            .units(Units::Degree)
            .minimumValue("0.0")
            .maximumValue("180.0")
            .defaultValue("68.5")
            .description("Angle outside of which an obstacle will be said to be overtaking, if the speed of the obstacle is larger than the ship's own speed [deg].");
  
            param("PHI HO", m_args.PHI_HO)
            .units(Units::Degree)
            .minimumValue("0.0")
            .maximumValue("180.0")
            .defaultValue("22.5")
            .description("Angle within which an obstacle is said to be head on [deg].");
            
            param("PHI CR", m_args.PHI_CR)
            .minimumValue("0.0")
            .maximumValue("180.0")
            .defaultValue("68.5")
            .description("Angle outside of which an obstacle is said to be crossing, if it is on the starboard side, heading towards the ship and not overtaking the ship [deg].");
            
            param("Cost of Deviating from Nominal Speed", m_args.K_P)
            .minimumValue("0.0")
            .maximumValue("10.0")
            .defaultValue("2.5")
            .description("Cost of deviating from the nominal speed.");
  
            param("Cost of Changing Speed Offset", m_args.K_DP)
            .minimumValue("0.0")
            .maximumValue("10.0")
            .defaultValue("2.0")
            .description("Cost of Changing the Speed Offset");
  
            param("Cost of Deviating from Nominal Course", m_args.K_CHI)
            .minimumValue("0.0")
            .maximumValue("10.0")
            .defaultValue("1.3")
            .description("Cost of deviating from the nominal Course.");

            param("Cost of Course offset change", m_args.K_DCHI)
            .minimumValue("0.0")
            .maximumValue("10.0")
            .defaultValue("0.9")
            .description("Cost of Changing the Course Offset.");
  
            param("Cost of Course change to SB", m_args.K_DCHI_SB)
            .minimumValue("0.0")
            .maximumValue("10.0")
            .defaultValue("0.9")
            .description("Cost of Changing the Course Offset to Starboard.");
  
            param("Cost of Course change to Port", m_args.K_DCHI_P)
            .minimumValue("0.0")
            .maximumValue("10.0")
            .defaultValue("1.2")
            .description("Cost of Changing the Course Offset to Port.");
    
            // Everything is ok so set task entity state at normal with 'Active' message.
            setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);

            // Register handler routines.
            bind<IMC::GpsFix>(this);
            bind<IMC::DynObsVec>(this);
            bind<IMC::DesiredSpeed>(this);
            bind<IMC::DesiredPath>(this);
            bind<IMC::NegotiationData>(this);
          }


          //! Update internal state with new parameter values.
          void
          onUpdateParameters(void)
          {
            // Initialize ILOS m_integrator
            m_integrator = m_args.int_init;
            PathController::onUpdateParameters();
  
            if (paramChanged(m_args.entry_angle))
              m_args.entry_angle = Angles::radians(m_args.entry_angle);
  
            m_gain = std::tan(m_args.entry_angle) / m_args.corridor;

            // T and DT cannot be changed online. If changed, re-create the object.
            if(paramChanged(m_args.T) || paramChanged(m_args.DT))
                sb_mpc.create(m_args.T, m_args.DT, m_args.P, m_args.Q, m_args.D_CLOSE,
                          m_args.D_SAFE, m_args.K_COLL, m_args.PHI_AH, m_args.PHI_OT, m_args.PHI_HO, m_args.PHI_CR,
                          m_args.KAPPA, m_args.K_P, m_args.K_CHI, m_args.K_DP, m_args.K_DCHI, m_args.K_DCHI_SB, m_args.K_DCHI_P);
            if(paramChanged(m_args.P))
                sb_mpc.setP(m_args.P);
            if(paramChanged(m_args.Q))
                sb_mpc.setQ(m_args.Q);
            if(paramChanged(m_args.D_CLOSE))
                sb_mpc.setDClose(m_args.D_CLOSE);
            if(paramChanged(m_args.D_SAFE))
                sb_mpc.setDSafe(m_args.D_SAFE);
            if(paramChanged(m_args.K_COLL))
                sb_mpc.setKColl(m_args.K_COLL);
            if(paramChanged(m_args.KAPPA))
                sb_mpc.setKappa(m_args.KAPPA);
            if(paramChanged(m_args.PHI_AH))
                sb_mpc.setPhiAH(m_args.PHI_AH);
            if(paramChanged(m_args.PHI_OT))
                sb_mpc.setPhiOT(m_args.PHI_OT);
            if(paramChanged(m_args.PHI_HO))
                sb_mpc.setPhiHO(m_args.PHI_HO);
            if(paramChanged(m_args.PHI_CR))
                sb_mpc.setPhiCR(m_args.PHI_CR);
            if(paramChanged(m_args.K_P))
                sb_mpc.setKP(m_args.K_P);
            if(paramChanged(m_args.K_DP))
                sb_mpc.setKdP(m_args.K_DP);
            if(paramChanged(m_args.K_CHI))
                sb_mpc.setKChi(m_args.K_CHI);
            if(paramChanged(m_args.K_DCHI))
                sb_mpc.setKdChiSB(m_args.K_DCHI);
            if(paramChanged(m_args.K_DCHI_SB))
                sb_mpc.setKdChiSB(m_args.K_DCHI_SB);
            if(paramChanged(m_args.K_DCHI_P))
                sb_mpc.setKdChiP(m_args.K_DCHI_P);
            if(paramChanged(m_args.mmsi))
                m_mmsi = m_args.mmsi;
          }


          void
          onEntityReservation(void)
          {
            PathController::onEntityReservation();
          }
  

          void
          onPathActivation(void)
          {
            // Activate heading cotroller.
            enableControlLoops(IMC::CL_YAW);
          }


          //! Initialize resources.
          void
          onResourceInitialization(void)
          {
            sb_mpc.create(m_args.T, m_args.DT, m_args.P, m_args.Q, m_args.D_CLOSE,
                        m_args.D_SAFE, m_args.K_COLL, m_args.PHI_AH, m_args.PHI_OT, m_args.PHI_HO, m_args.PHI_CR,
                        m_args.KAPPA, m_args.K_P, m_args.K_CHI, m_args.K_DP, m_args.K_DCHI, m_args.K_DCHI_SB, m_args.K_DCHI_P);
            m_mmsi = m_args.mmsi;
            velocity_obstacle.create(m_args.D_CLOSE, m_args.D_SAFE, m_args.K_COLL, m_args.PHI_AH, m_args.PHI_OT, m_args.PHI_HO, m_args.PHI_CR, 
                                    m_args.KAPPA, m_args.K_DP, m_args.K_DCHI);
            velocity_obstacle.Vs_opt_prev(0) = m_asv_state[3] * std::cos(m_asv_state[2]);
            velocity_obstacle.Vs_opt_prev(1) = m_asv_state[3] * std::sin(m_asv_state[2]);
          }
  

          void
          reset(void)
          {
            m_integrator = 0.0;
          }


          //! From GPS Task
          void
          consume(const IMC::GpsFix* msg)
          {
            //if(msg->getSource() != getSystemId() || msg->getSourceEntity() != m_nav_eid)
            //  return;
            m_lat_asv = msg->lat;
            m_lon_asv = msg->lon;
            m_asv_state[0] = 0.0; // ASV assumed to be centered, (0,0)
            m_asv_state[1] = 0.0;
            m_asv_state[2] = msg->cog;
            m_asv_state[3] = msg->sog;
            m_asv_state[4] = 0.0; //! Assume zero sideslip
            m_asv_state[5] = 0.0; //! Assume zero.
            m_timestamp_new = msg->getTimeStamp(); 
          }
  

          void
          consume(const IMC::DesiredSpeed* msg)
          {
            //if (!isActive())
            //  return;
            m_des_speed = msg->value;
            m_des_speed_units = msg->speed_units;
          }


          void
          consume(const IMC::DesiredPath* msg)
          {
            //if (!isActive())
            //  return;
            m_des_speed_init = msg->speed;
            m_des_speed_prev = m_des_speed_init;
          }


          void
          consume(const IMC::DynObsVec* msg)
          {
            double distance, dcpa, tcpa;
            double rule;  // OS responsibility for TS considering COLREG. rule => 0.0=None, 1.0=HO-GW, 2.0=ON-SO, 3.0=OG, 4.0=CR-SO, 5.0=CR-GW
            IMC::MessageList<IMC::CollisionAvoidance> ml;
            ml = msg -> obstacles;
            int row_num = ml.size();
            int n = 0;
            m_dyn_obst_state.resize(row_num, 17);
            for(auto i = ml.begin(); i!=ml.end();++i)
            {
              if (n < row_num)
              {  
                m_dyn_obst_state(n, 0) = (*i)->x;
                m_dyn_obst_state(n, 1) = (*i)->y;
                m_dyn_obst_state(n, 2) = (*i)->course;
                m_dyn_obst_state(n, 3) = (*i)->speed;
                m_dyn_obst_state(n, 4) = 0.0;
                m_dyn_obst_state(n, 5) = 10; //(*i)->length/2; //a = cas.length - b
                m_dyn_obst_state(n, 6) = 10; //(*i)->length/2; //b = cas.length - a
                m_dyn_obst_state(n, 7) = 2; //(*i)->width/2; //c = cas.width - d
                m_dyn_obst_state(n, 8) = 2; //(*i)->width/2; //d = cas.width - c
                std::stringstream geek((*i)->mmsi); // Convert MMSI from string to int for CAS.
                int mmsi; 
                geek >> mmsi;
                m_dyn_obst_state(n, 9) = mmsi;
                m_dyn_obst_state(n, 10) = (*i)->course; // By default intended COG is course if targetship is not negotiating
                m_dyn_obst_state(n, 11) = (*i)->speed;  // By default intended SOG is speed if targetship is not negotiating
                // Check if the obstacle is being tracked before
                bool exists = false;
                for (auto k = 0u; k < m_dyn_obst_ids.size(); ++k) 
                {
                    if (m_dyn_obst_ids[k] == mmsi) 
                    {
                        exists = true;
                        break;
                    }
                }
                // If the obstacle hasn't tracked before, add it to the list
                if (!exists) 
                {
                    m_dyn_obst_ids.push_back(mmsi);
                    m_dyn_obst_state(n, 12) = 255; // By default 255 to represent noncollaborative and noncooperative vessel
                }

                std::tie(distance, dcpa, tcpa) = calculateCPA(m_asv_state[0], m_asv_state[1], m_asv_state[2], m_asv_state[3], (*i)->x, (*i)->y, Angles::radians((*i)->course), (*i)->speed);
                m_dyn_obst_state(n, 13) = distance;
                m_dyn_obst_state(n, 14) = dcpa;
                m_dyn_obst_state(n, 15) = tcpa;
                rule = colregRule(m_asv_state[0], m_asv_state[1], m_asv_state[2], m_asv_state[3], (*i)->x, (*i)->y, Angles::radians((*i)->course), (*i)->speed);
                m_dyn_obst_state(n, 16) = rule;

                n += 1;

                // Debuging COLREG rule:
                //std::string rule_cout;
                //if (rule==0.0){rule_cout="None";}
                //else if (rule==1.0){rule_cout="HO-GW";}
                //else if (rule==2.0){rule_cout="ON-SO";}
                //else if (rule==3.0){rule_cout="OG";}
                //else if (rule==4.0){rule_cout="CR-SO";}
                //else if (rule==5.0){rule_cout="CR-GW";}
                //spew("MMSI: %i Dist: %f DCPA: %f TCPA: %f Rule: %s", mmsi, distance, dcpa, tcpa, rule_cout.c_str());
              }
            }
          }


          void 
          publishNegotiationData(double psi_, double u_, double psi_os_, double u_os_, double negotiation_state_)
          {
            intention_to_send.mmsi = m_mmsi;
            intention_to_send.concession = concession_level;
            intention_to_send.cog_int = Angles::degrees(Angles::normalizeRadian(psi_ + psi_os_));
            intention_to_send.cog_int_off = psi_os_*RAD2DEG;
            intention_to_send.sog_int = u_ * u_os_;
            intention_to_send.sog_int_off = u_os_;
            intention_to_send.state = negotiation_state_;
            msg_out_counter += 1;
            dispatch(intention_to_send);
            //spew("MMSI: %i COG_int: %f SOG_int: %f State: %i", std::stoi(m_mmsi), Angles::degrees(Angles::normalizeRadian(ref + psi_os)), m_asv_state[3] * u_os, negotiation_state);
            if (negotiation_state==1)
            {
                m_heading_last = psi_;
                m_speed_last = u_;
                psi_os_last = psi_os_;
                u_os_last = u_os_;
            }
            return;
          }


          void
          publishNegotiationMsgLog()
          {
            negotiation_msg_log.mmsi = m_mmsi;
            negotiation_msg_log.msg_in = msg_in_counter;
            negotiation_msg_log.msg_out = msg_out_counter;
            dispatch(negotiation_msg_log);
            return;
          }


          void
          consume(const IMC::NegotiationData* msg)
          {
            invited_to_negotiate = true; // Other vessel might want to start a negotation
            msg_in_counter += 1;
            double furthest_obst = m_args.D_CLOSE;
            spew("MMSI: %i COG_int: %f SOG_int: %f State: %i", std::stoi(msg->mmsi), msg->cog_int, msg->sog_int, msg->state);
            for(int n=0; n<m_dyn_obst_state.rows(); ++n)
            {
                if(m_dyn_obst_state(n, 9) == std::stoi(msg->mmsi))
                {
                    m_dyn_obst_state(n, 10) = msg->cog_int; // Intended COG
                    m_dyn_obst_state(n, 11) = msg->sog_int; // Intended SOG
                    m_dyn_obst_state(n, 12) = msg->state;   // If there is communication default 255 is overwritten with negotiation state.
                    if (m_dyn_obst_state(n, 13) > furthest_obst)
                    {
                        furthest_obst = m_dyn_obst_state(n, 13);
                    }
                }
                else
                {
                    m_dyn_obst_state(n, 12) = 255;  // Change negotiation state to default if there is no incoming message from the obstacle.
                }
            }
            if (furthest_obst > m_args.D_CLOSE)
            {
                sb_mpc.D_CLOSE_ = furthest_obst+250;
                velocity_obstacle.D_CLOSE_ = furthest_obst+250;
                m_args.D_CLOSE = furthest_obst+250;
            }
          }


          inline double
          computeK(double l1, double l2, double ts_y, double factor)
          {
            return l1 / (std::pow(ts_y + m_args.int_gain * (m_integrator + factor), 2) + l2);
          }


          double 
          trueBearing(double self_x, double self_y, double ts_x, double ts_y)
          {
            double alpha_r;
            double delta_alpha = 0.0;

            // Alpha_r (True bearing of the targetship)
            if ((ts_y - self_y >= 0.0) && (ts_x - self_x >= 0.0))
            {
                delta_alpha = 0.0;
            }
            else if ((ts_y - self_y >= 0.0) && (ts_x - self_x) < 0)
            {
                delta_alpha = 0.0;
            }
            else if ((ts_y - self_y < 0.0) && (ts_x - self_x) < 0)
            {
                delta_alpha = 2 * M_PI;
            }
            else if ((ts_y - self_y < 0.0) && (ts_x - self_x) >= 0)
            {
                delta_alpha = 2 * M_PI;
            }
            alpha_r = atan2((ts_y-self_y), (ts_x-self_x)) + delta_alpha; 
            return alpha_r;
          }


          double 
          relativeBearing(double self_x, double self_y, double self_psi, double ts_x, double ts_y)
          {
            double true_bearing, rel_bearing;
            true_bearing = trueBearing(self_x, self_y, ts_x, ts_y);
            rel_bearing = true_bearing - self_psi;
            if (rel_bearing <= -M_PI) 
            {
                rel_bearing += 2*M_PI;
            }
            else if (rel_bearing > M_PI) 
            {
                rel_bearing -= 2*M_PI;
            }
            return rel_bearing;
          }


          //! Calculate own vessel responsibility to target vessel according to COLREG
          double
          colregRule(double self_x, double self_y, double self_cog, double self_sog, double ts_x, double ts_y, double ts_cog, double ts_sog)
          {
            // rule => 0.0=None, 1.0=HO-GW, 2.0=ON-SO, 3.0=OG, 4.0=CR-SO, 5.0=CR-GW
            double rule, RB_os_ts, RB_ts_os; // RB_os_ts = Relative bearing of TS from OS
            RB_os_ts = relativeBearing(self_x, self_y, self_cog, ts_x, ts_y);
            RB_ts_os = relativeBearing(ts_x, ts_y, ts_cog, self_x, self_y);
            // Head-on, give-way
            if ( (std::abs(RB_os_ts) < 22.5*DEG2RAD) && (std::abs(RB_ts_os) < 22.5*DEG2RAD) )
            {
               rule = 1.0; //"HO-GW"
            }
            // Overtaken, stand-on
            else if ( (std::abs(RB_os_ts) > 112.5*DEG2RAD) && (std::abs(RB_ts_os) < 45*DEG2RAD) && (ts_sog >= self_sog) )
            {
                rule = 2.0; //"ON-SO"
            }
            // Overtaking, give-way
            else if ( (std::abs(RB_ts_os) > 112.5*DEG2RAD) && (std::abs(RB_os_ts) < 45*DEG2RAD) && (self_sog >= ts_sog) )
            {
                rule = 3.0; //"OG";
            }
            // Crossing, stand-on
            else if ( (RB_os_ts < 10*DEG2RAD) && (RB_os_ts > -112.5*DEG2RAD) && (RB_ts_os > 0) && (RB_ts_os < 112.5*DEG2RAD) )
            {
                rule = 4.0; //"CR-SO";
            }
            // Crossing, give-way
            else if ( (RB_os_ts > 0) && (RB_os_ts < 112.5*DEG2RAD) && (RB_ts_os < 10*DEG2RAD) && (RB_ts_os > -112.5*DEG2RAD) )
            {
                rule = 5.0; //"CR-GW";
            }
            else
            {
                rule = 0.0; //"None";
            }
            return rule;
          }

        

          //! Calculate DCPA and TCPA with other vessel
          std::tuple<double, double, double> 
          calculateCPA(double self_x, double self_y, double self_cog, double self_sog, double ts_x, double ts_y, double ts_cog, double ts_sog)
          {
            double self_u = self_sog * cos(self_cog);
            double self_v = self_sog * sin(self_cog);
            double ts_u = ts_sog * cos(ts_cog);
            double ts_v = ts_sog * sin(ts_cog);
            double delta_alpha = 0.0;
            double delta_chi = 0.0;
            double D_r, U_r, alpha_r, chi_r, beta, dcpa, tcpa;

            // Distance between self and targetship
            Eigen::Vector2d d;
            d(0) = ts_x - self_x;
            d(1) = ts_y - self_y;
            D_r = d.norm();

            // Relative speed between self and targetship
            Eigen::Vector2d U;
            U(0) = ts_u - self_u;
            U(1) = ts_v - self_v;
            U_r = U.norm();

            // Alpha_r (True bearing of the targetship)
            if ((ts_y - self_y >= 0.0) && (ts_x - self_x >= 0.0))
            {
                delta_alpha = 0.0;
            }
            else if ((ts_y - self_y >= 0.0) && (ts_x - self_x) < 0)
            {
                delta_alpha = 0.0;
            }
            else if ((ts_y - self_y < 0.0) && (ts_x - self_x) < 0)
            {
                delta_alpha = 2*M_PI;
            }
            else if ((ts_y - self_y < 0.0) && (ts_x - self_x) >= 0)
            {
                delta_alpha = 2*M_PI;
            }
            alpha_r = atan2((ts_y-self_y), (ts_x-self_x)) + delta_alpha; 

            // Chi_r (Relative course of targetship - from 0 to U_r)
            if ((ts_v - self_v >= 0) && (ts_u - self_u >= 0))
            {
                delta_chi = 0;
            }
            else if ((ts_v - self_v >= 0) && (ts_u - self_u < 0))
            {
                delta_chi = 0;
            }
            else if ((ts_v - self_v < 0) && (ts_u - self_u < 0))
            {
                delta_chi = 2*M_PI;
            }
            else if ((ts_v - self_v < 0) && (ts_u - self_u >= 0))
            {
                delta_chi = 2*M_PI;
            }
            chi_r = atan2((ts_v-self_v), (ts_u-self_u)) + delta_chi;

            // beta
            beta = chi_r - alpha_r - M_PI;

            // DCPA and TCPA
            dcpa = std::abs(D_r * sin(beta));
            tcpa = (D_r * cos(beta)) / (std::abs(U_r)+1);
            
            return std::make_tuple(D_r, dcpa, tcpa);
          }


          //! Collision risk evaluation based on fuzzy logic
          double 
          fuzzyCollisionRisk(double dcpa, double tcpa)
          {
            Fuzzy *fuzzy = new Fuzzy();
          
            // FuzzyInput
            FuzzyInput *dcpa_input = new FuzzyInput(1);
            FuzzySet *dcpa_low = new FuzzySet(0, 0, 0.5*m_args.D_SAFE, m_args.D_SAFE); 
            dcpa_input->addFuzzySet(dcpa_low);
            FuzzySet *dcpa_medium = new FuzzySet(0.5*m_args.D_SAFE, m_args.D_SAFE, m_args.D_SAFE, 1.5*m_args.D_SAFE);
            dcpa_input->addFuzzySet(dcpa_medium);
            FuzzySet *dcpa_high = new FuzzySet(m_args.D_SAFE, 1.5*m_args.D_SAFE, 2*m_args.D_SAFE, 2*m_args.D_SAFE);
            dcpa_input->addFuzzySet(dcpa_high);
            fuzzy->addFuzzyInput(dcpa_input);
          
            // FuzzyInput
            double T_SAFE = 2*(m_args.D_CLOSE / m_des_speed_init); //0.5 * (m_args.D_CLOSE / m_des_speed_init);
            FuzzyInput *tcpa_input = new FuzzyInput(2);
            FuzzySet *tcpa_low = new FuzzySet(0, 0, 0.5*T_SAFE, T_SAFE);
            tcpa_input->addFuzzySet(tcpa_low);
            FuzzySet *tcpa_medium = new FuzzySet(0.5*T_SAFE, T_SAFE, T_SAFE, 1.5*T_SAFE);
            tcpa_input->addFuzzySet(tcpa_medium);
            FuzzySet *tcpa_high = new FuzzySet(T_SAFE, 1.5*T_SAFE, 2*T_SAFE, 2*T_SAFE);
            tcpa_input->addFuzzySet(tcpa_high);
            fuzzy->addFuzzyInput(tcpa_input);
          
            // FuzzyOutput
            FuzzyOutput *risk = new FuzzyOutput(1);
            FuzzySet *minimum = new FuzzySet(0, 0, 2.5, 5);
            risk->addFuzzySet(minimum);
            FuzzySet *average = new FuzzySet(2.5, 5, 5, 7.5);
            risk->addFuzzySet(average);
            FuzzySet *maximum = new FuzzySet(5, 7.5, 10, 10);
            risk->addFuzzySet(maximum);
            fuzzy->addFuzzyOutput(risk);
          
            // Building FuzzyRule
            FuzzyRuleAntecedent *dcpaLowAndTcpaLow = new FuzzyRuleAntecedent();
            dcpaLowAndTcpaLow->joinWithAND(dcpa_low, tcpa_low);
            FuzzyRuleConsequent *thenRiskMaximum = new FuzzyRuleConsequent();
            thenRiskMaximum->addOutput(maximum);
            FuzzyRule *fuzzyRule1 = new FuzzyRule(1, dcpaLowAndTcpaLow, thenRiskMaximum);
            fuzzy->addFuzzyRule(fuzzyRule1);
          
            // Building FuzzyRule
            FuzzyRuleAntecedent *dcpaLowAndTcpaMedium = new FuzzyRuleAntecedent();
            dcpaLowAndTcpaMedium->joinWithAND(dcpa_low, tcpa_medium);
            FuzzyRuleConsequent *thenRiskAverage = new FuzzyRuleConsequent();
            thenRiskAverage->addOutput(average);
            FuzzyRule *fuzzyRule2 = new FuzzyRule(2, dcpaLowAndTcpaMedium, thenRiskAverage);
            fuzzy->addFuzzyRule(fuzzyRule2);
          
            // Building FuzzyRule
            FuzzyRuleAntecedent *dcpaLowAndTcpaHigh = new FuzzyRuleAntecedent();
            dcpaLowAndTcpaHigh->joinWithAND(dcpa_low, tcpa_high);
            FuzzyRule *fuzzyRule3 = new FuzzyRule(3, dcpaLowAndTcpaHigh, thenRiskAverage);
            fuzzy->addFuzzyRule(fuzzyRule3);
          
            // Building FuzzyRule
            FuzzyRuleAntecedent *dcpaMediumAndTcpaLow = new FuzzyRuleAntecedent();
            dcpaMediumAndTcpaLow->joinWithAND(dcpa_medium, tcpa_low);
            FuzzyRule *fuzzyRule4 = new FuzzyRule(4, dcpaMediumAndTcpaLow, thenRiskAverage);
            fuzzy->addFuzzyRule(fuzzyRule4);
          
            // Building FuzzyRule
            FuzzyRuleAntecedent *dcpaMediumAndTcpaMedium = new FuzzyRuleAntecedent();
            dcpaMediumAndTcpaMedium->joinWithAND(dcpa_medium, tcpa_medium);
            FuzzyRuleConsequent *thenRiskMinimum = new FuzzyRuleConsequent();
            thenRiskMinimum->addOutput(minimum);
            FuzzyRule *fuzzyRule5 = new FuzzyRule(5, dcpaMediumAndTcpaMedium, thenRiskMinimum);
            fuzzy->addFuzzyRule(fuzzyRule5);
          
            // Building FuzzyRule
            FuzzyRuleAntecedent *dcpaMediumAndTcpaHigh = new FuzzyRuleAntecedent();
            dcpaMediumAndTcpaHigh->joinWithAND(dcpa_medium, tcpa_high);
            FuzzyRule *fuzzyRule6 = new FuzzyRule(6, dcpaMediumAndTcpaHigh, thenRiskMinimum);
            fuzzy->addFuzzyRule(fuzzyRule6);
          
            // Building FuzzyRule
            FuzzyRuleAntecedent *dcpaHighAndTcpaLow = new FuzzyRuleAntecedent();
            dcpaHighAndTcpaLow->joinWithAND(dcpa_high, tcpa_low);
            FuzzyRule *fuzzyRule7 = new FuzzyRule(7, dcpaHighAndTcpaLow, thenRiskMinimum);
            fuzzy->addFuzzyRule(fuzzyRule7);
          
            // Building FuzzyRule
            FuzzyRuleAntecedent *dcpaHighAndTcpaMedium = new FuzzyRuleAntecedent();
            dcpaHighAndTcpaMedium->joinWithAND(dcpa_high, tcpa_medium);
            FuzzyRule *fuzzyRule8 = new FuzzyRule(8, dcpaHighAndTcpaMedium, thenRiskMinimum);
            fuzzy->addFuzzyRule(fuzzyRule8);
          
            // Building FuzzyRule
            FuzzyRuleAntecedent *dcpaHighAndTcpaHigh = new FuzzyRuleAntecedent();
            dcpaHighAndTcpaHigh->joinWithAND(dcpa_high, tcpa_high);
            FuzzyRule *fuzzyRule9 = new FuzzyRule(9, dcpaHighAndTcpaHigh, thenRiskMinimum);
            fuzzy->addFuzzyRule(fuzzyRule9);
          
            //std::cout << "DCPA: " << dcpa << " TCPA: " << tcpa << std::endl;
          
            fuzzy->setInput(1, dcpa);
            fuzzy->setInput(2, tcpa);
          
            fuzzy->fuzzify();
          
            //std::cout << "Input: \n\tDCPA: Low-> " << dcpa_low->getPertinence() << ", Medium->" << dcpa_medium->getPertinence() << ", High-> " << dcpa_high->getPertinence() << std::endl;
            //std::cout << "\tTCPA: Low-> " << tcpa_low->getPertinence() << ",  Medium-> " << tcpa_medium->getPertinence() << ",  High-> " << tcpa_high->getPertinence() << std::endl;
            //std::cout << "Rules: \n\tRule01-> " << fuzzyRule1->isFired() << ", Rule02-> " << fuzzyRule2->isFired() << ", Rule03-> " << fuzzyRule3->isFired() << ", Rule04-> " << fuzzyRule4->isFired() << ", Rule05-> " << fuzzyRule5->isFired() << ", Rule06-> " << fuzzyRule6->isFired() << ", Rule07-> " << fuzzyRule7->isFired() << ", Rule08-> " << fuzzyRule8->isFired() << ", Rule09-> " << fuzzyRule9->isFired() << std::endl;

            double collision_risk = fuzzy->defuzzify(1);
          
            //std::cout << "Output: \n\tRisk: Minimum-> " << minimum->getPertinence() << ", Average->" << average->getPertinence() << ", Maximum-> " << maximum->getPertinence() << std::endl;
            //std::cout << "Result: \n\tRisk: " << collision_risk << std::endl;

            return collision_risk;
          }

          
          
          //! Give way responsibility level based on fuzzy logic
          double 
          fuzzyGiveWayResponsibility(double distance)
          {
            Fuzzy *fuzzy = new Fuzzy();

            double Dist_safe = 0.5 * m_args.D_CLOSE;
          
            // FuzzyInput
            FuzzyInput *distance_input = new FuzzyInput(1);
            FuzzySet *distance_low = new FuzzySet(0, 0, 0.5*Dist_safe, Dist_safe); //new FuzzySet(0, 20, 20, 40); 
            distance_input->addFuzzySet(distance_low);
            FuzzySet *distance_medium = new FuzzySet(0.5*Dist_safe, Dist_safe, Dist_safe, 1.5*Dist_safe); //new FuzzySet(30, 50, 50, 70); 
            distance_input->addFuzzySet(distance_medium);
            FuzzySet *distance_high = new FuzzySet(Dist_safe, 1.5*Dist_safe, 2*Dist_safe, 2*Dist_safe); //new FuzzySet(60, 80, 80, 500);
            distance_input->addFuzzySet(distance_high);
            fuzzy->addFuzzyInput(distance_input);
          
            // FuzzyOutput
            FuzzyOutput *gw_resp = new FuzzyOutput(1);
            FuzzySet *gw_resp_low = new FuzzySet(0, 0, 2.5, 5);
            gw_resp->addFuzzySet(gw_resp_low);
            FuzzySet *gw_resp_medium = new FuzzySet(2.5, 5, 5, 7.5);
            gw_resp->addFuzzySet(gw_resp_medium);
            FuzzySet *gw_resp_high = new FuzzySet(5, 7.5, 10, 10);
            gw_resp->addFuzzySet(gw_resp_high);
            fuzzy->addFuzzyOutput(gw_resp);
          
            // Building FuzzyRule
            FuzzyRuleAntecedent *ifDistanceLow = new FuzzyRuleAntecedent();
            ifDistanceLow->joinSingle(distance_low);
            FuzzyRuleConsequent *thenGiveWayResponsibilityHigh = new FuzzyRuleConsequent();
            thenGiveWayResponsibilityHigh->addOutput(gw_resp_high);
            FuzzyRule *fuzzyRule1 = new FuzzyRule(1, ifDistanceLow, thenGiveWayResponsibilityHigh);
            fuzzy->addFuzzyRule(fuzzyRule1);
          
            // Building FuzzyRule
            FuzzyRuleAntecedent *ifDistanceMedium = new FuzzyRuleAntecedent();
            ifDistanceMedium->joinSingle(distance_medium);
            FuzzyRuleConsequent *thenGiveWayResponsibilityMedium = new FuzzyRuleConsequent();
            thenGiveWayResponsibilityMedium->addOutput(gw_resp_medium);
            FuzzyRule *fuzzyRule2 = new FuzzyRule(2, ifDistanceMedium, thenGiveWayResponsibilityMedium);
            fuzzy->addFuzzyRule(fuzzyRule2);
          
            // Building FuzzyRule
            FuzzyRuleAntecedent *ifDistanceHigh = new FuzzyRuleAntecedent();
            ifDistanceHigh->joinSingle(distance_high);
            FuzzyRuleConsequent *thenGiveWayResponsibilityLow = new FuzzyRuleConsequent();
            thenGiveWayResponsibilityLow->addOutput(gw_resp_high);
            FuzzyRule *fuzzyRule3 = new FuzzyRule(3, ifDistanceHigh, thenGiveWayResponsibilityLow);
            fuzzy->addFuzzyRule(fuzzyRule3);
          
            //std::cout << "Distance: " << distance << std::endl;
          
            fuzzy->setInput(1, distance);
          
            fuzzy->fuzzify();
          
            //std::cout << "Input: \n\tDistance: Low-> " << distance_low->getPertinence() << ", Medium->" << distance_medium->getPertinence() << ", High-> " << distance_high->getPertinence() << std::endl;
            //std::cout << "Rules: \n\tRule01-> " << fuzzyRule1->isFired() << ", Rule02-> " << fuzzyRule2->isFired() << ", Rule03-> " << fuzzyRule3->isFired() << std::endl;
          
            double give_way_resp = fuzzy->defuzzify(1);
          
            //std::cout << "Output: \n\tGive Way Responsibility: Low-> " << gw_resp_low->getPertinence() << ", Medium->" << gw_resp_medium->getPertinence() << ", High-> " << gw_resp_high->getPertinence() << std::endl;
            //std::cout << "Result: \n\tGive Way Responsibility: " << give_way_resp << std::endl;
          
            return give_way_resp;
          }


          //! Concession level based on fuzzy logic
          double 
          fuzzyConcessionLevel(double collision_risk_, double give_way_responsibility_)
          {
            Fuzzy *fuzzy = new Fuzzy();

            // FuzzyInput
            FuzzyInput *cr_input = new FuzzyInput(1);
            FuzzySet *cr_low = new FuzzySet(0, 0, 2.5, 5);
            cr_input->addFuzzySet(cr_low);
            FuzzySet *cr_medium = new FuzzySet(2.5, 5, 5, 7.5);
            cr_input->addFuzzySet(cr_medium);
            FuzzySet *cr_high = new FuzzySet(5, 7.5, 10, 10);
            cr_input->addFuzzySet(cr_high);
            fuzzy->addFuzzyInput(cr_input);

            // FuzzyInput
            FuzzyInput *gw_resp_input = new FuzzyInput(2);
            FuzzySet *gw_low = new FuzzySet(0, 0, 2.5, 5);
            gw_resp_input->addFuzzySet(gw_low);
            FuzzySet *gw_medium = new FuzzySet(2.5, 5, 5, 7.5);
            gw_resp_input->addFuzzySet(gw_medium);
            FuzzySet *gw_high = new FuzzySet(5, 7.5, 10, 10);
            gw_resp_input->addFuzzySet(gw_high);
            fuzzy->addFuzzyInput(gw_resp_input);

            // FuzzyOutput
            FuzzyOutput *concession = new FuzzyOutput(1);
            FuzzySet *concession_low = new FuzzySet(0, 0, 2.5, 5);
            concession->addFuzzySet(concession_low);
            FuzzySet *concession_medium = new FuzzySet(2.5, 5, 5, 7.5);
            concession->addFuzzySet(concession_medium);
            FuzzySet *concession_high = new FuzzySet(5, 7.5, 10, 10);
            concession->addFuzzySet(concession_high);
            fuzzy->addFuzzyOutput(concession);

            // Rule 1: CR low & GW low -> Concession low
            FuzzyRuleAntecedent *crLowAndGwLow = new FuzzyRuleAntecedent();
            crLowAndGwLow->joinWithAND(cr_low, gw_low);
            FuzzyRuleConsequent *thenConcessionLow = new FuzzyRuleConsequent();
            thenConcessionLow->addOutput(concession_low);
            FuzzyRule *fuzzyRule1 = new FuzzyRule(1, crLowAndGwLow, thenConcessionLow);
            fuzzy->addFuzzyRule(fuzzyRule1);

            // Rule 2: CR low & GW medium -> Concession low
            FuzzyRuleAntecedent *crLowAndGwMed = new FuzzyRuleAntecedent();
            crLowAndGwMed->joinWithAND(cr_low, gw_medium);
            FuzzyRule *fuzzyRule2 = new FuzzyRule(2, crLowAndGwMed, thenConcessionLow);
            fuzzy->addFuzzyRule(fuzzyRule2);

            // Rule 3: CR low & GW high -> Concession medium
            FuzzyRuleAntecedent *crLowAndGwHigh = new FuzzyRuleAntecedent();
            crLowAndGwHigh->joinWithAND(cr_low, gw_high);
            FuzzyRuleConsequent *thenConcessionMedium = new FuzzyRuleConsequent();
            thenConcessionMedium->addOutput(concession_medium);
            FuzzyRule *fuzzyRule3 = new FuzzyRule(3, crLowAndGwHigh, thenConcessionMedium);
            fuzzy->addFuzzyRule(fuzzyRule3);

            // Rule 4: CR medium & GW low -> Concession low
            FuzzyRuleAntecedent *crMedAndGwLow = new FuzzyRuleAntecedent();
            crMedAndGwLow->joinWithAND(cr_medium, gw_low);
            FuzzyRule *fuzzyRule4 = new FuzzyRule(4, crMedAndGwLow, thenConcessionLow);
            fuzzy->addFuzzyRule(fuzzyRule4);

            // Rule 5: CR medium & GW medium -> Concession medium
            FuzzyRuleAntecedent *crMedAndGwMed = new FuzzyRuleAntecedent();
            crMedAndGwMed->joinWithAND(cr_medium, gw_medium);
            FuzzyRule *fuzzyRule5 = new FuzzyRule(5, crMedAndGwMed, thenConcessionLow);
            fuzzy->addFuzzyRule(fuzzyRule5);

            // Rule 6: CR medium & GW high -> Concession medium
            FuzzyRuleAntecedent *crMedAndGwHigh = new FuzzyRuleAntecedent();
            crMedAndGwHigh->joinWithAND(cr_medium, gw_high);
            FuzzyRule *fuzzyRule6 = new FuzzyRule(6, crMedAndGwHigh, thenConcessionMedium);
            fuzzy->addFuzzyRule(fuzzyRule6);

            // Rule 7: CR high & GW low -> Concession medium
            FuzzyRuleAntecedent *crHighAndGwLow = new FuzzyRuleAntecedent();
            crHighAndGwLow->joinWithAND(cr_high, gw_low);
            FuzzyRule *fuzzyRule7 = new FuzzyRule(7, crHighAndGwLow, thenConcessionMedium);
            fuzzy->addFuzzyRule(fuzzyRule7);

            // Rule 8: CR high & GW medium -> Concession high
            FuzzyRuleAntecedent *crHighAndGwMed = new FuzzyRuleAntecedent();
            crHighAndGwMed->joinWithAND(cr_high, gw_medium);
            FuzzyRuleConsequent *thenConcessionHigh = new FuzzyRuleConsequent();
            thenConcessionHigh->addOutput(concession_high);
            FuzzyRule *fuzzyRule8 = new FuzzyRule(8, crHighAndGwMed, thenConcessionHigh);
            fuzzy->addFuzzyRule(fuzzyRule8);

            // Rule 9: CR high & GW high -> Concession high
            FuzzyRuleAntecedent *crHighAndGwHigh = new FuzzyRuleAntecedent();
            crHighAndGwHigh->joinWithAND(cr_high, gw_high);
            FuzzyRule *fuzzyRule9 = new FuzzyRule(9, crHighAndGwHigh, thenConcessionHigh);
            fuzzy->addFuzzyRule(fuzzyRule9);

            //std::cout << "Collision Risk: " << collision_risk << " GW Responsibility: " << give_way_responsibility << std::endl;

            fuzzy->setInput(1, collision_risk_);
            fuzzy->setInput(2, give_way_responsibility_);

            fuzzy->fuzzify();

            //std::cout << "Input: \n\tCR: Low-> " << cr_low->getPertinence() << ", Medium->" << cr_medium->getPertinence() << ", High-> " << cr_high->getPertinence() << std::endl;
            //std::cout << "\tGW Resp: Low-> " << gw_low->getPertinence() << ",  Medium-> " << gw_medium->getPertinence() << ",  High-> " << gw_high->getPertinence() << std::endl;
            //std::cout << "Rules: \n\tRule01-> " << fuzzyRule1->isFired() << ", Rule02-> " << fuzzyRule2->isFired() << ", Rule03-> " << fuzzyRule3->isFired() << ", Rule04-> " << fuzzyRule4->isFired() << ", Rule05-> " << fuzzyRule5->isFired() << ", Rule06-> " << fuzzyRule6->isFired() << ", Rule07-> " << fuzzyRule7->isFired() << ", Rule08-> " << fuzzyRule8->isFired() << ", Rule09-> " << fuzzyRule9->isFired() << std::endl;

            double concession_level_fuzzy = fuzzy->defuzzify(1);
          
            //std::cout << "Output: \n\tConcession Level: Low-> " << concession_low->getPertinence() << ", Medium->" << concession_medium->getPertinence() << ", High-> " << concession_high->getPertinence() << std::endl;
            //std::cout << "Result: \nConcession Level: " << concession_level_fuzzy << std::endl;

            return concession_level_fuzzy;
          }



          //! Evaluate concession level based on collision risk, stand-on and give-way responsibilities
          void 
          concessionLevel()
          {
            int mmsi;
            double dcpa, tcpa, rule, distance;
            double gw_resp = 0.0;
            double collision_risk = 0.0;
            double concession_level_obst = 0.0;
            double concession_level_max = 0.0;

            //! Loop over each target ship
            for (int n=0; n<m_dyn_obst_state.rows(); ++n)
            {
                mmsi = m_dyn_obst_state(n,9);
                distance = m_dyn_obst_state(n,13);
                dcpa = m_dyn_obst_state(n,14);
                tcpa = m_dyn_obst_state(n,15);
                rule = m_dyn_obst_state(n,16);   //rules => 0.0=None, 1.0=HO-GW, 2.0=ON-SO, 3.0=OG, 4.0=CR-SO, 5.0=CR-GW

                collision_risk = fuzzyCollisionRisk(dcpa, tcpa);
                
                if (rule==1.0 || rule==3.0 || rule==5.0) // If COLREG rule responsibility of ownship is HO-GW or OG or CR-GW
                {
                    gw_resp = fuzzyGiveWayResponsibility(distance);
                }

                spew("To:  %i GW resp: %f CR: %f", mmsi, gw_resp, collision_risk);

                concession_level_obst = fuzzyConcessionLevel(collision_risk, gw_resp);
                if (concession_level_obst > concession_level_max)
                {
                    concession_level_max = concession_level_obst;
                }
            }
            concession_level = concession_level_max;
            spew("Concession level: %f", concession_level);
          }


          //! Update decision variables (control actions) considering the concession level.
          void 
          updateDecisionVariables()
          {
            Eigen::VectorXd P_ca_;
            Eigen::VectorXd Chi_ca_;
            
            concessionLevel();
            
            if (0 <= concession_level && concession_level < 2.5)
            {
                P_ca_.resize(1);
                P_ca_ << 1.0;
                Chi_ca_.resize(7);
                Chi_ca_ << 15.0, 10.0, 5.0, 0.0, -5.0, -10.0, -15.0;
                Chi_ca_ *= DEG2RAD;
            }
            else if (2.5 <= concession_level && concession_level < 5)
            {
                P_ca_.resize(2);
                P_ca_ << 0.75, 1.0;
                Chi_ca_.resize(13);
                Chi_ca_ << 30.0, 25.0, 20.0, 15.0, 10.0, 5.0, 0.0, -5.0, -10.0, -15.0, -20.0, -25.0, -30.0;
                Chi_ca_ *= DEG2RAD;
            }
            else if (5 <= concession_level && concession_level < 7.5)
            {
                P_ca_.resize(3);
                P_ca_ << 0.5, 0.75, 1.0;
                Chi_ca_.resize(13);
                Chi_ca_ << 60.0,50.0,40.0,30.0,20.0,10.0,0.0,-10.0,-20.0,-30.0,-40.0,-50.0,-60.0;
                Chi_ca_ *= DEG2RAD;
            }
            else if (concession_level >= 7.5)
            {
                P_ca_.resize(4);
                P_ca_ << 0.0, 0.25, 0.5, 1.0;
                Chi_ca_.resize(13);
                Chi_ca_ << 90.0,75.0,60.0,45.0,30.0,15.0,0.0,-15.0,-30.0,-45.0,-60.0,-75.0,-90.0;
                Chi_ca_ *= DEG2RAD;
            }
            else
            {
                P_ca_.resize(4);
                P_ca_ << 0.0, 0.25, 0.5, 1.0;
                Chi_ca_.resize(13);
                Chi_ca_ << 90.0,75.0,60.0,45.0,30.0,15.0,0.0,-15.0,-30.0,-45.0,-60.0,-75.0,-90.0;
                Chi_ca_ *= DEG2RAD;
            }

            if (m_args.colav_algorithm==1)
            {
                sb_mpc.P_ca_ = P_ca_;
                sb_mpc.Chi_ca_ = Chi_ca_;
            }
            else if (m_args.colav_algorithm==2)
            {
                velocity_obstacle.P_ca_ = P_ca_;
                velocity_obstacle.Chi_ca_ = Chi_ca_;
            }
          }

          
          //! Update negotiation state based on Distributed Stochastic Search
          std::tuple<double, double> 
          updateNegotiationState(double psi_os_temp_, double u_os_temp_, double cost_)
          {
            double probability = 0.5;
            // Create a random number generator engine
            std::random_device rd;
            std::mt19937 gen(rd());
            // Define a distribution for random numbers between 0 and 1
            std::uniform_real_distribution<double> dis(0.0, 1.0);
            // Generate a random number
            double randomValue = dis(gen);
            if (cost_ < cost_prev)
            {
                if (randomValue < probability)
                {
                    psi_os = psi_os_temp_;
                    u_os = u_os_temp_;
                    cost_prev = cost_;
                    negotiation_state = 1;
                }
                else
                {
                    negotiation_state = 0;
                }
            }
            else if (cost_ >= cost_prev)
            {
                negotiation_state = 0;
            }
            return std::make_tuple(psi_os_temp_, u_os_temp_);
          }
          

          //! Check whether to start a negotiation cycle for collaborative COLAV or to start COLAV action for non-collaborative COLAV 
          void 
          checkToStartColav()
          {
            double distance, dcpa, tcpa;
            for (int n=0; n<m_dyn_obst_state.rows(); ++n)
            {
                std::tie(distance, dcpa, tcpa) = calculateCPA(m_asv_state[0], m_asv_state[1], m_des_heading, m_des_speed_init, m_dyn_obst_state(n, 0), m_dyn_obst_state(n, 1), Angles::radians(m_dyn_obst_state(n, 2)), m_dyn_obst_state(n, 3));
                
                if ( ( (distance <= m_args.D_CLOSE)                                                                             // If the obstacle is in the threshold range
                    && (dcpa <= m_args.D_SAFE)                                                                                  // And DCPA with the obstacle is smaller than the safe distance range
                    && (tcpa > 0.0) )                                                                                           // And TCPA with the obstacle is not past                                                                                 
                    || (invited_to_negotiate == true) )                                                                         // Or self vessel is invited to a negotiation by an obstacle
                {
                    start_colav = true;
                    return;
                }
                else
                {
                    start_colav = false;
                }
            }
          }


          //! Check other ships TCPAs whether they are all at the past.
          void
          checkTCPAs()
          {
            int tcpa_passed_counter = 0;
            for (int n=0; n<m_dyn_obst_state.rows(); ++n)
            {
                if ( ((m_dyn_obst_state(n,15) < 0.0) && (m_dyn_obst_state(n, 13) > m_args.D_SAFE))
                       || (m_dyn_obst_state(n, 13) > m_args.D_CLOSE) )
                {
                    tcpa_passed_counter+=1;
                }
            }
            if (tcpa_passed_counter==m_dyn_obst_state.rows())
            {
                all_tcpa_passed = true;
            }
            else
            {
                all_tcpa_passed = false;
            }
          }


          //! Check other ships negotiation states for synchronous decision-making.
          void
          checkNegotiationStates()
          {
            int collaborative = 0;
            int noncollaborative = 0;
            for (int n=0; n<m_dyn_obst_state.rows(); ++n)
            {
                if (m_dyn_obst_state(n,12) == 1) 
                {
                    collaborative+=1;
                }
                else if (m_dyn_obst_state(n,12) == 255)
                {
                    noncollaborative+=1;
                }
            }
            if ((collaborative+noncollaborative)==m_dyn_obst_state.rows())
            {
                others_ready = true;
            }
          }


          //! Collaborative collision avoidance algorithm
          void collabColav(double& ref)
          {
            if (in_negotiation==false) // If this is the first negotiation cycle, send the current actions as intentions.
            {
                publishNegotiationData(m_asv_state[2], m_asv_state[3], 0.0, 1.0, 0);
                in_negotiation=true;
            }
            else if (in_negotiation==true)
            {
                if (negotiation_state==0) // If a solution is not found
                {
                    updateDecisionVariables();
                    if (m_args.colav_algorithm==1)
                    {
                        std::tie(psi_os_temp, u_os_temp, cost) = sb_mpc.getBestControlOffset(u_os, psi_os, u_os_prev, psi_os_prev, m_des_speed_init, ref, m_asv_state, m_dyn_obst_state);
                        //std::tie(psi_os_temp, u_os_temp, cost) = sb_mpc.getBestControlOffset(u_os, psi_os, u_os_prev, psi_os_prev, m_asv_state[3], m_asv_state[2], m_asv_state, m_dyn_obst_state);
                    }
                    else if (m_args.colav_algorithm==2)
                    {
                        //std::tie(psi_os_temp, u_os_temp, cost) = velocity_obstacle.velocityUpdate(m_asv_state[2], m_asv_state[3], m_asv_state, m_dyn_obst_state);
                        std::tie(psi_os_temp, u_os_temp, cost) = velocity_obstacle.velocityUpdate(ref, m_des_speed_init, m_asv_state, m_dyn_obst_state);
                    }
                    std::tie(psi_os, u_os) = updateNegotiationState(psi_os_temp, u_os_temp, cost);
                    publishNegotiationData(ref, m_des_speed_init, psi_os, u_os, negotiation_state);
                }
                else if (negotiation_state==1) // If a solution is found
                {
                    checkNegotiationStates();
                    if (others_ready==true || msg_out_counter > 10) // And all the other obstacles also found solutions, apply the control.
                    { 
                        setOptCtrl(m_heading_last, m_speed_last, psi_os_last, u_os_last);
                        publishNegotiationData(m_heading_last, m_speed_last, psi_os_last, u_os_last, negotiation_state);
                        
                        publishNegotiationMsgLog();
                        spew("MMSI: %i Msg_in: %i Msg_out: %i\n", std::stoi(m_mmsi), msg_in_counter, msg_out_counter);
                        spew("MMSI: %i APPLYING COG change: %f SOG change: %f\n", std::stoi(m_mmsi), psi_os*RAD2DEG, u_os);
                        msg_out_counter = 0;
                        msg_in_counter = 0;
                        negotiation_state = 0;
                        same_decision_counter = 0;
                        in_negotiation = false;
                        others_ready = false;
                        cost_prev = std::numeric_limits<double>::infinity();  
                        invited_to_negotiate = false;
                    }
                    else    // If only self found a solution and waiting for others, send the previously found solution.
                    {
                        publishNegotiationData(m_heading_last, m_speed_last, psi_os_last, u_os_last, negotiation_state);
                        msg_out_counter += 1;
                    }
                }
            }  
          }


          //! Reactive collision avoidance algorithm without collaboration
          void colav(double& ref, int utc_time)
          {
            if (utc_time%10==0) //((start_colav==true) && (utc_time%10==0))
            {
                if (m_args.colav_algorithm==1)
                {
                    //std::tie(psi_os_temp, u_os_temp, cost) = sb_mpc.getBestControlOffset(u_os, psi_os, u_os_prev, psi_os_prev, m_asv_state[3], m_asv_state[2], m_asv_state, m_dyn_obst_state);
                    std::tie(psi_os_temp, u_os_temp, cost) = sb_mpc.getBestControlOffset(u_os, psi_os, u_os_prev, psi_os_prev, m_des_speed_init, ref, m_asv_state, m_dyn_obst_state);
                }
                else if (m_args.colav_algorithm==2)
                {
                    //std::tie(psi_os_temp, u_os_temp, cost) = velocity_obstacle.velocityUpdate(m_asv_state[2], m_asv_state[3], m_asv_state, m_dyn_obst_state);
                    std::tie(psi_os_temp, u_os_temp, cost) = velocity_obstacle.velocityUpdate(ref, m_des_speed_init, m_asv_state, m_dyn_obst_state);
                }
                psi_os = psi_os_temp;
                u_os = u_os_temp;
                setOptCtrl(ref, m_des_speed_init, psi_os, u_os);
            }
            else
            {
                setOptCtrl(m_des_heading_prev, m_des_speed_prev, 0.0, 1.0);
            }
          }


          //! Dispatch desired heading and speed values
          void setOptCtrl(double psi_ref, double u_ref, double psi_value, double u_value)
          {
            des_speed.value = u_ref * u_value;
            dispatch(des_speed);
            m_heading.value = Angles::normalizeRadian(psi_ref + psi_value);
            m_heading.off = Angles::degrees(psi_value);
            dispatch(m_heading);
            m_des_heading_prev = m_heading.value;
            m_des_speed_prev = des_speed.value;
            u_os_prev = u_value;
            psi_os_prev = psi_value;

            if (m_args.colav_algorithm==2)
            {
                velocity_obstacle.Vs_opt_prev(0) = des_speed.value * std::cos(m_heading.value);
                velocity_obstacle.Vs_opt_prev(1) = des_speed.value * std::sin(m_heading.value);
            }
          }


          //! Execute a path control step
          //! From base class PathController
          void
          step(const IMC::EstimatedState& state, const TrackingState& ts)
          {        
            /*
            // Note:
            // cross-track position (lateral error) = ts.track_pos.y
            // and along-track position = ts.track_pos.x
            double k1;
            double k2;
            double k3;
            double k4;
            double loc_1 = m_args.lookahead * ts.track_pos.y;
            double loc_2 = std::pow(m_args.lookahead, 2);
            double timestep = m_last_step.getDelta();
            double kcorr = ts.track_pos.y / m_args.corridor;
            double akcorr = std::fabs(kcorr);
            
            if (akcorr > 1)
            {
              // Outside corridor, m_integrator OFF
              m_integrator = 0.0;
            }
            else
            {
              // Inside corridor, m_integrator ON
              // RK4 integration
              k1 = computeK(loc_1, loc_2, ts.track_pos.y, 0.0);
              k2 = computeK(loc_1, loc_2, ts.track_pos.y, k1/2);
              k3 = computeK(loc_1, loc_2, ts.track_pos.y, k2/2);
              k4 = computeK(loc_1, loc_2, ts.track_pos.y, k3);
              m_integrator += timestep * (k1 + 2 * k2 + 2 * k3 + k4) / 6;
            }
            // ILOS guidance
            if (ts.track_pos.x > ts.track_length)
            {
              // Past the track goal: this should never happen but ...
              m_des_heading = getBearing(state, ts.end);
            }
            else if (akcorr > 1 && m_args.out_vec && !m_args.out_los)
            {
              // Outside corridor, m_integrator OFF, vector field guidance
              m_des_heading = ts.track_bearing - std::atan(m_gain * ts.track_pos.y);
            }
            else if (akcorr > 1 && !m_args.out_vec && m_args.out_los)
            {
              // Outside corridor, m_integrator OFF, LOS guidance
              m_des_heading = ts.track_bearing - std::atan(ts.track_pos.y / m_args.lookahead);
            }
            else
            {
              // Inside corridor, m_integrator ON, ILOS guidance
              m_des_heading = ts.track_bearing - std::atan((ts.track_pos.y + m_args.int_gain * m_integrator) / m_args.lookahead);
            }
            */

            m_des_heading = ts.los_angle; // Pure pursuit guidance

            int utc_time = ((uint32_t)Clock::getSinceEpoch());
            checkTCPAs();
            checkToStartColav();

            // If all TCPAs are in the past follow LOS guidance
            if (all_tcpa_passed==true)
            {
                setOptCtrl(m_des_heading, m_des_speed_init, 0.0, 1.0);
                utc_time_prev = utc_time;
                return;
            }
            // Else apply either collaborative or reactive collision avoidance 
            if (start_colav==true)
            {
                if (m_args.collab_colav == true)
                {
                    collabColav(m_des_heading);
                } 
                else if ( (m_args.collab_colav == false) )
                {
                    colav(m_des_heading, utc_time);
                }
            }
            else // if (start_colav==false)                                   
            {
                setOptCtrl(m_des_heading, m_des_speed_init, 0.0, 1.0);
            }

            utc_time_prev = utc_time;
          }


          //! Execute a loiter control step
          //! From base class PathController & VectorField guidance law
          void
          loiter(const IMC::EstimatedState& state, const TrackingState& ts)
          {
            double ref = DUNE::Math::c_half_pi + std::atan(2 * m_gain * (ts.range - ts.loiter.radius));
  
            if (!ts.loiter.clockwise)
              ref = -ref;
  
            ref += DUNE::Math::c_pi + ts.los_angle;
  
            if (ts.cc)
              ref += state.psi - ts.course;  // course control
  
            // Dispatch heading reference
            m_heading.value = Angles::normalizeRadian(ref);
            dispatch(m_heading);
          }


          void
          onMain(void)
          {
            while (!stopping())
            {
                waitForMessages(1);
            }
          }


        };
      }
    }
  }
}

DUNE_TASK
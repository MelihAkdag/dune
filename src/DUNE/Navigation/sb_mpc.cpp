/*
 *    This file is part of SB-MPC Library.
 *
 *    SB-MPC -- Scenario-Based MPC for Maritime Collision Avoidance.
 *    Copyright (C) 2016-2019 Inger Berge Hagen, Giorgio D. Kwame Minde Kufoalor,
 *    NTNU Trondheim.
 *    Developed within the Autosea Project (Sensor fusion and collision avoidance for
 *    autonomous surface vehicles) under the supervision of Tor Arne Johansen.
 *    All rights reserved.
 *
 *    SB-MPC Library is software used according to the conditions of the Autosea Consortium.
 *    <https://www.ntnu.edu/autosea>
 */


/**
 *    \file   sb_mpc.cpp
 *    \brief  Defines the simulationBasedMpc class.
 *    \author Inger Berge Hagen, Giorgio D. K. M. Kufoalor, adapted by Alberto Dallolio.
 */

// Local headers.
#include <DUNE/Navigation/sb_mpc.hpp>
#include <DUNE/Navigation/autonaut.hpp>
#include <DUNE/Navigation/obstacle.hpp>
#include <DUNE/DUNE.hpp>

static const double DEG2RAD = M_PI/180.0f;
static const double RAD2DEG = 180.0f/M_PI;

namespace DUNE
{
  namespace Navigation
  {
    //! Constructor.
    simulationBasedMpc::simulationBasedMpc(void):
	  T_(0.0),
	  DT_(0.0),
	  P_(0.0),
	  Q_(0.0),
	  D_CLOSE_(0.0),
	  D_SAFE_(0.0),
	  K_COLL_(0.0),
	  PHI_AH_(0.0),
	  PHI_OT_(0.0),
	  PHI_HO_(0.0),
	  PHI_CR_(0.0),
	  KAPPA_(0.0),
	  K_P_(0.0),
	  K_CHI_(0.0),
	  K_DP_(0.0),
	  K_DCHI_SB_(0.0),
	  K_DCHI_P_(0.0),
	  K_CHI_SB_(0.0),
	  K_CHI_P_(0.0)
    {}

    //! Destructor.
    simulationBasedMpc::~simulationBasedMpc()
    {
    }
	
	void
	simulationBasedMpc::create(double T, double DT, double P, double Q, double D_CLOSE, double D_SAFE, double K_COLL, double PHI_AH, double PHI_OT, double PHI_HO, 
														 double PHI_CR, double KAPPA, double K_P, double K_CHI, double K_DP, double K_DCHI_SB, double K_DCHI_P, double K_CHI_SB, double K_CHI_P)
	{
		T_ = T;
		DT_ = DT;

		P_ = P; 		      // 0.5, (1.0), 2.0
		Q_ = Q;		        // (4.0), 40.0, 10.0
		D_CLOSE_ = D_CLOSE;	// 200.0 300.0 400.0 500.0 600 1000
		D_SAFE_ = D_SAFE; 	  // 40.0, 50.0, 70.0, 80.0, 100, 200, 185.2
		K_COLL_ = K_COLL;		  // 0.5, (1.0), (0.1), 0.5, (10.0), 100.0 ;  need 0.1 when K_P_=10.5!
		PHI_AH_ = PHI_AH;		  // 15.0, 22.5, 68.5 or more??
		PHI_OT_ = PHI_OT;		  // 68.5
		PHI_HO_ = PHI_HO;		  // 22.5 68.5 89.5 (> is large enough to trigger OT scenario)
		PHI_CR_ = PHI_CR;		  // (68.5) 22.5
		KAPPA_ = KAPPA;		    // (3.0), 3.0e2
		K_P_ = K_P;		    // (1.5), 2.5, (10.5) 100.5
		K_DP_ = K_DP;		    // 2.0, (0.5) (cost requires <1)
		K_CHI_ = K_CHI;		    // 1.3
		K_CHI_SB_ = K_CHI_SB;	  // 1.5
		K_CHI_P_ =  K_CHI_P;	  // 100.5, (10.5), 5.5, 2.5, 1.5 (>1.5 red. flexibility to port)
		K_DCHI_SB_ = K_DCHI_SB;	  // 0.9, (0.5) 0.1 (cost requires <1)
		K_DCHI_P_ = K_DCHI_P;	  // 1.2, 0.9 (cost requires <1)

		P_ca_last_ = 1.0;
		Chi_ca_last_ = 0.0;

		cost_ = std::numeric_limits<double>::infinity(); //INFINITY;

		Chi_ca_.resize(13);
		Chi_ca_ << -90.0,-75.0,-60.0,-45.0,-30.0,-15.0,0.0,15.0,30.0,45.0,60.0,75.0,90.0;
		Chi_ca_ *= DEG2RAD;

		P_ca_.resize(4);
		P_ca_ << 0.0, 0.25, 0.5, 1.0;
		
		asv = new ownship(T_,DT_);

	}


	std::tuple<double, double, double> 
	simulationBasedMpc::getBestControlOffset(double u_os, double psi_os, double u_d, double psi_d_, const std::vector<double>& asv_state, const Math::Matrix& obst_states)
	{
		double cost = std::numeric_limits<double>::infinity(); //INFINITY;
		double cost_k;
		double cost_i = 0;
		int n_obst;
		double u_os_best, psi_os_best;

		if (obst_states.rows() == 0)
		{
			u_os_best = 1.0;
			psi_os_best = 0.0;
			return std::make_tuple(psi_os_best, u_os_best, cost);
		}
		else
		{
			for (int i=0; i<obst_states.rows(); i++)
			{
				obstacle *obst = new obstacle(obst_states.row(i), T_, DT_);
				obst_vect.push_back(obst);
			}
			n_obst = obst_vect.size();
		}

		for (int i=0; i<Chi_ca_.size(); i++)
		{
			for (int j=0; j<P_ca_.size(); j++)
			{
				// Simulate ASV trajectory for current control behavior
				asv->linearPredictionInger(asv_state, u_d*P_ca_[j], Angles::normalizeRadian(psi_d_ + Chi_ca_[i]));

				cost_i = -1;
				for (int k=0; k<n_obst; k++)
				{
					cost_k = costFunction(P_ca_[j], Chi_ca_[i], k);
					if (cost_k > cost_i)
					{
						cost_i = cost_k;
					}
				}

				if (cost_i < cost)
				{
					cost = cost_i;
					u_os_best = P_ca_[j];
					psi_os_best = Chi_ca_[i];
				}
				if (cost == 0)
				{
					u_os_best = u_os;
					psi_os_best = psi_os;
				}
			}
		}
		for (int k=0; k<n_obst; k++)
		{
			delete(obst_vect[k]);
		}
		obst_vect.clear();

		return std::make_tuple(psi_os_best, u_os_best, cost);
	}



	double 
	simulationBasedMpc::costFunction(double P_ca, double Chi_ca, int k)
	{
		double dist, dist2, phi, phi_o, psi_o, psi_rel, R, C, k_coll, d_safe_i;
		Eigen::Vector2d d, d2, los, los_inv, v_o, v_s;
		bool mu, OT, SB, HO, CR;
		double d_safe = D_SAFE_;
		double d_close = D_CLOSE_;
		double H0 = 0;
		double H1 = 0;
		double H2 = 0;
		double cost = 0;
		double t = 0;
		double t0 = 0;
		int n_samp = T_/DT_;
		double k_dchi_p = K_DCHI_P_;
		double k_dchi_sb = K_DCHI_SB_;
		double k_chi_p = K_CHI_P_;
		double k_chi_sb = K_CHI_SB_;

		for(int i=0; i<n_samp-1; i++)
		{
			t += DT_;

			d(0) = obst_vect[k]->x_[i] - asv->m_x[i];
			d(1) = obst_vect[k]->y_[i] - asv->m_y[i];
			dist = d.norm();

			R = 0; 
			C = 0;
			mu = 0;

			if (dist < d_close)
			{
				v_o(0) = obst_vect[k]->u_[i];
				v_o(1) = obst_vect[k]->v_[i];
				rot2d(obst_vect[k]->psi_,v_o);

				v_s(0) = asv->m_u[i];
				v_s(1) = asv->m_v[i];
				rot2d(asv->m_psi[i],v_s);

				psi_o = obst_vect[k]->psi_;
				psi_o = normalize_angle(psi_o);

				phi = atan2(d(1),d(0)) - normalize_angle(asv->m_psi[i]);
				phi = normalize_angle(phi);

				phi_o = atan2(-d(1),-d(0)) - obst_vect[k]->psi_;
				phi_o = normalize_angle(phi_o);

				psi_rel = psi_o - asv->m_psi[i];
				psi_rel = normalize_angle(psi_rel);
				//psi_rel = angle_diff(asv->m_psi[i], psi_o); // normalized

				los = d/dist;
				los_inv = -d/dist;

				d_safe_i = d_safe;
        
				if (dist < d_safe_i)
				{
					R = (1/pow(std::abs(t-t0),P_))*pow((d_safe_i/dist),Q_);
					C = K_COLL_*pow((v_s-v_o).norm(),2);
				}

				/*
				// Overtaken by obstacle
				OT = v_s.dot(v_o) > cos(PHI_OT_*DEG2RAD)*v_s.norm()*v_o.norm();
						//&& v_s.norm() < v_o.norm();

				// Obstacle on starboard side
				SB = phi >= 0; // ENU: < 0, NED (MR): >= 0

				// Obstacle Head-on
				HO = v_o.norm() > 0.05 //0.05?
						&& v_s.dot(v_o) < -cos(PHI_HO_*DEG2RAD)*v_s.norm()*v_o.norm()
						&& v_s.dot(los) > cos(PHI_AH_*DEG2RAD)*v_s.norm();

				// Crossing situation
				CR = v_s.dot(v_o) < cos(PHI_CR_*DEG2RAD)*v_s.norm()*v_o.norm()
						&& ((SB && psi_rel < 0)); // (ENU: > 0, NED: < 0)

				mu = ( SB && HO ) || ( CR && !OT);
				*/

				// rule => 0.0=None, 1.0=HO-GW, 2.0=ON-SO, 3.0=OG, 4.0=CR-SO, 5.0=CR-GW
				double rule, rel_bearing;
				rule = colregRule(asv->m_x[i], asv->m_y[i], asv->m_psi[i], asv->m_u[i], obst_vect[k]->x_[i], obst_vect[k]->y_[i], obst_vect[k]->psi_, obst_vect[k]->u_[i]);
				rel_bearing = relativeBearing(asv->m_x[i], asv->m_y[i], asv->m_psi[i], obst_vect[k]->x_[i], obst_vect[k]->y_[i]);
				
				// COLREG violation
				if ((rule==1.0 && phi>=0) || (((rule==4.0 || rule==5.0) && phi<0) && !rule==2.0) || (rule==3.0 && std::abs(rel_bearing) <= 22.5*DEG2RAD))
				{
					mu = true;
				}
				else
				{
					mu = false;
				}

			}

			H0 = C*R + KAPPA_*mu;

			if (H0 > H1)
			{
				H1 = H0;
			}
		}

		d2(0) = obst_vect[k]->x_[0] - asv->m_x[0];
		d2(1) = obst_vect[k]->y_[0] - asv->m_y[0];
		dist2 = d2.norm();

		if (dist2 < d_close)
		{
			H2 = K_P_*(1-P_ca) + K_CHI_*pow(Chi_ca,2) + deltaP(P_ca) + deltaChi(Chi_ca, k_dchi_p, k_dchi_sb);
		}
		
		cost = H1 + H2;

		return cost;
	}


	double 
	simulationBasedMpc::deltaP(double P_ca)
	{
		return K_DP_*pow(P_ca_last_ - P_ca,2);
	}


	double 
	simulationBasedMpc::deltaChi(double Chi_ca, double k_dchi_p, double k_dchi_sb)
	{
		double dChi = Chi_ca - Chi_ca_last_;
		if(dChi < 0)			// ENU: > 0, NED (MR): < 0
		{
			return k_dchi_p*pow(dChi,2); // K_DCHI_P_
		}
		else if(dChi > 0)	// ENU: < 0, NED (MR): > 0
		{
			return k_dchi_sb*pow(dChi,2); // _SB_
		}
		else
		{
			return 0;
		}
	}


	double 
	simulationBasedMpc::sqrChi(double Chi_ca, double k_chi_p, double k_chi_sb)
	{
		double dChi = Chi_ca - Chi_ca_last_;
		if( dChi < 0 ){  	// ENU: > 0, NED (MR): < 0
			return k_chi_p*pow(Chi_ca,2); 	// _P_
		}else if(dChi > 0){
			return k_chi_sb*pow(Chi_ca,2);	// _SB_
		}
	}


	double
	simulationBasedMpc::trueBearing(double self_x, double self_y, double ts_x, double ts_y)
	{
		double alpha_r, delta_alpha;
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
	simulationBasedMpc::relativeBearing(double self_x, double self_y, double self_psi, double ts_x, double ts_y)
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


	double
	simulationBasedMpc::colregRule(double self_x, double self_y, double self_cog, double self_sog, double ts_x, double ts_y, double ts_cog, double ts_sog)
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



	void 
	simulationBasedMpc::rot2d(double yaw, Eigen::Vector2d &res)
	{
		Eigen::Matrix2d R;
		R << cos(yaw), -sin(yaw),
			sin(yaw), cos(yaw);
		res = R*res;
	}


	// Normalize angle, option 1
	inline double 
	simulationBasedMpc::normalize_angle(double angle)
	{
		//while(angle <= -M_PI) angle += 2*M_PI;
		//while (angle > M_PI) angle -= 2*M_PI;
		if (angle <= -M_PI)
		{
			angle += 2*M_PI;
		}
		else if (angle > M_PI)
		{
			angle -= 2*M_PI;
		}
		return angle;
	}


	inline double 
	simulationBasedMpc::normalize_angle_360(double angle){
		angle = fmod(angle,2*M_PI);
		if(angle < 0)
		angle += 2*M_PI;
		return angle;
	}


	inline double 
	simulationBasedMpc::angle_diff(double a,double b){
		double dif = fmod(b - a + M_PI,2*M_PI);
		if(dif < 0)
			dif += 2*M_PI;
		return dif - M_PI;
	}

	
	// Normalize angle, option 2 - requires math.h
	/*inline double simulationBasedMpc::normalize_angle(double angle)
	{
		angle = fmod(angle + M_PI, 2*M_PI);
		if(angle < 0) angle += 2*M_PI;
		return angle -  M_PI;
	}*/

	double simulationBasedMpc::getT(){
		return T_;
	}

	double simulationBasedMpc::getDt(){
		return DT_;
	}

	double simulationBasedMpc::getP(){
		return P_;
	}

	double simulationBasedMpc::getQ(){
		return Q_;
	}

	double simulationBasedMpc::getDClose(){
		return D_CLOSE_;
	}

	double simulationBasedMpc::getDSafe(){
		return D_SAFE_;
	}

	double simulationBasedMpc::getKColl(){
		return K_COLL_;
	}

	double simulationBasedMpc::getPhiAH(){
		return PHI_AH_;
	}

	double simulationBasedMpc::getPhiOT(){
		return PHI_OT_;
	}

	double simulationBasedMpc::getPhiHO(){
		return PHI_HO_;
	}

	double simulationBasedMpc::getPhiCR(){
		return PHI_CR_;
	}

	double simulationBasedMpc::getKappa(){
		return KAPPA_;
	}

	double simulationBasedMpc::getKP(){
		return K_P_;
	}

	double simulationBasedMpc::getKdP(){
		return K_DP_;
	}

	double simulationBasedMpc::getKChi(){
		return K_CHI_;
	}

	double simulationBasedMpc::getKdChiSB(){
		return K_DCHI_SB_;
	}

	double simulationBasedMpc::getKdChiP(){
		return K_DCHI_P_;
	}

	Eigen::VectorXd simulationBasedMpc::getChiCA(){
		return Chi_ca_*RAD2DEG;
	}

	Eigen::VectorXd simulationBasedMpc::getPCA(){
		return P_ca_;
	}

	double simulationBasedMpc::getKChiSB(){
		return K_CHI_SB_;
	}

	double simulationBasedMpc::getKChiP(){
		return K_CHI_P_;
	}

	void simulationBasedMpc::setP(double p){
		if(p>0.0) P_ = p;
	}

	void simulationBasedMpc::setQ(double q){
		if(q>0.0) Q_ = q;
	}

	void simulationBasedMpc::setDClose(double d_close){
		if(d_close>D_SAFE_) D_CLOSE_ = d_close;
	}

	void simulationBasedMpc::setDSafe(double d_safe){
		if(d_safe>20.0) D_SAFE_ = d_safe;
	}

	void simulationBasedMpc::setKColl(double k_coll){
		if(k_coll>0.0) K_COLL_ = k_coll;
	}

	void simulationBasedMpc::setPhiAH(double phi_AH){
		PHI_AH_ = phi_AH;
	}

	void simulationBasedMpc::setPhiOT(double phi_OT){
		PHI_OT_ = phi_OT;
	}

	void simulationBasedMpc::setPhiHO(double phi_HO){
		PHI_HO_ = phi_HO;
	}

	void simulationBasedMpc::setPhiCR(double phi_CR){
		PHI_CR_ = phi_CR;
	}

	void simulationBasedMpc::setKappa(double kappa){
		if(kappa>0.0) KAPPA_ = kappa;
	}

	void simulationBasedMpc::setKP(double K_P){
		if(K_P>0.0) K_P_ = K_P;
	}

	void simulationBasedMpc::setKdP(double K_dP){
		if(K_dP>0.0 && K_dP<1) K_DP_ = K_dP;
	}

	void simulationBasedMpc::setKChi(double K_Chi){
		if(K_Chi>0.0) K_CHI_ = K_Chi;
	}

	void simulationBasedMpc::setKdChiSB(double K_dChi_SB){
		if(K_dChi_SB>0.0 && K_dChi_SB<1) K_DCHI_SB_ = K_dChi_SB;
	}

	void simulationBasedMpc::setKdChiP(double K_dChi_P){
		if(K_dChi_P>0.0 && K_dChi_P <1) K_DCHI_P_ = K_dChi_P;
	}

	void simulationBasedMpc::setChiCA(Eigen::VectorXd Chi_ca){
		Chi_ca_.resize(Chi_ca.size());
		Chi_ca_ = Chi_ca*DEG2RAD;
	}

	void simulationBasedMpc::setPCA(Eigen::VectorXd P_ca){
		P_ca_.resize(P_ca.size());
		P_ca_ = P_ca;
	}

	void simulationBasedMpc::setKChiSB(double K_Chi_SB){
		if(K_Chi_SB>0.0) K_CHI_SB_ = K_Chi_SB;
	}

	void simulationBasedMpc::setKChiP(double K_Chi_P){
		if(K_Chi_P>0.0) K_CHI_P_ = K_Chi_P;
	}

}

}
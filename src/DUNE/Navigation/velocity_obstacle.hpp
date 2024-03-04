/**
 *    \file   velocity_obstacle.hpp
 *    \brief  Declares the Velocity Obstacle collision avoidance algorithm class.
 *    \author Melih Akdağ.
 */

#ifndef DUNE_NAVIGATION_VELOCITY_OBSTACLE_HPP_INCLUDED_
#define DUNE_NAVIGATION_VELOCITY_OBSTACLE_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/DUNE.hpp>
#include <Eigen/Dense>
#include <eFLL/Fuzzy.h>

namespace DUNE
{
  namespace Navigation
  {
	  // Export DLL Symbol.
    class DUNE_DLL_SYM velocityObstacle;
    
		class velocityObstacle
		{
			public:
			/// Constructor
			velocityObstacle();
		
			/// Destructor
			~velocityObstacle();
		
		
			void create(double D_CLOSE, double D_SAFE, double K_COLL, double PHI_AH, double PHI_OT, double PHI_HO, double PHI_CR, double KAPPA, double K_DP, double K_DCHI);
		
			std::tuple<double, double, double> velocityUpdate(double psi_des, double U_des, const std::vector<double>& asv_state, const Math::Matrix& obst_states);
			
			Eigen::Vector2d Vs_opt_prev;

			Eigen::VectorXd Chi_ca_;
			Eigen::VectorXd P_ca_;
			
			/**
			 * @brief Returns the distance where COLREGS are said to apply [m].
			 */
			double getDClose();
		  /**
		   * @brief Returns the minimum distance which is considered as safe [m].
		   */
		  double getDSafe();
		  /**
		   * @brief Returns the collision cost
		   */
		  double getKColl();
			/**
			 * @brief Returns the angle within which an obstacle is said to be ahead
			 * [deg].
			 */
			double getPhiAH();
			/**
			 * @brief Returns the angle outside of which an obstacle will be said to
			 * be overtaking, if the speed of the obstacle is larger than the ship's
			 * own speed.
			 */
			double getPhiOT();
			/**
			 * @brief Returns the angle within which an obstacle is said to be head
			 * on [deg].
			 */
			double getPhiHO();
			/**
			 * @brief Returns the angle outside of which an obstacle is said to be
			 * crossing, if it is on the starboard side, heading towards the ship
			 * and not overtaking the ship.
			 */
			double getPhiCR();
			/**
			 * @brief Returns the cost of not complying with the COLREGS.
			 */
			double getKappa();
			/**
			 * @brief Returns the cost of changing the speed offset.
			 */
			double getKdP();
			/**
			 * @brief Returns the cost of changing the heading offset.
			 */
			double getKdChi();

			void setDClose(double d_close);
			void setDSafe(double d_safe);
			void setKColl(double k_coll);
			void setPhiAH(double phi_AH);
			void setPhiOT(double phi_OT);
			void setPhiHO(double phi_HO);
			void setPhiCR(double phi_CR);
			void setKappa(double kappa);
			void setKdP(double K_dP);
			void setKdChi(double K_dChi);

			double D_CLOSE_;

			private:
			Eigen::Vector2d computeVelocityDesired(double psi_des, double U_des);
			std::tuple<double, double> calculateDesiredCourseAndSpeed(const Eigen::Vector2d& V_opt);
			std::tuple<double, double, double> intersect(const Eigen::Vector2d& Ps, const Eigen::Vector2d& Vs, double psi_des, double U_des, const Math::Matrix& VO_all);
			bool in_between(double theta_right, double theta_dif, double theta_left);
			double distance(const Eigen::Vector2d& Ps, const Eigen::Vector2d& Po);
			std::tuple<double, double> calculateCPA(const Eigen::Vector2d& Ps, const Eigen::Vector2d& Vs, const Eigen::Vector2d& Po, const Eigen::Vector2d& Vo);
			inline double normalize_angle(double angle); 
			inline double normalize_angle_360(double angle);

			double D_SAFE_;
			double K_COLL_;
			double PHI_AH_;
			double PHI_OT_;
			double PHI_HO_;
			double PHI_CR_;
			double KAPPA_;
			double K_DP_;
			double K_DCHI_;
		};
  }
}

#endif
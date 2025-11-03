///////////////////////////////////////////////////////////
//  engines.h
//  Implementation of the Class engines
//  Created on:      04-Feb-2014 13:33:34
//  Original author: Torsten
///////////////////////////////////////////////////////////

#if !defined(EA_D3B6AFA6_9E6B_4a31_8A7F_2B6E706D0823__INCLUDED_)
#define EA_D3B6AFA6_9E6B_4a31_8A7F_2B6E706D0823__INCLUDED_

#include <ros/ros.h>
#include <string>
#include <std_msgs/Float64.h>
#include <std_msgs/Int32.h>
#include <std_msgs/Int64.h>

#include "explorer_comms.h"
#include <phidget21.h>

namespace floribot_engines
{
	class engines
	{

	public:
        
		int left_motor_center;
		int left_motor_range;
		int right_motor_center;
		int right_motor_range;
		int tick_rate;
		std::string tty_scc_32;
		int left_serial_number;
		int right_serial_number;

		engines(ros::NodeHandle nh);
		virtual ~engines();
		void left_power_message(const std_msgs::Float64::ConstPtr& msg);
		void right_power_message(const std_msgs::Float64::ConstPtr& msg);
      	void publish_left_encoder();
		void publish_right_encoder();

		void tick(const ros::TimerEvent& event);

	private:
		std_msgs::Int64 left_encoder_msg;
		std_msgs::Int64 right_encoder_msg;

		ros::Subscriber left_power_sub;
		ros::Subscriber right_power_sub;
        ros::Publisher left_encoder_pub;
		ros::Publisher right_encoder_pub;

		/**
		 * NodeHandle for engines
		 */
		ros::NodeHandle nodehandle;
		/**
		 * Timer for engines
		 */
		ros::Timer timer;

	    /** The SSC-32 comm port **/
	    explorer_comm_t *m_ssc32Dev;
        
		// Handle for Encoder
		CPhidgetEncoderHandle left_phid;
		CPhidgetEncoderHandle right_phid;
        
		void initialize();
		void read_ROS_Params();

	};

}
#endif // !defined(EA_D3B6AFA6_9E6B_4a31_8A7F_2B6E706D0823__INCLUDED_)

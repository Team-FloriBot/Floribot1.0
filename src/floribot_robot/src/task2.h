///////////////////////////////////////////////////////////
//  task2.h
//  Implementation of the Class task2
//  Created on:      04-Feb-2014 14:38:32
//  Original author: Torsten
///////////////////////////////////////////////////////////

#if !defined(EA_240FB0E0_5CAD_4231_8553_5FCFA477F001__INCLUDED_)
#define EA_240FB0E0_5CAD_4231_8553_5FCFA477F001__INCLUDED_

#include <ros/ros.h>
#include <string>
#include <sensor_msgs/LaserScan.h>
#include <floribot_engines/encoder_params.h>
#include <floribot_engines/interface_kit_params.h>
#include <sensor_msgs/Joy.h>
#include <geometry_msgs/Twist.h>
#include <std_msgs/Float64.h>
#include <sensor_msgs/JoyFeedbackArray.h>


namespace floribot_robot
{
	class task2
	{

	public:
		geometry_msgs::Twist cmd_vel_msg;
		sensor_msgs::JoyFeedbackArray joy_feedback_msg;
		std_msgs::Float64 left_power_msg;
		std_msgs::Float64 right_power_msg;

		task2(ros::NodeHandle nh);
		virtual ~task2();
		void interface_kit_message(const floribot_engines::interface_kit_params::ConstPtr& msg);
		void joy_message(const sensor_msgs::Joy::ConstPtr& msg);
		void left_encoder_message(const floribot_engines::encoder_params::ConstPtr& msg);
		void publish_cmd_vel();
		void publish_joy_feedback();
		void publish_left_power();
		void publish_right_power();
		void right_encoder_message(const floribot_engines::encoder_params::ConstPtr& msg);
		void scan_message(const sensor_msgs::LaserScan::ConstPtr& msg);
		void tick(const ros::TimerEvent& event);

	private:
		ros::Publisher cmd_vel_pub;
		ros::Subscriber interface_kit_sub;
		ros::Publisher joy_feedback_pub;
		ros::Subscriber joy_sub;
		ros::Subscriber left_encoder_sub;
		ros::Publisher left_power_pub;
		/**
		 * NodeHandle for task2
		 */
		ros::NodeHandle nodehandle;
		ros::Subscriber right_encoder_sub;
		ros::Publisher right_power_pub;
		ros::Subscriber scan_sub;
		/**
		 * Timer for task2
		 */
		ros::Timer timer;

		void initialize();
		void read_ROS_Params();

	};

}
#endif // !defined(EA_240FB0E0_5CAD_4231_8553_5FCFA477F001__INCLUDED_)

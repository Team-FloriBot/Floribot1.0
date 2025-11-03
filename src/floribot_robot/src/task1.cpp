///////////////////////////////////////////////////////////
//  task1.cpp
//  Implementation of the Class task1
//  Created on:      04-Feb-2014 14:38:32
//  Original author: Torsten
///////////////////////////////////////////////////////////

#include "task1.h"
#include <task1_ert_rtw/task1.h>
#include "task1_params.h"

using floribot_robot::task1;




/**
 * Constructor for task1
 */
task1::task1(ros::NodeHandle nh)
    : nodehandle(nh){

	scan_sub = nodehandle.subscribe("scan", 1, &task1::scan_message, this);
	left_encoder_sub = nodehandle.subscribe("floribot_engines/left_encoder/102191", 1, &task1::left_encoder_message, this);
	right_encoder_sub = nodehandle.subscribe("floribot_engines/right_encoder/101902", 1, &task1::right_encoder_message, this);
	interface_kit_sub = nodehandle.subscribe("floribot_engines/interface_kit", 1, &task1::interface_kit_message, this);
	joy_sub = nodehandle.subscribe("joy", 1, &task1::joy_message, this);
	cmd_vel_pub = nodehandle.advertise<geometry_msgs::Twist>("cmd_vel",1);
	left_power_pub = nodehandle.advertise<std_msgs::Float64>("left_power",1);
	right_power_pub = nodehandle.advertise<std_msgs::Float64>("right_power",1);
	joy_feedback_pub = nodehandle.advertise<sensor_msgs::JoyFeedbackArray>("joy_feedback",1);
	read_ROS_Params();
	timer = nodehandle.createTimer(ros::Duration(1.0/tick_rate), &task1::tick, this);
	initialize();
}

task1::~task1() {
	task1_terminate();
}

/**
 * initialize user specific variables
 */
void task1::initialize(){
	task1_initialize();
}


/**
 * Callback method for topic interface_kit
 */
void task1::interface_kit_message(const floribot_engines::interface_kit_params::ConstPtr& msg){

	// Start of user code process message from topic phidgets/interface_kit
	ROS_INFO("phidgets_interface_kit_message: %d", msg->value_type);
    floribot_engines::interface_kit_params ifk = *msg;
    switch(ifk.value_type)
    {
        case 1: { // digital input
            ROS_INFO("Digital input %d State %d", ifk.index, ifk.value);
            break;
        }
        case 2: { // digital output
            ROS_INFO("Digital output %d State %d", ifk.index, ifk.value);
            break;
        }
        case 3: { // sensor
            ROS_INFO("Sensor %d Value %d", ifk.index, ifk.value);
            if(ifk.index == 0) {
            	task1_U.battery_voltage = ifk.value;
            }
            break;
        }
    }
}


/**
 * Callback method for topic joy
 */
void task1::joy_message(const sensor_msgs::Joy::ConstPtr& msg){
	task1_U.button_1 = msg->buttons[0];
	task1_U.button_2 = msg->buttons[1];
	task1_U.button_A = msg->buttons[2];
	task1_U.button_B = msg->buttons[3];
	task1_U.button_left = msg->buttons[6];
	task1_U.button_right = msg->buttons[7];
	task1_U.button_up = msg->buttons[8];
	task1_U.button_down = msg->buttons[9];
	task1_U.joy_roll = msg->axes[0];
	task1_U.joy_pitch = msg->axes[1];
	task1_U.joy_yaw = msg->axes[2];
}


/**
 * Callback method for topic left_encoder
 */
void task1::left_encoder_message(const floribot_engines::encoder_params::ConstPtr& msg){
	task1_U.left_encoder = msg->count;
}


/**
 * Convenience method to publish on topic cmd_vel
 */
void task1::publish_cmd_vel(){
	cmd_vel_msg.linear.x = task1_Y.cmd_vel_x;
	cmd_vel_msg.angular.z = task1_Y.cmd_vel_yaw;
	cmd_vel_pub.publish(cmd_vel_msg);
}


/**
 * Convenience method to publish on topic joy_feedback
 */
void task1::publish_joy_feedback(){
	joy_feedback_msg.array.clear();
	sensor_msgs::JoyFeedback led1;
	led1.type = 0;
	led1.id = 0;
	led1.intensity = task1_Y.joy_leds[0];
	joy_feedback_msg.array.push_back(led1);
	sensor_msgs::JoyFeedback led2;
	led2.type = 0;
	led2.id = 1;
	led2.intensity = task1_Y.joy_leds[0];
	joy_feedback_msg.array.push_back(led2);
	sensor_msgs::JoyFeedback led3;
	led3.type = 0;
	led3.id = 2;
	led3.intensity = task1_Y.joy_leds[0];
	joy_feedback_msg.array.push_back(led3);
	sensor_msgs::JoyFeedback led4;
	led4.type = 0;
	led4.id = 3;
	led4.intensity = task1_Y.joy_leds[0];
	joy_feedback_msg.array.push_back(led4);
	sensor_msgs::JoyFeedback rumble;
	rumble.type = 1;
	rumble.id = 0;
	rumble.intensity = task1_Y.joy_rumble;
	joy_feedback_msg.array.push_back(rumble);
	joy_feedback_pub.publish(joy_feedback_msg);
}


/**
 * Convenience method to publish on topic left_power
 */
void task1::publish_left_power(){
	left_power_msg.data = task1_Y.left_power;
	left_power_pub.publish(left_power_msg);
}


/**
 * Convenience method to publish on topic right_power
 */
void task1::publish_right_power(){
	right_power_msg.data = task1_Y.right_power;
	right_power_pub.publish(right_power_msg);
}


/**
 * reads the ROS parameters for task1 from the parameter server
 */
void task1::read_ROS_Params(){

	encoder_ticks_per_mm = 280;
	nodehandle.getParam("task1/encoder_ticks_per_mm", encoder_ticks_per_mm);
	laser_position_x = 0.25;
	nodehandle.getParam("task1/laser_position_x", laser_position_x);
	robot_diameter = 0.60;
	nodehandle.getParam("task1/robot_diameter", robot_diameter);
	row_width = 0.75;
	nodehandle.getParam("task1/row_width", row_width);
	tick_rate = 100;
	nodehandle.getParam("task1/tick_rate", tick_rate);
	voltage_threshold = 8.0;
	nodehandle.getParam("task1/voltage_threshold", voltage_threshold);
	wheel_diameter = 0.2;
	nodehandle.getParam("task1/wheel_diameter", wheel_diameter);
	wheel_distance_in_between = 0.55;
	nodehandle.getParam("task1/wheel_distance_in_between", wheel_distance_in_between);
	pattern = 1212121212;
	nodehandle.getParam("task1/pattern", pattern);
	pattern2 = 1212121212;
	nodehandle.getParam("task1/pattern2", pattern2);
}


/**
 * Callback method for topic right_encoder
 */
void task1::right_encoder_message(const floribot_engines::encoder_params::ConstPtr& msg){
	task1_U.right_encoder = msg->count;
}


/**
 * Callback method for topic scan
 */
void task1::scan_message(const sensor_msgs::LaserScan::ConstPtr& msg){
	//task1_U.scan_angle_min = msg->angle_min;
	//task1_U.scan_angle_max = msg->angle_max;
	//task1_U.scan_angle_increment = msg->angle_increment;
	for (int var = 0; var < msg->ranges.size(); var++) {
		task1_U.scan_ranges[var] =  msg->ranges[var];
	}
}


/**
 * tick function for task1
 */
void task1::tick(const ros::TimerEvent& event){

	task1_step();
	publish_cmd_vel();
	publish_joy_feedback();
	publish_left_power();
	publish_right_power();
}

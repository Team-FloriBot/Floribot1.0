#include "slros_initialize.h"

ros::NodeHandle * SLROSNodePtr;
const std::string SLROSNodeName = "FRE2019_tasks_drive";

// For Block FRE2019_tasks_drive/Subscribe1
SimulinkSubscriber<geometry_msgs::Twist, SL_Bus_FRE2019_tasks_drive_geometry_msgs_Twist> Sub_FRE2019_tasks_drive_123;

// For Block FRE2019_tasks_drive/Subscribe10
SimulinkSubscriber<std_msgs::Bool, SL_Bus_FRE2019_tasks_drive_std_msgs_Bool> Sub_FRE2019_tasks_drive_142;

// For Block FRE2019_tasks_drive/Subscribe11
SimulinkSubscriber<std_msgs::Bool, SL_Bus_FRE2019_tasks_drive_std_msgs_Bool> Sub_FRE2019_tasks_drive_145;

// For Block FRE2019_tasks_drive/Subscribe12
SimulinkSubscriber<std_msgs::Bool, SL_Bus_FRE2019_tasks_drive_std_msgs_Bool> Sub_FRE2019_tasks_drive_226;

// For Block FRE2019_tasks_drive/Subscribe2
SimulinkSubscriber<std_msgs::Bool, SL_Bus_FRE2019_tasks_drive_std_msgs_Bool> Sub_FRE2019_tasks_drive_126;

// For Block FRE2019_tasks_drive/Subscribe3
SimulinkSubscriber<std_msgs::Float64, SL_Bus_FRE2019_tasks_drive_std_msgs_Float64> Sub_FRE2019_tasks_drive_112;

// For Block FRE2019_tasks_drive/Subscribe4
SimulinkSubscriber<std_msgs::Bool, SL_Bus_FRE2019_tasks_drive_std_msgs_Bool> Sub_FRE2019_tasks_drive_133;

// For Block FRE2019_tasks_drive/Subscribe5
SimulinkSubscriber<std_msgs::Float64, SL_Bus_FRE2019_tasks_drive_std_msgs_Float64> Sub_FRE2019_tasks_drive_113;

// For Block FRE2019_tasks_drive/Subscribe6
SimulinkSubscriber<std_msgs::Bool, SL_Bus_FRE2019_tasks_drive_std_msgs_Bool> Sub_FRE2019_tasks_drive_136;

// For Block FRE2019_tasks_drive/Subscribe7
SimulinkSubscriber<std_msgs::Float64, SL_Bus_FRE2019_tasks_drive_std_msgs_Float64> Sub_FRE2019_tasks_drive_118;

// For Block FRE2019_tasks_drive/Subscribe8
SimulinkSubscriber<std_msgs::Bool, SL_Bus_FRE2019_tasks_drive_std_msgs_Bool> Sub_FRE2019_tasks_drive_139;

// For Block FRE2019_tasks_drive/Subscribe9
SimulinkSubscriber<std_msgs::Float64, SL_Bus_FRE2019_tasks_drive_std_msgs_Float64> Sub_FRE2019_tasks_drive_119;

// For Block FRE2019_tasks_drive/Publish
SimulinkPublisher<geometry_msgs::Twist, SL_Bus_FRE2019_tasks_drive_geometry_msgs_Twist> Pub_FRE2019_tasks_drive_5;

void slros_node_init(int argc, char** argv)
{
  ros::init(argc, argv, SLROSNodeName);
  SLROSNodePtr = new ros::NodeHandle();
}


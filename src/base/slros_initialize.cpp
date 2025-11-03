#include "slros_initialize.h"

ros::NodeHandle * SLROSNodePtr;
const std::string SLROSNodeName = "base";

// For Block base/Subscribe
SimulinkSubscriber<geometry_msgs::Twist, SL_Bus_base_geometry_msgs_Twist> Sub_base_633;

// For Block base/Subscribe1
SimulinkSubscriber<std_msgs::Int64, SL_Bus_base_std_msgs_Int64> Sub_base_634;

// For Block base/Subscribe2
SimulinkSubscriber<std_msgs::Int64, SL_Bus_base_std_msgs_Int64> Sub_base_635;

// For Block base/Publish
SimulinkPublisher<std_msgs::Float64, SL_Bus_base_std_msgs_Float64> Pub_base_631;

// For Block base/Publish1
SimulinkPublisher<std_msgs::Float64, SL_Bus_base_std_msgs_Float64> Pub_base_632;

// For Block base/Publish2
SimulinkPublisher<nav_msgs::Odometry, SL_Bus_base_nav_msgs_Odometry> Pub_base_649;

// For Block base/Get Parameter
SimulinkParameterGetter<real64_T, double> ParamGet_base_647;

// For Block base/Get Parameter1
SimulinkParameterGetter<real64_T, double> ParamGet_base_648;

void slros_node_init(int argc, char** argv)
{
  ros::init(argc, argv, SLROSNodeName);
  SLROSNodePtr = new ros::NodeHandle();
}


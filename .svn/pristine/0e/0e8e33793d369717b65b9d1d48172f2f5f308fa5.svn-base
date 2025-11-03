#ifndef _SLROS_INITIALIZE_H_
#define _SLROS_INITIALIZE_H_

#include "slros_busmsg_conversion.h"
#include "slros_generic.h"

extern ros::NodeHandle * SLROSNodePtr;
extern const std::string SLROSNodeName;

// For Block base/Subscribe
extern SimulinkSubscriber<geometry_msgs::Twist, SL_Bus_base_geometry_msgs_Twist> Sub_base_633;

// For Block base/Subscribe1
extern SimulinkSubscriber<std_msgs::Int64, SL_Bus_base_std_msgs_Int64> Sub_base_634;

// For Block base/Subscribe2
extern SimulinkSubscriber<std_msgs::Int64, SL_Bus_base_std_msgs_Int64> Sub_base_635;

// For Block base/Publish
extern SimulinkPublisher<std_msgs::Float64, SL_Bus_base_std_msgs_Float64> Pub_base_631;

// For Block base/Publish1
extern SimulinkPublisher<std_msgs::Float64, SL_Bus_base_std_msgs_Float64> Pub_base_632;

// For Block base/Publish2
extern SimulinkPublisher<nav_msgs::Odometry, SL_Bus_base_nav_msgs_Odometry> Pub_base_649;

// For Block base/Get Parameter
extern SimulinkParameterGetter<real64_T, double> ParamGet_base_647;

// For Block base/Get Parameter1
extern SimulinkParameterGetter<real64_T, double> ParamGet_base_648;

void slros_node_init(int argc, char** argv);

#endif

#ifndef _SLROS_INITIALIZE_H_
#define _SLROS_INITIALIZE_H_

#include "slros_busmsg_conversion.h"
#include "slros_generic.h"

extern ros::NodeHandle * SLROSNodePtr;
extern const std::string SLROSNodeName;

// For Block FRE2019_row_detection/Subscribe
extern SimulinkSubscriber<sensor_msgs::LaserScan, SL_Bus_FRE2019_row_detection_sensor_msgs_LaserScan> Sub_FRE2019_row_detection_99;

// For Block FRE2019_row_detection/Publish
extern SimulinkPublisher<std_msgs::Float64, SL_Bus_FRE2019_row_detection_std_msgs_Float64> Pub_FRE2019_row_detection_102;

// For Block FRE2019_row_detection/Publish1
extern SimulinkPublisher<std_msgs::Float64, SL_Bus_FRE2019_row_detection_std_msgs_Float64> Pub_FRE2019_row_detection_103;

// For Block FRE2019_row_detection/Publish2
extern SimulinkPublisher<std_msgs::Float64, SL_Bus_FRE2019_row_detection_std_msgs_Float64> Pub_FRE2019_row_detection_106;

// For Block FRE2019_row_detection/Publish3
extern SimulinkPublisher<std_msgs::Float64, SL_Bus_FRE2019_row_detection_std_msgs_Float64> Pub_FRE2019_row_detection_107;

// For Block FRE2019_row_detection/Publish4
extern SimulinkPublisher<std_msgs::Float64, SL_Bus_FRE2019_row_detection_std_msgs_Float64> Pub_FRE2019_row_detection_113;

// For Block FRE2019_row_detection/Publish5
extern SimulinkPublisher<std_msgs::Float64, SL_Bus_FRE2019_row_detection_std_msgs_Float64> Pub_FRE2019_row_detection_114;

void slros_node_init(int argc, char** argv);

#endif

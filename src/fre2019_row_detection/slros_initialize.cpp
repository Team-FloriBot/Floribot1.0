#include "slros_initialize.h"

ros::NodeHandle * SLROSNodePtr;
const std::string SLROSNodeName = "FRE2019_row_detection";

// For Block FRE2019_row_detection/Subscribe
SimulinkSubscriber<sensor_msgs::LaserScan, SL_Bus_FRE2019_row_detection_sensor_msgs_LaserScan> Sub_FRE2019_row_detection_99;

// For Block FRE2019_row_detection/Publish
SimulinkPublisher<std_msgs::Float64, SL_Bus_FRE2019_row_detection_std_msgs_Float64> Pub_FRE2019_row_detection_102;

// For Block FRE2019_row_detection/Publish1
SimulinkPublisher<std_msgs::Float64, SL_Bus_FRE2019_row_detection_std_msgs_Float64> Pub_FRE2019_row_detection_103;

// For Block FRE2019_row_detection/Publish2
SimulinkPublisher<std_msgs::Float64, SL_Bus_FRE2019_row_detection_std_msgs_Float64> Pub_FRE2019_row_detection_106;

// For Block FRE2019_row_detection/Publish3
SimulinkPublisher<std_msgs::Float64, SL_Bus_FRE2019_row_detection_std_msgs_Float64> Pub_FRE2019_row_detection_107;

// For Block FRE2019_row_detection/Publish4
SimulinkPublisher<std_msgs::Float64, SL_Bus_FRE2019_row_detection_std_msgs_Float64> Pub_FRE2019_row_detection_113;

// For Block FRE2019_row_detection/Publish5
SimulinkPublisher<std_msgs::Float64, SL_Bus_FRE2019_row_detection_std_msgs_Float64> Pub_FRE2019_row_detection_114;

void slros_node_init(int argc, char** argv)
{
  ros::init(argc, argv, SLROSNodeName);
  SLROSNodePtr = new ros::NodeHandle();
}


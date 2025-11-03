#include "slros_initialize.h"

ros::NodeHandle * SLROSNodePtr;
const std::string SLROSNodeName = "FRE2019_tasks_logic";

// For Block FRE2019_tasks_logic/Subscribe10
SimulinkSubscriber<std_msgs::Float64, SL_Bus_FRE2019_tasks_logic_std_msgs_Float64> Sub_FRE2019_tasks_logic_346;

// For Block FRE2019_tasks_logic/Subscribe11
SimulinkSubscriber<std_msgs::Float64, SL_Bus_FRE2019_tasks_logic_std_msgs_Float64> Sub_FRE2019_tasks_logic_347;

// For Block FRE2019_tasks_logic/Subscribe2
SimulinkSubscriber<std_msgs::Bool, SL_Bus_FRE2019_tasks_logic_std_msgs_Bool> Sub_FRE2019_tasks_logic_226;

// For Block FRE2019_tasks_logic/Subscribe4
SimulinkSubscriber<sensor_msgs::Joy, SL_Bus_FRE2019_tasks_logic_sensor_msgs_Joy> Sub_FRE2019_tasks_logic_228;

// For Block FRE2019_tasks_logic/Subscribe7
SimulinkSubscriber<std_msgs::Float64, SL_Bus_FRE2019_tasks_logic_std_msgs_Float64> Sub_FRE2019_tasks_logic_343;

// For Block FRE2019_tasks_logic/Subscribe9
SimulinkSubscriber<std_msgs::Float64, SL_Bus_FRE2019_tasks_logic_std_msgs_Float64> Sub_FRE2019_tasks_logic_345;

// For Block FRE2019_tasks_logic/Publish
SimulinkPublisher<std_msgs::Bool, SL_Bus_FRE2019_tasks_logic_std_msgs_Bool> Pub_FRE2019_tasks_logic_368;

// For Block FRE2019_tasks_logic/Publish1
SimulinkPublisher<std_msgs::Bool, SL_Bus_FRE2019_tasks_logic_std_msgs_Bool> Pub_FRE2019_tasks_logic_369;

// For Block FRE2019_tasks_logic/Publish2
SimulinkPublisher<std_msgs::Bool, SL_Bus_FRE2019_tasks_logic_std_msgs_Bool> Pub_FRE2019_tasks_logic_370;

// For Block FRE2019_tasks_logic/Publish3
SimulinkPublisher<std_msgs::Bool, SL_Bus_FRE2019_tasks_logic_std_msgs_Bool> Pub_FRE2019_tasks_logic_371;

// For Block FRE2019_tasks_logic/Publish4
SimulinkPublisher<std_msgs::Bool, SL_Bus_FRE2019_tasks_logic_std_msgs_Bool> Pub_FRE2019_tasks_logic_372;

// For Block FRE2019_tasks_logic/Publish5
SimulinkPublisher<std_msgs::Bool, SL_Bus_FRE2019_tasks_logic_std_msgs_Bool> Pub_FRE2019_tasks_logic_373;

void slros_node_init(int argc, char** argv)
{
  ros::init(argc, argv, SLROSNodeName);
  SLROSNodePtr = new ros::NodeHandle();
}


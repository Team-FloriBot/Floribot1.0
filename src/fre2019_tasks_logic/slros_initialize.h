#ifndef _SLROS_INITIALIZE_H_
#define _SLROS_INITIALIZE_H_

#include "slros_busmsg_conversion.h"
#include "slros_generic.h"

extern ros::NodeHandle * SLROSNodePtr;
extern const std::string SLROSNodeName;

// For Block FRE2019_tasks_logic/Subscribe10
extern SimulinkSubscriber<std_msgs::Float64, SL_Bus_FRE2019_tasks_logic_std_msgs_Float64> Sub_FRE2019_tasks_logic_346;

// For Block FRE2019_tasks_logic/Subscribe11
extern SimulinkSubscriber<std_msgs::Float64, SL_Bus_FRE2019_tasks_logic_std_msgs_Float64> Sub_FRE2019_tasks_logic_347;

// For Block FRE2019_tasks_logic/Subscribe2
extern SimulinkSubscriber<std_msgs::Bool, SL_Bus_FRE2019_tasks_logic_std_msgs_Bool> Sub_FRE2019_tasks_logic_226;

// For Block FRE2019_tasks_logic/Subscribe4
extern SimulinkSubscriber<sensor_msgs::Joy, SL_Bus_FRE2019_tasks_logic_sensor_msgs_Joy> Sub_FRE2019_tasks_logic_228;

// For Block FRE2019_tasks_logic/Subscribe7
extern SimulinkSubscriber<std_msgs::Float64, SL_Bus_FRE2019_tasks_logic_std_msgs_Float64> Sub_FRE2019_tasks_logic_343;

// For Block FRE2019_tasks_logic/Subscribe9
extern SimulinkSubscriber<std_msgs::Float64, SL_Bus_FRE2019_tasks_logic_std_msgs_Float64> Sub_FRE2019_tasks_logic_345;

// For Block FRE2019_tasks_logic/Publish
extern SimulinkPublisher<std_msgs::Bool, SL_Bus_FRE2019_tasks_logic_std_msgs_Bool> Pub_FRE2019_tasks_logic_368;

// For Block FRE2019_tasks_logic/Publish1
extern SimulinkPublisher<std_msgs::Bool, SL_Bus_FRE2019_tasks_logic_std_msgs_Bool> Pub_FRE2019_tasks_logic_369;

// For Block FRE2019_tasks_logic/Publish2
extern SimulinkPublisher<std_msgs::Bool, SL_Bus_FRE2019_tasks_logic_std_msgs_Bool> Pub_FRE2019_tasks_logic_370;

// For Block FRE2019_tasks_logic/Publish3
extern SimulinkPublisher<std_msgs::Bool, SL_Bus_FRE2019_tasks_logic_std_msgs_Bool> Pub_FRE2019_tasks_logic_371;

// For Block FRE2019_tasks_logic/Publish4
extern SimulinkPublisher<std_msgs::Bool, SL_Bus_FRE2019_tasks_logic_std_msgs_Bool> Pub_FRE2019_tasks_logic_372;

// For Block FRE2019_tasks_logic/Publish5
extern SimulinkPublisher<std_msgs::Bool, SL_Bus_FRE2019_tasks_logic_std_msgs_Bool> Pub_FRE2019_tasks_logic_373;

void slros_node_init(int argc, char** argv);

#endif

#ifndef _SLROS_BUSMSG_CONVERSION_H_
#define _SLROS_BUSMSG_CONVERSION_H_

#include <ros/ros.h>
#include <ros/time.h>
#include <sensor_msgs/Joy.h>
#include <std_msgs/Bool.h>
#include <std_msgs/Float64.h>
#include <std_msgs/Header.h>
#include "FRE2019_tasks_logic_types.h"
#include "slros_msgconvert_utils.h"


void convertFromBus(ros::Time* msgPtr, SL_Bus_FRE2019_tasks_logic_ros_time_Time const* busPtr);
void convertToBus(SL_Bus_FRE2019_tasks_logic_ros_time_Time* busPtr, ros::Time const* msgPtr);

void convertFromBus(sensor_msgs::Joy* msgPtr, SL_Bus_FRE2019_tasks_logic_sensor_msgs_Joy const* busPtr);
void convertToBus(SL_Bus_FRE2019_tasks_logic_sensor_msgs_Joy* busPtr, sensor_msgs::Joy const* msgPtr);

void convertFromBus(std_msgs::Bool* msgPtr, SL_Bus_FRE2019_tasks_logic_std_msgs_Bool const* busPtr);
void convertToBus(SL_Bus_FRE2019_tasks_logic_std_msgs_Bool* busPtr, std_msgs::Bool const* msgPtr);

void convertFromBus(std_msgs::Float64* msgPtr, SL_Bus_FRE2019_tasks_logic_std_msgs_Float64 const* busPtr);
void convertToBus(SL_Bus_FRE2019_tasks_logic_std_msgs_Float64* busPtr, std_msgs::Float64 const* msgPtr);

void convertFromBus(std_msgs::Header* msgPtr, SL_Bus_FRE2019_tasks_logic_std_msgs_Header const* busPtr);
void convertToBus(SL_Bus_FRE2019_tasks_logic_std_msgs_Header* busPtr, std_msgs::Header const* msgPtr);


#endif

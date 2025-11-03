#include "slros_busmsg_conversion.h"


// Conversions between SL_Bus_FRE2019_row_detection_ros_time_Time and ros::Time

void convertFromBus(ros::Time* msgPtr, SL_Bus_FRE2019_row_detection_ros_time_Time const* busPtr)
{
  const std::string rosMessageType("ros_time/Time");

  msgPtr->sec =  busPtr->Sec;
  msgPtr->nsec =  busPtr->Nsec;
}

void convertToBus(SL_Bus_FRE2019_row_detection_ros_time_Time* busPtr, ros::Time const* msgPtr)
{
  const std::string rosMessageType("ros_time/Time");

  busPtr->Sec =  msgPtr->sec;
  busPtr->Nsec =  msgPtr->nsec;
}


// Conversions between SL_Bus_FRE2019_row_detection_sensor_msgs_LaserScan and sensor_msgs::LaserScan

void convertFromBus(sensor_msgs::LaserScan* msgPtr, SL_Bus_FRE2019_row_detection_sensor_msgs_LaserScan const* busPtr)
{
  const std::string rosMessageType("sensor_msgs/LaserScan");

  msgPtr->angle_increment =  busPtr->AngleIncrement;
  msgPtr->angle_max =  busPtr->AngleMax;
  msgPtr->angle_min =  busPtr->AngleMin;
  convertFromBus(&msgPtr->header, &busPtr->Header);
  convertFromBusVariablePrimitiveArray(msgPtr->intensities, busPtr->Intensities, busPtr->Intensities_SL_Info);
  msgPtr->range_max =  busPtr->RangeMax;
  msgPtr->range_min =  busPtr->RangeMin;
  convertFromBusVariablePrimitiveArray(msgPtr->ranges, busPtr->Ranges, busPtr->Ranges_SL_Info);
  msgPtr->scan_time =  busPtr->ScanTime;
  msgPtr->time_increment =  busPtr->TimeIncrement;
}

void convertToBus(SL_Bus_FRE2019_row_detection_sensor_msgs_LaserScan* busPtr, sensor_msgs::LaserScan const* msgPtr)
{
  const std::string rosMessageType("sensor_msgs/LaserScan");

  busPtr->AngleIncrement =  msgPtr->angle_increment;
  busPtr->AngleMax =  msgPtr->angle_max;
  busPtr->AngleMin =  msgPtr->angle_min;
  convertToBus(&busPtr->Header, &msgPtr->header);
  convertToBusVariablePrimitiveArray(busPtr->Intensities, busPtr->Intensities_SL_Info, msgPtr->intensities, slros::EnabledWarning(rosMessageType, "intensities"));
  busPtr->RangeMax =  msgPtr->range_max;
  busPtr->RangeMin =  msgPtr->range_min;
  convertToBusVariablePrimitiveArray(busPtr->Ranges, busPtr->Ranges_SL_Info, msgPtr->ranges, slros::EnabledWarning(rosMessageType, "ranges"));
  busPtr->ScanTime =  msgPtr->scan_time;
  busPtr->TimeIncrement =  msgPtr->time_increment;
}


// Conversions between SL_Bus_FRE2019_row_detection_std_msgs_Float64 and std_msgs::Float64

void convertFromBus(std_msgs::Float64* msgPtr, SL_Bus_FRE2019_row_detection_std_msgs_Float64 const* busPtr)
{
  const std::string rosMessageType("std_msgs/Float64");

  msgPtr->data =  busPtr->Data;
}

void convertToBus(SL_Bus_FRE2019_row_detection_std_msgs_Float64* busPtr, std_msgs::Float64 const* msgPtr)
{
  const std::string rosMessageType("std_msgs/Float64");

  busPtr->Data =  msgPtr->data;
}


// Conversions between SL_Bus_FRE2019_row_detection_std_msgs_Header and std_msgs::Header

void convertFromBus(std_msgs::Header* msgPtr, SL_Bus_FRE2019_row_detection_std_msgs_Header const* busPtr)
{
  const std::string rosMessageType("std_msgs/Header");

  convertFromBusVariablePrimitiveArray(msgPtr->frame_id, busPtr->FrameId, busPtr->FrameId_SL_Info);
  msgPtr->seq =  busPtr->Seq;
  convertFromBus(&msgPtr->stamp, &busPtr->Stamp);
}

void convertToBus(SL_Bus_FRE2019_row_detection_std_msgs_Header* busPtr, std_msgs::Header const* msgPtr)
{
  const std::string rosMessageType("std_msgs/Header");

  convertToBusVariablePrimitiveArray(busPtr->FrameId, busPtr->FrameId_SL_Info, msgPtr->frame_id, slros::EnabledWarning(rosMessageType, "frame_id"));
  busPtr->Seq =  msgPtr->seq;
  convertToBus(&busPtr->Stamp, &msgPtr->stamp);
}


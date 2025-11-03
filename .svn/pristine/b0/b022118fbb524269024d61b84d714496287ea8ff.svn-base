#include <ros/ros.h>
#include <tf2_ros/static_transform_broadcaster.h>
#include <tf2_ros/transform_broadcaster.h>

#include <geometry_msgs/TransformStamped.h>
#include <nav_msgs/Odometry.h>
#include <std_msgs/Float64.h>

#include <cstdio>
#include <tf2/LinearMath/Quaternion.h>


void odomCallback(const nav_msgs::OdometryConstPtr& msg){
  static tf2_ros::TransformBroadcaster br;
  geometry_msgs::TransformStamped transformStamped;
  
  transformStamped.header.stamp = ros::Time::now();
  transformStamped.header.frame_id = "odom";
  transformStamped.child_frame_id = "base_link";
  transformStamped.transform.translation.x = msg->pose.pose.position.x;
  transformStamped.transform.translation.y = msg->pose.pose.position.y;
  transformStamped.transform.translation.z = msg->pose.pose.position.z;
  transformStamped.transform.rotation.x = msg->pose.pose.orientation.x;
  transformStamped.transform.rotation.y = msg->pose.pose.orientation.y;
  transformStamped.transform.rotation.z = msg->pose.pose.orientation.z;
  transformStamped.transform.rotation.w = msg->pose.pose.orientation.w;

  br.sendTransform(transformStamped);
}

int main(int argc, char **argv)
{
  ros::init(argc,argv, "floribot_static_tf2_broadcaster");
  ros::NodeHandle node;

  std_msgs::Float64 laser_x;
  double lx = 0.17;
  node.getParam("laser/position_x", lx);
  laser_x.data = lx;
  std_msgs::Float64 frontcamera_x;
  double cx = 0.4;
  node.getParam("frontcamera/position_x", cx);
  frontcamera_x.data = cx;
  std_msgs::Float64 frontcamera_y;
  double cy = 0;
  node.getParam("frontcamera/position_y", cy);
  frontcamera_y.data = cy;
  static tf2_ros::StaticTransformBroadcaster static_broadcaster;
  geometry_msgs::TransformStamped static_transformStamped;

  // laser transform
  static_transformStamped.header.stamp = ros::Time::now();
  static_transformStamped.header.frame_id = "base_link";
  static_transformStamped.child_frame_id = "base_laser_link";
  static_transformStamped.transform.translation.x = laser_x.data;
  static_transformStamped.transform.translation.y = 0;
  static_transformStamped.transform.translation.z = 0;
  tf2::Quaternion quat;
  quat.setRPY(0, 0, 0);
  static_transformStamped.transform.rotation.x = quat.x();
  static_transformStamped.transform.rotation.y = quat.y();
  static_transformStamped.transform.rotation.z = quat.z();
  static_transformStamped.transform.rotation.w = quat.w();
  static_broadcaster.sendTransform(static_transformStamped);

  // camera transform
  static_transformStamped.header.stamp = ros::Time::now();
  static_transformStamped.header.frame_id = "base_link";
  static_transformStamped.child_frame_id = "frontcamera_link";
  static_transformStamped.transform.translation.x = frontcamera_x.data;
  static_transformStamped.transform.translation.y = frontcamera_y.data;
  static_transformStamped.transform.translation.z = 0;
  quat.setRPY(0, 0, 0);
  static_transformStamped.transform.rotation.x = quat.x();
  static_transformStamped.transform.rotation.y = quat.y();
  static_transformStamped.transform.rotation.z = quat.z();
  static_transformStamped.transform.rotation.w = quat.w();
  static_broadcaster.sendTransform(static_transformStamped);

  ros::Subscriber sub = node.subscribe("/odom", 10, &odomCallback);

  ros::spin();
  return 0;
};

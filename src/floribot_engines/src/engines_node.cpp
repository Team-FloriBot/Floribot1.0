
#include "engines.h"


int main(int argc, char** argv)
{
  ros::init(argc, argv, "engines_node");
  ros::NodeHandle nh;
  floribot_engines::engines node(nh);
  ros::spin();
  return 0;
}
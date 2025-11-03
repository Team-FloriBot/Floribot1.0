#include <ros/ros.h>
#include <std_msgs/String.h>
#include <std_msgs/Bool.h>

#include "serial/serial.h"
#include <string>

std::string port = "/dev/ttyS0";
std::string start_cmd = "tp200 ";
std::string stop_cmd = "tp0 ";
std::string speed_cmd = "ts500 ";
int baud = 9600;
// port, baudrate, timeout in milliseconds
serial::Serial *my_serial;

int state = 0, next_state = 0;

void start_stop_Callback(const std_msgs::Bool::ConstPtr& msg) 
{
	switch(state) {
		case 0:
			if(msg->data) {
				next_state = 1;
				my_serial->write(start_cmd);
				my_serial->flush();
			}
			break;
		case 1:
			if(!msg->data) {
				next_state = 0;
				my_serial->write(stop_cmd);
				my_serial->flush();
			}
			break;
		default:
			ROS_INFO("wrong state in ptu46");
	}
	state = next_state;
}

void cmdCallback(const std_msgs::String::ConstPtr& cmd_ptr) 
{
  my_serial->write(cmd_ptr->data.c_str());
  my_serial->write(" ");
  my_serial->flush();
}

  
int main(int argc, char **argv)
{
  ros::init(argc,argv, "ptu46_node");
  ros::NodeHandle node;
  

  node.getParam("/ptu46/serial_port", port);
  node.getParam("/ptu46/serial_baud", baud);
  node.getParam("/ptu46/start_cmd", start_cmd);
  node.getParam("/ptu46/stop_cmd", stop_cmd);
  node.getParam("/ptu46/speed_cmd", speed_cmd);
  ROS_INFO( "Connecting to %s", port.c_str());
  my_serial = new serial::Serial(port, baud, serial::Timeout::simpleTimeout(1000));
  if(my_serial->isOpen()) {
	ROS_INFO( " Yes.");
        my_serial->flush();
	usleep(200000);
	my_serial->write("e");
        my_serial->flush();

	usleep(100000);
	ROS_INFO("%s", my_serial->read().c_str());

	my_serial->write("d");
        my_serial->flush();
	usleep(100000);
	ROS_INFO("%s", my_serial->read().c_str());
	my_serial->write(" ");
        my_serial->flush();
	usleep(200000);
	ROS_INFO("%s", my_serial->read().c_str());
	
	my_serial->write("ld ");
        my_serial->flush();
	usleep(200000);
	ROS_INFO("%s", my_serial->read().c_str());

	my_serial->write(speed_cmd);
        my_serial->flush();
	usleep(200000);
	ROS_INFO("%s", my_serial->read().c_str());
  }
  else ROS_INFO(" No.");


  
  ros::Subscriber cmd_sub = node.subscribe("/ptu46/cmd", 1, &cmdCallback);
  ros::Subscriber start_stop_sub = node.subscribe("/ptu46/start_stop", 1, &start_stop_Callback);
  ros::spin();
  
  delete my_serial;
  return 0;
}


///////////////////////////////////////////////////////////
//  engines.cpp
//  Implementation of the Class engines
//  Created on:      04-Feb-2014 13:33:34
//  Original author: Torsten
///////////////////////////////////////////////////////////

#include "engines.h"
#include <phidget21.h>


using floribot_engines::engines;


int AttachHandler(CPhidgetHandle phid, void *userptr)
{
    int serial_number;
    const char *name;

    CPhidget_getDeviceName (phid, &name);
    CPhidget_getSerialNumber(phid, &serial_number);
    ROS_INFO("Serial number %d attached!",
			 serial_number);

    return 0;
}


/**
 * Constructor for engines
 */
engines::engines(ros::NodeHandle nh)
    : nodehandle(nh){

	left_power_sub = nodehandle.subscribe("left_power", 1, &engines::left_power_message, this);
	right_power_sub = nodehandle.subscribe("right_power", 1, &engines::right_power_message, this);
	read_ROS_Params();
	left_encoder_pub = nodehandle.advertise<std_msgs::Int64>("left_encoder",1);
	right_encoder_pub = nodehandle.advertise<std_msgs::Int64>("right_encoder",1);
	timer = nodehandle.createTimer(ros::Duration(1.0/tick_rate), &engines::tick, this);

	initialize();
}

engines::~engines() {
	if (m_ssc32Dev != 0) {
		explorer_comm_close(m_ssc32Dev);
		m_ssc32Dev = 0;
	}
    
    CPhidget_close((CPhidgetHandle)left_phid);
    CPhidget_delete((CPhidgetHandle)left_phid);
    CPhidget_close((CPhidgetHandle)right_phid);
    CPhidget_delete((CPhidgetHandle)right_phid);
}

/**
 * initialize user specific variables
 */
void engines::initialize(){

    m_ssc32Dev = 0;

	// attempt to open and interact with the SSC-32 board
	m_ssc32Dev = explorer_comm_create(tty_scc_32.c_str());

	if (m_ssc32Dev == 0)
	{
		ROS_ERROR("Can't open serial port");
	}
	else
	{
		if (explorer_comm_open(m_ssc32Dev, right_motor_center) < 0)
		{
			explorer_comm_destroy(m_ssc32Dev);
			m_ssc32Dev = 0;
			ROS_ERROR("failed to connect to Explorer");
		}
		explorer_comm_setServo(m_ssc32Dev, 1, right_motor_center - right_motor_range * 0);
		explorer_comm_setServo(m_ssc32Dev, 0, left_motor_center - left_motor_range * 0);
	}

    for(int i = 0; i<2; i++) {
        // create the encoder object
        CPhidgetEncoderHandle phid;
        CPhidgetEncoder_create(&phid);
		// Set the handlers to be run when the device is
		// plugged in or opened from software, unplugged or
		// closed from software, or generates an error.
		CPhidget_set_OnAttach_Handler((CPhidgetHandle)phid,
								  AttachHandler, NULL);

        int serial_number = -1;
        //open the device for connections
        CPhidget_open((CPhidgetHandle)phid, serial_number);

		int result;
		if((result =
			CPhidget_waitForAttachment((CPhidgetHandle)phid,
									   10000)))
		{
			const char *err;
			CPhidget_getErrorDescription(result, &err);
			ROS_ERROR("Problem waiting for attachment: %s",
					  err);
		}

        CPhidget_getSerialNumber((CPhidgetHandle)phid, &serial_number);
		
        if(serial_number==left_serial_number) {
            left_phid = phid;
        } else {
            right_phid = phid;
        }
    }
}


/**
 * Callback method for topic left_power
 */
void engines::left_power_message(const std_msgs::Float64::ConstPtr& msg){
	double left = msg->data;
	if (left > 1.0)
	{
		left = 1.0;
	}
	if (left < -1.0)
	{
		left = -1.0;
	}
	explorer_comm_setServo(m_ssc32Dev, 0, left_motor_center - left_motor_range * left);
}
/**
 * Convenience method to publish on topic right_encoder

 */
void engines::publish_right_encoder(){
    int Position = 0;
    CPhidgetEncoder_getPosition(right_phid, 0, &Position);
    
	right_encoder_msg.data = Position;
	right_encoder_pub.publish(right_encoder_msg);
}

/**
 * Convenience method to publish on topic left_encoder
 */
void engines::publish_left_encoder(){
    int Position = 0;
    CPhidgetEncoder_getPosition(left_phid, 0, &Position);
    
	left_encoder_msg.data = Position;
	left_encoder_pub.publish(left_encoder_msg);
}

/**
 * reads the ROS parameters for engines from the parameter server
 */
void engines::read_ROS_Params(){

	left_serial_number = 101902;
	nodehandle.getParam("engines/left_serial_number", left_serial_number);
	right_serial_number = 102191;
	nodehandle.getParam("engines/right_serial_number", right_serial_number);

	left_motor_center = 1500;
	nodehandle.getParam("engines/left_motor_center", left_motor_center);
	left_motor_range = 500;
	nodehandle.getParam("engines/left_motor_range", left_motor_range);
	right_motor_center = 1500;
	nodehandle.getParam("engines/right_motor_center", right_motor_center);
	right_motor_range = 500;
	nodehandle.getParam("engines/right_motor_range", right_motor_range);
	tick_rate = 100;
	nodehandle.getParam("engines/tick_rate", tick_rate);
	tty_scc_32 = "/dev/ttyS1";
	nodehandle.getParam("engines/tty_scc_32", tty_scc_32);
}


/**
 * Callback method for topic right_power
 * power will be inverted, because of the Sabertooth logic
 * negative power will now produce negative encoder changes
 */
void engines::right_power_message(const std_msgs::Float64::ConstPtr& msg){
	double right = msg->data * -1;
    if (right > 1.0)
    {
    	right = 1.0;
    }
    if (right < -1.0)
    {
    	right = -1.0;
    }
    explorer_comm_setServo(m_ssc32Dev, 1, right_motor_center - right_motor_range * right);
}


/**
 * tick function for engines
 */
void engines::tick(const ros::TimerEvent& event){
    publish_left_encoder();
    publish_right_encoder();
}

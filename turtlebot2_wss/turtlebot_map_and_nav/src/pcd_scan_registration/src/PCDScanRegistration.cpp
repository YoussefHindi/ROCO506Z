#ifndef PCDScan
#define PCDScan

#include<string>
#include<stdio.h>
#include<ros/ros.h>
#include<sensor_msgs/JointState.h>
#include<rgb_pcd_kinetic.fusion>


//sensor_msgs::JointState
//sensor_msgs::PointCloud2 

template<typenameT>
T getParam(ros::NodeHandle& n, const std::string& name, const T & defaultValue)
{
	T v;
	if (n.getParam(name, v))
	{
		ROS_INFO_STREAM("Found parameter: " << name << ", value: " << v);
		return v;
	}

	else{
		ROS_WARN_STREAM("Cannot find value for parameter: " << name << ", assigning default: " << defaultValue);

	}

	return defaultValue;

}



class PCD_scan{

private:
	ros::NodeHandle n_;
protected:
	ros::NodeHandle vrep;
public:
	ros::Subscriber pcd_sub;  
	PCD_scan();
	~PCD_scan();
};

void PCD_scan::PCD_scan_callback(const sensor_msgs::PointCloud2& pcd_data)
{
	/* Here you are supposed to write the code processing the data in 
	odom_msg
	*/
	

	
}


PCD_scan::PCD_scan(): n_("~")
{	
	pcd_sub = n_.subscribe("/turtlebot1/depth/pcd_colored", 1, &PCD_scan::PCD_scan_callback, this);

}

PCD_scan::~PCD_scan(){}



int main(int argc, char* argv[])
{
ros::init(argc, argv, "pcd_depth");  /* must be called before any ros::NodeHandledefinition */
PCD_scan pcd;  /* create an instance of the object OdomLogger*/
ros::spin();  /* activate the callback–the frequency depends by the one of the publisher */
return 0;
}


#endif/* PCDScan */


/////////////////////////////////////////////////////////////////////


#include <ros/ros.h>
#include <iostream>
#include <sensor_msgs/JointState.h>
#include <std_msgs/Float64.h>
#include <sensor_msgs/PointCloud2>

sensor_msgs::PointCloud2 pcd_var;
//std_msgs::Float64 wheel_left_joint;


void showmsg(const sensor_msgs::PointCloud2::ConstPtr& msg)
{

//wheel_left_joint.data =msg->position[0];

}

int main(int argc, char **argv)
{
ros::init(argc,argv,"pcd_run");
ros::NodeHandle n;
ros::NodeHandle node;

ros::Subscriber sub=n.subscribe("/turtlebot1/depth/pcd_colored",10,showmsg);
//ros::Publisher joint_pub = node.advertise<std_msgs::Float64>("/turtlebot1/joint_states_filtered",10);
ros::Rate loop_rate(10); 

while (ros::ok())
  {
    
    //joint_pub.publish(wheel_left_joint);

    ros::spinOnce();

    loop_rate.sleep();
  }

return 0;

}







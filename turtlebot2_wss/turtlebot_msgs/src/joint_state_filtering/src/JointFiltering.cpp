#ifndef JOINT_FILTERING_H
#define JOINT_FILTERING_H

#include<string>
#include<stdio.h>
#include<ros/ros.h>
#include<sensor_msgs/JointState.h>


//sensor_msgs::JointState

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

///turtlebot1/joint_states

class Joint_filtering{

private:
	ros::NodeHandle n_;
protected:
	ros::NodeHandle vrep;
public:
	ros::Subscriber joint_sub;  
	Joint_filtering();
	~Joint_filtering();
};

void Joint_filtering::joint_filtering_callback(const sensor_msgs::JointConstPtr& joint_msgs)
{
	/* Here you are supposed to write the code processing the data in 
	odom_msg
	*/
	joint_msgs[0]name[0]

	
}


Joint_filtering::Joint_filtering(): n_("~")
{	
	joint_sub = n_.subscribe("/turtlebot1/joint_states", 1, &Joint_filtering::joint_filtering_callback, this);

}

Joint_filtering::~Joint_filtering(){}



int main(int argc, char* argv[])
{
ros::init(argc, argv, "joint_filter");  /* must be called before any ros::NodeHandledefinition */Joint_filtering joint_filter;  /* create an instance of the object OdomLogger*/
ros::spin();  /* activate the callback–the frequency depends by the one of the publisher */
return 0;
}


#endif/* JOINT_FILTERING */






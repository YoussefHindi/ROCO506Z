#ifndef TwisttoDifferentialDrive_H
#define TwisttoDifferentialDrive_H
#include <string>
#include <stdio.h>
#include <ros/ros.h>
#include <geometry_msgs/TwistStamped.h>
#include <nifti_robot_driver_msgs/TracksStamped.h>


template<typename T>
T getParam(ros::NodeHandle& n, const std::string& name, const T& defaultValue)
{
	T v;
	if (n.getParam(name, v))
	{
		ROS_INFO_STREAM("Found parameter: " << name << ", value: " << v);
		return v;
	}
	else
        {
		ROS_WARN_STREAM("Cannot find value for parameter: " << name << ", assigning default: " << defaultValue);
        }
	return defaultValue;
}

class TwisttoDifferentialDrive{
    
private:

    ros::NodeHandle n_;
    
protected:
    
    ros::NodeHandle node;
    double robot_width;
    double max_wheel_vel;
    std::string cmd_vel_topic_name;
    std::string diff_drive_vel_topic_name;
       

public:

    
    TwisttoDifferentialDrive();
    ~TwisttoDifferentialDrive();


    ros::Subscriber cmd_vel_sub;
    ros::Publisher diff_drive_vel_pub;

    void getWheelsCmdVel(double linear_vel, double angular_vel, double robot_width, nifti_robot_driver_msgs::TracksStamped& tracks_cmd);
    void twist_callback(const geometry_msgs::TwistConstPtr&);
    
};

TwisttoDifferentialDrive::TwisttoDifferentialDrive():
        n_("~")
{
        robot_width = getParam<double>(n_, "robot_width", 0.354);
	max_wheel_vel = getParam<double>(n_, "max_wheel_vel", 0.65);
	cmd_vel_topic_name = getParam<std::string>(n_, "cmd_vel_topic_name", "cmd_vel_topic_name");
	cmd_vel_sub = node.subscribe(cmd_vel_topic_name,1,&TwisttoDifferentialDrive::twist_callback,this);
    
	diff_drive_vel_topic_name = getParam<std::string>(n_, "diff_drive_vel_topic_name", "diff_drive_vel_topic_name");
	diff_drive_vel_pub = node.advertise<nifti_robot_driver_msgs::TracksStamped>(diff_drive_vel_topic_name,1);
}


TwisttoDifferentialDrive::~TwisttoDifferentialDrive(){}

void TwisttoDifferentialDrive::getWheelsCmdVel(double linear_vel, double angular_vel, double robot_width, nifti_robot_driver_msgs::TracksStamped& tracks_cmd)
{
	double d = robot_width/2;

	tracks_cmd.left = linear_vel - (d * angular_vel);
	tracks_cmd.right = linear_vel + (d * angular_vel);

	if(tracks_cmd.left < -max_wheel_vel)
	{
		tracks_cmd.left = -max_wheel_vel;
	}
	if(tracks_cmd.left > max_wheel_vel)
	{
		tracks_cmd.left = max_wheel_vel;
	}
	if(tracks_cmd.right < -max_wheel_vel)
	{
		tracks_cmd.right = -max_wheel_vel;
	}
	if(tracks_cmd.right > max_wheel_vel)
	{
		tracks_cmd.right = max_wheel_vel;
	}
}

void TwisttoDifferentialDrive::twist_callback(const geometry_msgs::TwistConstPtr& msg)
{

	nifti_robot_driver_msgs::TracksStamped tracks_cmd;
	tracks_cmd.header.stamp = ros::Time::now();
	getWheelsCmdVel(msg->linear.x, msg->angular.z, robot_width, tracks_cmd);
	diff_drive_vel_pub.publish(tracks_cmd		);

}

int main(int argc, char* argv[]){
    
    ros::init (argc, argv, "twist_to_differential_drive");
    TwisttoDifferentialDrive twist_to_differential_drive;
    ros::spin();
    return 0;
}

#endif /* TwisttoDifferentialDrive_H */



#include <ros/ros.h>
#include <iostream>
#include <nav_msgs/Path.h>
#include <std_msgs/Float64.h>
#include <geometry_msgs/PoseStamped.h>
#include <geometry_msgs/Pose.h>
#include <sstream>
#include <fstream>
#include <actionlib_msgs/GoalStatusArray.h>
#include <nav_msgs/Odometry.h>
#include <move_base_msgs/MoveBaseActionGoal.h>

const char *path = "/home/youssef/ROCO506Z/error.csv";


std::ofstream ofile(path);
std_msgs::Float64 local_path_x;
std_msgs::Float64 local_path_y;

std_msgs::Float64 global_path_x;
std_msgs::Float64 global_path_y;

std_msgs::Float64 odom_path_x;
std_msgs::Float64 odom_path_y;

std_msgs::Float64 goal_x;
std_msgs::Float64 goal_y;


int i=0;
int x=0;
bool check=false;
bool rec=false;
bool rec2=true;

void localCallback(const nav_msgs::Path::ConstPtr& msg)
 {
	local_path_x.data=msg->poses[0].pose.position.x;
	local_path_y.data=msg->poses[0].pose.position.y;

 }
void globalCallback(const nav_msgs::Path::ConstPtr& msg)
 {
	global_path_x.data=msg->poses[0].pose.position.x;
	global_path_y.data=msg->poses[0].pose.position.y;

 }
void odomCallback(const nav_msgs::Odometry::ConstPtr& msg)
 {

	odom_path_x.data=msg->pose.pose.position.x;
	odom_path_y.data=msg->pose.pose.position.y;

 }
void statusCallback(const actionlib_msgs::GoalStatusArray::ConstPtr& msg)
 {

	x=msg->status_list[0].status;

 }

void goalCallback(const geometry_msgs::PoseStamped::ConstPtr& msg)
 {
	
	goal_x.data=msg->pose.position.x;
	goal_y.data=msg->pose.position.y;
	
 }


int main(int argc, char **argv)
{
//goal_x.data = 0.5;
ros::init(argc,argv,"local_path_coordinates");
ros::NodeHandle n;
ros::NodeHandle node;


ros::Subscriber sub=n.subscribe("/move_base_turtlebot1/DWAPlannerROS/local_plan",10,localCallback);
ros::Subscriber sub2=n.subscribe("/move_base_turtlebot1/DWAPlannerROS/global_plan",10,globalCallback);
ros::Subscriber sub3=n.subscribe("/turtlebot1/odom",10,odomCallback);
ros::Subscriber sub4=n.subscribe("/move_base_simple/goal",10,goalCallback);
ros::Subscriber sub5=n.subscribe("/move_base/status",10,statusCallback);

ros::Publisher goal_pub = node.advertise<std_msgs::Float64>("/turtlebot1/lc",10);
ros::Rate loop_rate(10); 

ROS_INFO("please set target goal");
	ofile <<"local_path_x"<<" " << "local_path_y " <<"global_path_x"<<" " << "global_path_y " <<"actual_path_taken_x"<<" " << "actual_path_taken_y" << " " << "error_local_path_to_global_path" <<" " <<"error_local_path_to_actual_robot_path" << " " <<"error_between_global_path_&_actual_path"<<" "<<"goal_x"<<" "<<"goal_y"<< std::endl;
//ofile <<"         "<<goal_x.data<<" "<<goal_y.data;

while (ros::ok())
  {

     goal_pub.publish(goal_x);
 	if((local_path_x.data>0) || (local_path_y.data>0) ||(local_path_x.data<0) || (local_path_y.data<0 ))
	{
		if(i==0)
		{
		ofile <<local_path_x.data << " " << local_path_y.data << " " << 		global_path_x.data 		<< " " << global_path_y.data << " " << 			odom_path_x.data << " " << odom_path_y.data<< "    " <<goal_x.data <<" " 			<<goal_y.data << std::endl;
			i++;
		}
	ofile <<local_path_x.data << " " << local_path_y.data << " " << global_path_x.data 		<< " " << global_path_y.data << " " << odom_path_x.data << " " << odom_path_y.data 		<< std::endl;
	}   
	if (x==1)
	{check=true;
	rec=true;
	}
	if(rec && rec2)
	{
	ROS_INFO("goal x [%f]" , goal_x );
	ROS_INFO("goal y [%f]" , goal_y );
	ROS_INFO("recording values...");
	rec2=false;
	}
	if(check && x==3)
	{
	ofile <<"       " << "Average_error_percentage"; 
	ROS_INFO("goal reached");
	ROS_INFO("file generated");
	break;
	}
	ros::spinOnce();
    loop_rate.sleep();
  }


return 0;

}


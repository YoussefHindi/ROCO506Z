#include <ros/ros.h>
#include <iostream>
#include <nav_msgs/Path.h>
#include <std_msgs/Float64.h>
#include <geometry_msgs/PoseStamped.h>
#include <geometry_msgs/Pose.h>

//nav_msgs::Path path1;
std_msgs::Float64 local_path_x;
std_msgs::Float64 local_path_y;
//geometry_msgs::Pose xx

//nav_msgs::Path  path;


void pathCallback(const nav_msgs::Path::ConstPtr& msg)
 {
	local_path_x.data=msg->poses[1].pose.position.x;
	local_path_y.data=msg->poses[1].pose.position.y;

 }


int main(int argc, char **argv)
{

ros::init(argc,argv,"local_path_coordinates");
ros::NodeHandle n;
ros::NodeHandle node;

ros::Subscriber sub=n.subscribe("/move_base_turtlebot1/DWAPlannerROS/local_plan",10,pathCallback);
ros::Publisher local_pub = node.advertise<std_msgs::Float64>("/turtlebot1/lc",10);
//ros::Rate loop_rate(20); 

while (ros::ok())
  {
    
    local_pub.publish(local_path_x);
	local_pub.publish(local_path_y);

    ros::spinOnce();

  //  loop_rate.sleep();
  }

return 0;

}


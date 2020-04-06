#include <ros/ros.h>
#include <iostream>
#include <sensor_msgs/JointState.h>
#include <std_msgs/Float64.h>


sensor_msgs::JointState filtered_joints;
std_msgs::Float64 wheel_left_joint;


void showmsg(const sensor_msgs::JointState::ConstPtr& msg)
{

//filtered_joints.name[0] = msg->name[3];

wheel_left_joint.data =msg->position[0];

//filtered_joints.velocity[0] = msg->velocity[3];
//filtered_joints.effort[0] = msg->effort[3];

//ROS_INFO("wheel [%f]", wheel_left_joint);

}

int main(int argc, char **argv)
{
ros::init(argc,argv,"joint_listener");
ros::NodeHandle n;
ros::NodeHandle node;

ros::Subscriber sub=n.subscribe("/turtlebot1/joint_states",10,showmsg);
ros::Publisher joint_pub = node.advertise<std_msgs::Float64>("/turtlebot1/joint_states_filtered",10);
ros::Rate loop_rate(10); 

while (ros::ok())
  {
    
    joint_pub.publish(wheel_left_joint);

    ros::spinOnce();

    loop_rate.sleep();
  }

return 0;

}


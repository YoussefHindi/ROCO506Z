#ifndef ODOMLOGGER_H
#define ODOMLOGGER_H
#include <string>
#include <stdio.h>
#include <ros/ros.h>
#include <nav_msgs/Odometry.h>
#include <geometry_msgs/PoseStamped.h>
#include <trajectory_control_msgs/TrajectoryControlAction.h>


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

class TrajectoryErrorLogger{
    
private:

    ros::NodeHandle n_;
    
protected:
    
    ros::NodeHandle node;
    
     std::string filename;
    
    std::string traj_err_topic_name;
       

public:

    ros::Subscriber traj_err_sub;


    void traj_err_sub_callback(const trajectory_control_msgs::TrajectoryControlActionFeedbackConstPtr& msg);
    
    TrajectoryErrorLogger();
    ~TrajectoryErrorLogger();
    
};

void TrajectoryErrorLogger::traj_err_sub_callback(const trajectory_control_msgs::TrajectoryControlActionFeedbackConstPtr& msg)
{
    
        FILE *file=fopen(filename.c_str(),"a");
        fprintf(file,"%lf,"
                 "%lf\n",
                 msg->feedback.trajectory_error.x,
                 msg->feedback.trajectory_error.y);

        fclose(file);
	
	

}

TrajectoryErrorLogger::TrajectoryErrorLogger():
        n_("~")
{
	traj_err_topic_name = getParam<std::string>(n_, "traj_err_topic_name", "/trajectory_control_action_server_turtlebot1/feedback");
	traj_err_sub = node.subscribe(traj_err_topic_name, 1, &TrajectoryErrorLogger::traj_err_sub_callback, this);
        
        filename = getParam<std::string>(n_, "filename", "filename.csv");
}


TrajectoryErrorLogger::~TrajectoryErrorLogger(){}

int main(int argc, char* argv[]){
    
    ros::init (argc, argv, "trajectory_error_logger");
    TrajectoryErrorLogger logger;
    ros::spin();
    return 0;
}

#endif /* ODOMLOGGER_H */


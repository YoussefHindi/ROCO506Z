// Generated by gencpp from file trajectory_control_msgs/TrajectoryControlGoal.msg
// DO NOT EDIT!


#ifndef TRAJECTORY_CONTROL_MSGS_MESSAGE_TRAJECTORYCONTROLGOAL_H
#define TRAJECTORY_CONTROL_MSGS_MESSAGE_TRAJECTORYCONTROLGOAL_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <nav_msgs/Path.h>

namespace trajectory_control_msgs
{
template <class ContainerAllocator>
struct TrajectoryControlGoal_
{
  typedef TrajectoryControlGoal_<ContainerAllocator> Type;

  TrajectoryControlGoal_()
    : path()  {
    }
  TrajectoryControlGoal_(const ContainerAllocator& _alloc)
    : path(_alloc)  {
  (void)_alloc;
    }



   typedef  ::nav_msgs::Path_<ContainerAllocator>  _path_type;
  _path_type path;





  typedef boost::shared_ptr< ::trajectory_control_msgs::TrajectoryControlGoal_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::trajectory_control_msgs::TrajectoryControlGoal_<ContainerAllocator> const> ConstPtr;

}; // struct TrajectoryControlGoal_

typedef ::trajectory_control_msgs::TrajectoryControlGoal_<std::allocator<void> > TrajectoryControlGoal;

typedef boost::shared_ptr< ::trajectory_control_msgs::TrajectoryControlGoal > TrajectoryControlGoalPtr;
typedef boost::shared_ptr< ::trajectory_control_msgs::TrajectoryControlGoal const> TrajectoryControlGoalConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::trajectory_control_msgs::TrajectoryControlGoal_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::trajectory_control_msgs::TrajectoryControlGoal_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace trajectory_control_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'nav_msgs': ['/opt/ros/kinetic/share/nav_msgs/cmake/../msg'], 'nifti_robot_driver_msgs': ['/home/user001/ROCO506Z/turtlebot2_wss/turtlebot_msgs/src/nifti_robot_driver_msgs/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'visualization_msgs': ['/opt/ros/kinetic/share/visualization_msgs/cmake/../msg'], 'trajectory_control_msgs': ['/home/user001/ROCO506Z/turtlebot2_wss/turtlebot_msgs/devel/share/trajectory_control_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::trajectory_control_msgs::TrajectoryControlGoal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::trajectory_control_msgs::TrajectoryControlGoal_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::trajectory_control_msgs::TrajectoryControlGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::trajectory_control_msgs::TrajectoryControlGoal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::trajectory_control_msgs::TrajectoryControlGoal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::trajectory_control_msgs::TrajectoryControlGoal_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::trajectory_control_msgs::TrajectoryControlGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "58d6f138c7de7ef47c75d4b7e5df5472";
  }

  static const char* value(const ::trajectory_control_msgs::TrajectoryControlGoal_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x58d6f138c7de7ef4ULL;
  static const uint64_t static_value2 = 0x7c75d4b7e5df5472ULL;
};

template<class ContainerAllocator>
struct DataType< ::trajectory_control_msgs::TrajectoryControlGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "trajectory_control_msgs/TrajectoryControlGoal";
  }

  static const char* value(const ::trajectory_control_msgs::TrajectoryControlGoal_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::trajectory_control_msgs::TrajectoryControlGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
# Define the goal\n\
nav_msgs/Path path\n\
\n\
================================================================================\n\
MSG: nav_msgs/Path\n\
#An array of poses that represents a Path for a robot to follow\n\
Header header\n\
geometry_msgs/PoseStamped[] poses\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: geometry_msgs/PoseStamped\n\
# A Pose with reference coordinate frame and timestamp\n\
Header header\n\
Pose pose\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Pose\n\
# A representation of pose in free space, composed of position and orientation. \n\
Point position\n\
Quaternion orientation\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Point\n\
# This contains the position of a point in free space\n\
float64 x\n\
float64 y\n\
float64 z\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Quaternion\n\
# This represents an orientation in free space in quaternion form.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
float64 w\n\
";
  }

  static const char* value(const ::trajectory_control_msgs::TrajectoryControlGoal_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::trajectory_control_msgs::TrajectoryControlGoal_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.path);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct TrajectoryControlGoal_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::trajectory_control_msgs::TrajectoryControlGoal_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::trajectory_control_msgs::TrajectoryControlGoal_<ContainerAllocator>& v)
  {
    s << indent << "path: ";
    s << std::endl;
    Printer< ::nav_msgs::Path_<ContainerAllocator> >::stream(s, indent + "  ", v.path);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TRAJECTORY_CONTROL_MSGS_MESSAGE_TRAJECTORYCONTROLGOAL_H

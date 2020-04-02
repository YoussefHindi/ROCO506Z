// Generated by gencpp from file vrep_common/simRosRemoveUIRequest.msg
// DO NOT EDIT!


#ifndef VREP_COMMON_MESSAGE_SIMROSREMOVEUIREQUEST_H
#define VREP_COMMON_MESSAGE_SIMROSREMOVEUIREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace vrep_common
{
template <class ContainerAllocator>
struct simRosRemoveUIRequest_
{
  typedef simRosRemoveUIRequest_<ContainerAllocator> Type;

  simRosRemoveUIRequest_()
    : handle(0)  {
    }
  simRosRemoveUIRequest_(const ContainerAllocator& _alloc)
    : handle(0)  {
  (void)_alloc;
    }



   typedef int32_t _handle_type;
  _handle_type handle;





  typedef boost::shared_ptr< ::vrep_common::simRosRemoveUIRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::vrep_common::simRosRemoveUIRequest_<ContainerAllocator> const> ConstPtr;

}; // struct simRosRemoveUIRequest_

typedef ::vrep_common::simRosRemoveUIRequest_<std::allocator<void> > simRosRemoveUIRequest;

typedef boost::shared_ptr< ::vrep_common::simRosRemoveUIRequest > simRosRemoveUIRequestPtr;
typedef boost::shared_ptr< ::vrep_common::simRosRemoveUIRequest const> simRosRemoveUIRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::vrep_common::simRosRemoveUIRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::vrep_common::simRosRemoveUIRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace vrep_common

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'vrep_common': ['/home/youssef/ROCO506Z/turtlebot2_wss/turtlebot_simulation/src/vrep_common/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::vrep_common::simRosRemoveUIRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::vrep_common::simRosRemoveUIRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::vrep_common::simRosRemoveUIRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::vrep_common::simRosRemoveUIRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vrep_common::simRosRemoveUIRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vrep_common::simRosRemoveUIRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::vrep_common::simRosRemoveUIRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "92535b678299d2bdda959704e78c275e";
  }

  static const char* value(const ::vrep_common::simRosRemoveUIRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x92535b678299d2bdULL;
  static const uint64_t static_value2 = 0xda959704e78c275eULL;
};

template<class ContainerAllocator>
struct DataType< ::vrep_common::simRosRemoveUIRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "vrep_common/simRosRemoveUIRequest";
  }

  static const char* value(const ::vrep_common::simRosRemoveUIRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::vrep_common::simRosRemoveUIRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
\n\
\n\
\n\
int32 handle\n\
";
  }

  static const char* value(const ::vrep_common::simRosRemoveUIRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::vrep_common::simRosRemoveUIRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.handle);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct simRosRemoveUIRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::vrep_common::simRosRemoveUIRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::vrep_common::simRosRemoveUIRequest_<ContainerAllocator>& v)
  {
    s << indent << "handle: ";
    Printer<int32_t>::stream(s, indent + "  ", v.handle);
  }
};

} // namespace message_operations
} // namespace ros

#endif // VREP_COMMON_MESSAGE_SIMROSREMOVEUIREQUEST_H

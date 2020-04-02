// Generated by gencpp from file vrep_common/simRosGetObjectFloatParameterRequest.msg
// DO NOT EDIT!


#ifndef VREP_COMMON_MESSAGE_SIMROSGETOBJECTFLOATPARAMETERREQUEST_H
#define VREP_COMMON_MESSAGE_SIMROSGETOBJECTFLOATPARAMETERREQUEST_H


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
struct simRosGetObjectFloatParameterRequest_
{
  typedef simRosGetObjectFloatParameterRequest_<ContainerAllocator> Type;

  simRosGetObjectFloatParameterRequest_()
    : handle(0)
    , parameterID(0)  {
    }
  simRosGetObjectFloatParameterRequest_(const ContainerAllocator& _alloc)
    : handle(0)
    , parameterID(0)  {
  (void)_alloc;
    }



   typedef int32_t _handle_type;
  _handle_type handle;

   typedef int32_t _parameterID_type;
  _parameterID_type parameterID;





  typedef boost::shared_ptr< ::vrep_common::simRosGetObjectFloatParameterRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::vrep_common::simRosGetObjectFloatParameterRequest_<ContainerAllocator> const> ConstPtr;

}; // struct simRosGetObjectFloatParameterRequest_

typedef ::vrep_common::simRosGetObjectFloatParameterRequest_<std::allocator<void> > simRosGetObjectFloatParameterRequest;

typedef boost::shared_ptr< ::vrep_common::simRosGetObjectFloatParameterRequest > simRosGetObjectFloatParameterRequestPtr;
typedef boost::shared_ptr< ::vrep_common::simRosGetObjectFloatParameterRequest const> simRosGetObjectFloatParameterRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::vrep_common::simRosGetObjectFloatParameterRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::vrep_common::simRosGetObjectFloatParameterRequest_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::vrep_common::simRosGetObjectFloatParameterRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::vrep_common::simRosGetObjectFloatParameterRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::vrep_common::simRosGetObjectFloatParameterRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::vrep_common::simRosGetObjectFloatParameterRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vrep_common::simRosGetObjectFloatParameterRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vrep_common::simRosGetObjectFloatParameterRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::vrep_common::simRosGetObjectFloatParameterRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "233ddb8f8f3678af5672087de7d603db";
  }

  static const char* value(const ::vrep_common::simRosGetObjectFloatParameterRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x233ddb8f8f3678afULL;
  static const uint64_t static_value2 = 0x5672087de7d603dbULL;
};

template<class ContainerAllocator>
struct DataType< ::vrep_common::simRosGetObjectFloatParameterRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "vrep_common/simRosGetObjectFloatParameterRequest";
  }

  static const char* value(const ::vrep_common::simRosGetObjectFloatParameterRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::vrep_common::simRosGetObjectFloatParameterRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
\n\
\n\
\n\
int32 handle\n\
int32 parameterID\n\
";
  }

  static const char* value(const ::vrep_common::simRosGetObjectFloatParameterRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::vrep_common::simRosGetObjectFloatParameterRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.handle);
      stream.next(m.parameterID);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct simRosGetObjectFloatParameterRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::vrep_common::simRosGetObjectFloatParameterRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::vrep_common::simRosGetObjectFloatParameterRequest_<ContainerAllocator>& v)
  {
    s << indent << "handle: ";
    Printer<int32_t>::stream(s, indent + "  ", v.handle);
    s << indent << "parameterID: ";
    Printer<int32_t>::stream(s, indent + "  ", v.parameterID);
  }
};

} // namespace message_operations
} // namespace ros

#endif // VREP_COMMON_MESSAGE_SIMROSGETOBJECTFLOATPARAMETERREQUEST_H

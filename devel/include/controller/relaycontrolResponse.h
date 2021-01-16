// Generated by gencpp from file controller/relaycontrolResponse.msg
// DO NOT EDIT!


#ifndef CONTROLLER_MESSAGE_RELAYCONTROLRESPONSE_H
#define CONTROLLER_MESSAGE_RELAYCONTROLRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace controller
{
template <class ContainerAllocator>
struct relaycontrolResponse_
{
  typedef relaycontrolResponse_<ContainerAllocator> Type;

  relaycontrolResponse_()
    : status()  {
    }
  relaycontrolResponse_(const ContainerAllocator& _alloc)
    : status(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector<int64_t, typename ContainerAllocator::template rebind<int64_t>::other >  _status_type;
  _status_type status;





  typedef boost::shared_ptr< ::controller::relaycontrolResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::controller::relaycontrolResponse_<ContainerAllocator> const> ConstPtr;

}; // struct relaycontrolResponse_

typedef ::controller::relaycontrolResponse_<std::allocator<void> > relaycontrolResponse;

typedef boost::shared_ptr< ::controller::relaycontrolResponse > relaycontrolResponsePtr;
typedef boost::shared_ptr< ::controller::relaycontrolResponse const> relaycontrolResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::controller::relaycontrolResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::controller::relaycontrolResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::controller::relaycontrolResponse_<ContainerAllocator1> & lhs, const ::controller::relaycontrolResponse_<ContainerAllocator2> & rhs)
{
  return lhs.status == rhs.status;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::controller::relaycontrolResponse_<ContainerAllocator1> & lhs, const ::controller::relaycontrolResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace controller

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::controller::relaycontrolResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::controller::relaycontrolResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::controller::relaycontrolResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::controller::relaycontrolResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::controller::relaycontrolResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::controller::relaycontrolResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::controller::relaycontrolResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "50ba80f34b3b9a7bbf9b46ad8bfb2db7";
  }

  static const char* value(const ::controller::relaycontrolResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x50ba80f34b3b9a7bULL;
  static const uint64_t static_value2 = 0xbf9b46ad8bfb2db7ULL;
};

template<class ContainerAllocator>
struct DataType< ::controller::relaycontrolResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "controller/relaycontrolResponse";
  }

  static const char* value(const ::controller::relaycontrolResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::controller::relaycontrolResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int64[] status\n"
;
  }

  static const char* value(const ::controller::relaycontrolResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::controller::relaycontrolResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.status);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct relaycontrolResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::controller::relaycontrolResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::controller::relaycontrolResponse_<ContainerAllocator>& v)
  {
    s << indent << "status[]" << std::endl;
    for (size_t i = 0; i < v.status.size(); ++i)
    {
      s << indent << "  status[" << i << "]: ";
      Printer<int64_t>::stream(s, indent + "  ", v.status[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // CONTROLLER_MESSAGE_RELAYCONTROLRESPONSE_H

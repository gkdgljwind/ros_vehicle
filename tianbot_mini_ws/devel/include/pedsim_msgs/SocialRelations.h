// Generated by gencpp from file pedsim_msgs/SocialRelations.msg
// DO NOT EDIT!


#ifndef PEDSIM_MSGS_MESSAGE_SOCIALRELATIONS_H
#define PEDSIM_MSGS_MESSAGE_SOCIALRELATIONS_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <pedsim_msgs/SocialRelation.h>

namespace pedsim_msgs
{
template <class ContainerAllocator>
struct SocialRelations_
{
  typedef SocialRelations_<ContainerAllocator> Type;

  SocialRelations_()
    : header()
    , elements()  {
    }
  SocialRelations_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , elements(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::vector< ::pedsim_msgs::SocialRelation_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::pedsim_msgs::SocialRelation_<ContainerAllocator> >::other >  _elements_type;
  _elements_type elements;





  typedef boost::shared_ptr< ::pedsim_msgs::SocialRelations_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pedsim_msgs::SocialRelations_<ContainerAllocator> const> ConstPtr;

}; // struct SocialRelations_

typedef ::pedsim_msgs::SocialRelations_<std::allocator<void> > SocialRelations;

typedef boost::shared_ptr< ::pedsim_msgs::SocialRelations > SocialRelationsPtr;
typedef boost::shared_ptr< ::pedsim_msgs::SocialRelations const> SocialRelationsConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::pedsim_msgs::SocialRelations_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::pedsim_msgs::SocialRelations_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::pedsim_msgs::SocialRelations_<ContainerAllocator1> & lhs, const ::pedsim_msgs::SocialRelations_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.elements == rhs.elements;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::pedsim_msgs::SocialRelations_<ContainerAllocator1> & lhs, const ::pedsim_msgs::SocialRelations_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace pedsim_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::pedsim_msgs::SocialRelations_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pedsim_msgs::SocialRelations_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pedsim_msgs::SocialRelations_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pedsim_msgs::SocialRelations_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pedsim_msgs::SocialRelations_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pedsim_msgs::SocialRelations_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::pedsim_msgs::SocialRelations_<ContainerAllocator> >
{
  static const char* value()
  {
    return "433b8d0d73396f7d640c03dcb80bb4fe";
  }

  static const char* value(const ::pedsim_msgs::SocialRelations_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x433b8d0d73396f7dULL;
  static const uint64_t static_value2 = 0x640c03dcb80bb4feULL;
};

template<class ContainerAllocator>
struct DataType< ::pedsim_msgs::SocialRelations_<ContainerAllocator> >
{
  static const char* value()
  {
    return "pedsim_msgs/SocialRelations";
  }

  static const char* value(const ::pedsim_msgs::SocialRelations_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::pedsim_msgs::SocialRelations_<ContainerAllocator> >
{
  static const char* value()
  {
    return "std_msgs/Header     header\n"
"\n"
"# All social relations of all tracks in the current time step.\n"
"# There might be multiple social relations per pair of tracks.\n"
"SocialRelation[]    elements\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
"\n"
"================================================================================\n"
"MSG: pedsim_msgs/SocialRelation\n"
"string      type        # e.g. mother-son relationship, romantic relationship, etc.\n"
"float32     strength    # relationship strength between 0.0 and 1.0\n"
"\n"
"uint32      track1_id\n"
"uint32      track2_id\n"
"\n"
"\n"
"# Constants for type (just examples at the moment)\n"
"string      TYPE_SPATIAL  = \"spatial\"\n"
"string      TYPE_ROMANTIC = \"romantic\"\n"
"string      TYPE_PARENT_CHILD = \"parent_child\"\n"
"string      TYPE_FRIENDSHIP = \"friendship\"\n"
;
  }

  static const char* value(const ::pedsim_msgs::SocialRelations_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::pedsim_msgs::SocialRelations_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.elements);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SocialRelations_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pedsim_msgs::SocialRelations_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::pedsim_msgs::SocialRelations_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "elements[]" << std::endl;
    for (size_t i = 0; i < v.elements.size(); ++i)
    {
      s << indent << "  elements[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::pedsim_msgs::SocialRelation_<ContainerAllocator> >::stream(s, indent + "    ", v.elements[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // PEDSIM_MSGS_MESSAGE_SOCIALRELATIONS_H
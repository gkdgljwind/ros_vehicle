// Generated by gencpp from file pedsim_msgs/SocialActivity.msg
// DO NOT EDIT!


#ifndef PEDSIM_MSGS_MESSAGE_SOCIALACTIVITY_H
#define PEDSIM_MSGS_MESSAGE_SOCIALACTIVITY_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace pedsim_msgs
{
template <class ContainerAllocator>
struct SocialActivity_
{
  typedef SocialActivity_<ContainerAllocator> Type;

  SocialActivity_()
    : type()
    , confidence(0.0)
    , track_ids()  {
    }
  SocialActivity_(const ContainerAllocator& _alloc)
    : type(_alloc)
    , confidence(0.0)
    , track_ids(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _type_type;
  _type_type type;

   typedef float _confidence_type;
  _confidence_type confidence;

   typedef std::vector<uint64_t, typename ContainerAllocator::template rebind<uint64_t>::other >  _track_ids_type;
  _track_ids_type track_ids;



// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(TYPE_SHOPPING)
  #undef TYPE_SHOPPING
#endif
#if defined(_WIN32) && defined(TYPE_STANDING)
  #undef TYPE_STANDING
#endif
#if defined(_WIN32) && defined(TYPE_INDIVIDUAL_MOVING)
  #undef TYPE_INDIVIDUAL_MOVING
#endif
#if defined(_WIN32) && defined(TYPE_WAITING_IN_QUEUE)
  #undef TYPE_WAITING_IN_QUEUE
#endif
#if defined(_WIN32) && defined(TYPE_LOOKING_AT_INFORMATION_SCREEN)
  #undef TYPE_LOOKING_AT_INFORMATION_SCREEN
#endif
#if defined(_WIN32) && defined(TYPE_LOOKING_AT_KIOSK)
  #undef TYPE_LOOKING_AT_KIOSK
#endif
#if defined(_WIN32) && defined(TYPE_GROUP_ASSEMBLING)
  #undef TYPE_GROUP_ASSEMBLING
#endif
#if defined(_WIN32) && defined(TYPE_GROUP_MOVING)
  #undef TYPE_GROUP_MOVING
#endif
#if defined(_WIN32) && defined(TYPE_FLOW_WITH_ROBOT)
  #undef TYPE_FLOW_WITH_ROBOT
#endif
#if defined(_WIN32) && defined(TYPE_ANTIFLOW_AGAINST_ROBOT)
  #undef TYPE_ANTIFLOW_AGAINST_ROBOT
#endif
#if defined(_WIN32) && defined(TYPE_WAITING_FOR_OTHERS)
  #undef TYPE_WAITING_FOR_OTHERS
#endif


  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  TYPE_SHOPPING;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  TYPE_STANDING;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  TYPE_INDIVIDUAL_MOVING;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  TYPE_WAITING_IN_QUEUE;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  TYPE_LOOKING_AT_INFORMATION_SCREEN;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  TYPE_LOOKING_AT_KIOSK;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  TYPE_GROUP_ASSEMBLING;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  TYPE_GROUP_MOVING;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  TYPE_FLOW_WITH_ROBOT;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  TYPE_ANTIFLOW_AGAINST_ROBOT;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  TYPE_WAITING_FOR_OTHERS;

  typedef boost::shared_ptr< ::pedsim_msgs::SocialActivity_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pedsim_msgs::SocialActivity_<ContainerAllocator> const> ConstPtr;

}; // struct SocialActivity_

typedef ::pedsim_msgs::SocialActivity_<std::allocator<void> > SocialActivity;

typedef boost::shared_ptr< ::pedsim_msgs::SocialActivity > SocialActivityPtr;
typedef boost::shared_ptr< ::pedsim_msgs::SocialActivity const> SocialActivityConstPtr;

// constants requiring out of line definition

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      SocialActivity_<ContainerAllocator>::TYPE_SHOPPING =
        
          "shopping"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      SocialActivity_<ContainerAllocator>::TYPE_STANDING =
        
          "standing"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      SocialActivity_<ContainerAllocator>::TYPE_INDIVIDUAL_MOVING =
        
          "individual_moving"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      SocialActivity_<ContainerAllocator>::TYPE_WAITING_IN_QUEUE =
        
          "waiting_in_queue"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      SocialActivity_<ContainerAllocator>::TYPE_LOOKING_AT_INFORMATION_SCREEN =
        
          "looking_at_information_screen"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      SocialActivity_<ContainerAllocator>::TYPE_LOOKING_AT_KIOSK =
        
          "looking_at_kiosk"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      SocialActivity_<ContainerAllocator>::TYPE_GROUP_ASSEMBLING =
        
          "group_assembling"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      SocialActivity_<ContainerAllocator>::TYPE_GROUP_MOVING =
        
          "group_moving"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      SocialActivity_<ContainerAllocator>::TYPE_FLOW_WITH_ROBOT =
        
          "flow"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      SocialActivity_<ContainerAllocator>::TYPE_ANTIFLOW_AGAINST_ROBOT =
        
          "antiflow"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      SocialActivity_<ContainerAllocator>::TYPE_WAITING_FOR_OTHERS =
        
          "waiting_for_others"
        
        ;
   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::pedsim_msgs::SocialActivity_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::pedsim_msgs::SocialActivity_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::pedsim_msgs::SocialActivity_<ContainerAllocator1> & lhs, const ::pedsim_msgs::SocialActivity_<ContainerAllocator2> & rhs)
{
  return lhs.type == rhs.type &&
    lhs.confidence == rhs.confidence &&
    lhs.track_ids == rhs.track_ids;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::pedsim_msgs::SocialActivity_<ContainerAllocator1> & lhs, const ::pedsim_msgs::SocialActivity_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace pedsim_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::pedsim_msgs::SocialActivity_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pedsim_msgs::SocialActivity_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pedsim_msgs::SocialActivity_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pedsim_msgs::SocialActivity_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pedsim_msgs::SocialActivity_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pedsim_msgs::SocialActivity_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::pedsim_msgs::SocialActivity_<ContainerAllocator> >
{
  static const char* value()
  {
    return "064aac12909022edb4df5d568c180144";
  }

  static const char* value(const ::pedsim_msgs::SocialActivity_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x064aac12909022edULL;
  static const uint64_t static_value2 = 0xb4df5d568c180144ULL;
};

template<class ContainerAllocator>
struct DataType< ::pedsim_msgs::SocialActivity_<ContainerAllocator> >
{
  static const char* value()
  {
    return "pedsim_msgs/SocialActivity";
  }

  static const char* value(const ::pedsim_msgs::SocialActivity_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::pedsim_msgs::SocialActivity_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string      type        # see constants below\n"
"float32     confidence  # detection confidence\n"
"\n"
"uint64[]      track_ids   # IDs of all person tracks involved in the activity, might be one or multiple\n"
"\n"
"\n"
"# Constants for social activity type (just examples at the moment)\n"
"string      TYPE_SHOPPING = shopping\n"
"string      TYPE_STANDING = standing\n"
"string      TYPE_INDIVIDUAL_MOVING = individual_moving\n"
"string      TYPE_WAITING_IN_QUEUE = waiting_in_queue\n"
"string      TYPE_LOOKING_AT_INFORMATION_SCREEN = looking_at_information_screen\n"
"string      TYPE_LOOKING_AT_KIOSK = looking_at_kiosk\n"
"string      TYPE_GROUP_ASSEMBLING = group_assembling\n"
"string      TYPE_GROUP_MOVING = group_moving\n"
"string      TYPE_FLOW_WITH_ROBOT = flow\n"
"string      TYPE_ANTIFLOW_AGAINST_ROBOT = antiflow\n"
"string      TYPE_WAITING_FOR_OTHERS = waiting_for_others\n"
"\n"
"#string      TYPE_COMMUNICATING = communicating\n"
"#string      TYPE_TAKING_PHOTOGRAPH = taking_photograph\n"
"#string      TYPE_TALKING_ON_PHONE = talking_on_phone\n"
;
  }

  static const char* value(const ::pedsim_msgs::SocialActivity_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::pedsim_msgs::SocialActivity_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.type);
      stream.next(m.confidence);
      stream.next(m.track_ids);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SocialActivity_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pedsim_msgs::SocialActivity_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::pedsim_msgs::SocialActivity_<ContainerAllocator>& v)
  {
    s << indent << "type: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.type);
    s << indent << "confidence: ";
    Printer<float>::stream(s, indent + "  ", v.confidence);
    s << indent << "track_ids[]" << std::endl;
    for (size_t i = 0; i < v.track_ids.size(); ++i)
    {
      s << indent << "  track_ids[" << i << "]: ";
      Printer<uint64_t>::stream(s, indent + "  ", v.track_ids[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // PEDSIM_MSGS_MESSAGE_SOCIALACTIVITY_H
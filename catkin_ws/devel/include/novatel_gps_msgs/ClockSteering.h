// Generated by gencpp from file novatel_gps_msgs/ClockSteering.msg
// DO NOT EDIT!


#ifndef NOVATEL_GPS_MSGS_MESSAGE_CLOCKSTEERING_H
#define NOVATEL_GPS_MSGS_MESSAGE_CLOCKSTEERING_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace novatel_gps_msgs
{
template <class ContainerAllocator>
struct ClockSteering_
{
  typedef ClockSteering_<ContainerAllocator> Type;

  ClockSteering_()
    : source()
    , steering_state()
    , period(0)
    , pulse_width(0.0)
    , bandwidth(0.0)
    , slope(0.0)
    , offset(0.0)
    , drift_rate(0.0)  {
    }
  ClockSteering_(const ContainerAllocator& _alloc)
    : source(_alloc)
    , steering_state(_alloc)
    , period(0)
    , pulse_width(0.0)
    , bandwidth(0.0)
    , slope(0.0)
    , offset(0.0)
    , drift_rate(0.0)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _source_type;
  _source_type source;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _steering_state_type;
  _steering_state_type steering_state;

   typedef uint32_t _period_type;
  _period_type period;

   typedef double _pulse_width_type;
  _pulse_width_type pulse_width;

   typedef double _bandwidth_type;
  _bandwidth_type bandwidth;

   typedef float _slope_type;
  _slope_type slope;

   typedef double _offset_type;
  _offset_type offset;

   typedef double _drift_rate_type;
  _drift_rate_type drift_rate;



// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(INTERNAL_SOURCE)
  #undef INTERNAL_SOURCE
#endif
#if defined(_WIN32) && defined(EXTERNAL_SOURCE)
  #undef EXTERNAL_SOURCE
#endif
#if defined(_WIN32) && defined(FIRST_ORDER_STEERING_STATE)
  #undef FIRST_ORDER_STEERING_STATE
#endif
#if defined(_WIN32) && defined(SECOND_ORDER_STEERING_STATE)
  #undef SECOND_ORDER_STEERING_STATE
#endif
#if defined(_WIN32) && defined(CALIBRATE_HIGH_STEERING_STATE)
  #undef CALIBRATE_HIGH_STEERING_STATE
#endif
#if defined(_WIN32) && defined(CALIBRATE_LOW_STEERING_STATE)
  #undef CALIBRATE_LOW_STEERING_STATE
#endif
#if defined(_WIN32) && defined(CALIBRATE_CENTER_STEERING_STATE)
  #undef CALIBRATE_CENTER_STEERING_STATE
#endif

  enum {
    INTERNAL_SOURCE = 0,
    EXTERNAL_SOURCE = 1,
    FIRST_ORDER_STEERING_STATE = 0,
    SECOND_ORDER_STEERING_STATE = 1,
    CALIBRATE_HIGH_STEERING_STATE = 2,
    CALIBRATE_LOW_STEERING_STATE = 3,
    CALIBRATE_CENTER_STEERING_STATE = 4,
  };


  typedef boost::shared_ptr< ::novatel_gps_msgs::ClockSteering_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::novatel_gps_msgs::ClockSteering_<ContainerAllocator> const> ConstPtr;

}; // struct ClockSteering_

typedef ::novatel_gps_msgs::ClockSteering_<std::allocator<void> > ClockSteering;

typedef boost::shared_ptr< ::novatel_gps_msgs::ClockSteering > ClockSteeringPtr;
typedef boost::shared_ptr< ::novatel_gps_msgs::ClockSteering const> ClockSteeringConstPtr;

// constants requiring out of line definition

   

   

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::novatel_gps_msgs::ClockSteering_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::novatel_gps_msgs::ClockSteering_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::novatel_gps_msgs::ClockSteering_<ContainerAllocator1> & lhs, const ::novatel_gps_msgs::ClockSteering_<ContainerAllocator2> & rhs)
{
  return lhs.source == rhs.source &&
    lhs.steering_state == rhs.steering_state &&
    lhs.period == rhs.period &&
    lhs.pulse_width == rhs.pulse_width &&
    lhs.bandwidth == rhs.bandwidth &&
    lhs.slope == rhs.slope &&
    lhs.offset == rhs.offset &&
    lhs.drift_rate == rhs.drift_rate;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::novatel_gps_msgs::ClockSteering_<ContainerAllocator1> & lhs, const ::novatel_gps_msgs::ClockSteering_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace novatel_gps_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::novatel_gps_msgs::ClockSteering_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::novatel_gps_msgs::ClockSteering_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::novatel_gps_msgs::ClockSteering_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::novatel_gps_msgs::ClockSteering_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::novatel_gps_msgs::ClockSteering_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::novatel_gps_msgs::ClockSteering_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::novatel_gps_msgs::ClockSteering_<ContainerAllocator> >
{
  static const char* value()
  {
    return "03024ea60365b742dd5e56411830735e";
  }

  static const char* value(const ::novatel_gps_msgs::ClockSteering_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x03024ea60365b742ULL;
  static const uint64_t static_value2 = 0xdd5e56411830735eULL;
};

template<class ContainerAllocator>
struct DataType< ::novatel_gps_msgs::ClockSteering_<ContainerAllocator> >
{
  static const char* value()
  {
    return "novatel_gps_msgs/ClockSteering";
  }

  static const char* value(const ::novatel_gps_msgs::ClockSteering_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::novatel_gps_msgs::ClockSteering_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# The CLOCKSTEERING log is used to monitor the current state of the clock steering process.\n"
"\n"
"int8 INTERNAL_SOURCE=0\n"
"int8 EXTERNAL_SOURCE=1\n"
"\n"
"int8 FIRST_ORDER_STEERING_STATE=0\n"
"int8 SECOND_ORDER_STEERING_STATE=1\n"
"int8 CALIBRATE_HIGH_STEERING_STATE=2\n"
"int8 CALIBRATE_LOW_STEERING_STATE=3\n"
"int8 CALIBRATE_CENTER_STEERING_STATE=4\n"
"\n"
"# Clock source\n"
"string source\n"
"\n"
"# Steering state\n"
"string steering_state\n"
"\n"
"# Period of the FREQUENCYOUT signal used to control the oscillator\n"
"uint32 period\n"
"\n"
"# Current pulse width of the FREQUENCYOUT signal. \n"
"float64 pulse_width\n"
"\n"
"# The current band width of the clock steering tracking loop in Hz.\n"
"float64 bandwidth\n"
"\n"
"# The current clock drift change in m/s/bit for a 1 LSB pulse width. \n"
"float32 slope\n"
"\n"
"# The last valid receiver clock offset computed (m).\n"
"float64 offset\n"
"\n"
"# The last valid receiver clock drift rate received (m/s).\n"
"float64 drift_rate\n"
;
  }

  static const char* value(const ::novatel_gps_msgs::ClockSteering_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::novatel_gps_msgs::ClockSteering_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.source);
      stream.next(m.steering_state);
      stream.next(m.period);
      stream.next(m.pulse_width);
      stream.next(m.bandwidth);
      stream.next(m.slope);
      stream.next(m.offset);
      stream.next(m.drift_rate);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ClockSteering_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::novatel_gps_msgs::ClockSteering_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::novatel_gps_msgs::ClockSteering_<ContainerAllocator>& v)
  {
    s << indent << "source: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.source);
    s << indent << "steering_state: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.steering_state);
    s << indent << "period: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.period);
    s << indent << "pulse_width: ";
    Printer<double>::stream(s, indent + "  ", v.pulse_width);
    s << indent << "bandwidth: ";
    Printer<double>::stream(s, indent + "  ", v.bandwidth);
    s << indent << "slope: ";
    Printer<float>::stream(s, indent + "  ", v.slope);
    s << indent << "offset: ";
    Printer<double>::stream(s, indent + "  ", v.offset);
    s << indent << "drift_rate: ";
    Printer<double>::stream(s, indent + "  ", v.drift_rate);
  }
};

} // namespace message_operations
} // namespace ros

#endif // NOVATEL_GPS_MSGS_MESSAGE_CLOCKSTEERING_H
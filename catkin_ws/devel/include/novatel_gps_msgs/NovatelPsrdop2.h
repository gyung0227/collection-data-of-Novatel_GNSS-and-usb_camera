// Generated by gencpp from file novatel_gps_msgs/NovatelPsrdop2.msg
// DO NOT EDIT!


#ifndef NOVATEL_GPS_MSGS_MESSAGE_NOVATELPSRDOP2_H
#define NOVATEL_GPS_MSGS_MESSAGE_NOVATELPSRDOP2_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <novatel_gps_msgs/NovatelMessageHeader.h>
#include <novatel_gps_msgs/NovatelPsrdop2System.h>

namespace novatel_gps_msgs
{
template <class ContainerAllocator>
struct NovatelPsrdop2_
{
  typedef NovatelPsrdop2_<ContainerAllocator> Type;

  NovatelPsrdop2_()
    : header()
    , novatel_msg_header()
    , gdop(0.0)
    , pdop(0.0)
    , hdop(0.0)
    , vdop(0.0)
    , systems()  {
    }
  NovatelPsrdop2_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , novatel_msg_header(_alloc)
    , gdop(0.0)
    , pdop(0.0)
    , hdop(0.0)
    , vdop(0.0)
    , systems(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::novatel_gps_msgs::NovatelMessageHeader_<ContainerAllocator>  _novatel_msg_header_type;
  _novatel_msg_header_type novatel_msg_header;

   typedef float _gdop_type;
  _gdop_type gdop;

   typedef float _pdop_type;
  _pdop_type pdop;

   typedef float _hdop_type;
  _hdop_type hdop;

   typedef float _vdop_type;
  _vdop_type vdop;

   typedef std::vector< ::novatel_gps_msgs::NovatelPsrdop2System_<ContainerAllocator> , typename std::allocator_traits<ContainerAllocator>::template rebind_alloc< ::novatel_gps_msgs::NovatelPsrdop2System_<ContainerAllocator> >> _systems_type;
  _systems_type systems;





  typedef boost::shared_ptr< ::novatel_gps_msgs::NovatelPsrdop2_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::novatel_gps_msgs::NovatelPsrdop2_<ContainerAllocator> const> ConstPtr;

}; // struct NovatelPsrdop2_

typedef ::novatel_gps_msgs::NovatelPsrdop2_<std::allocator<void> > NovatelPsrdop2;

typedef boost::shared_ptr< ::novatel_gps_msgs::NovatelPsrdop2 > NovatelPsrdop2Ptr;
typedef boost::shared_ptr< ::novatel_gps_msgs::NovatelPsrdop2 const> NovatelPsrdop2ConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::novatel_gps_msgs::NovatelPsrdop2_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::novatel_gps_msgs::NovatelPsrdop2_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::novatel_gps_msgs::NovatelPsrdop2_<ContainerAllocator1> & lhs, const ::novatel_gps_msgs::NovatelPsrdop2_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.novatel_msg_header == rhs.novatel_msg_header &&
    lhs.gdop == rhs.gdop &&
    lhs.pdop == rhs.pdop &&
    lhs.hdop == rhs.hdop &&
    lhs.vdop == rhs.vdop &&
    lhs.systems == rhs.systems;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::novatel_gps_msgs::NovatelPsrdop2_<ContainerAllocator1> & lhs, const ::novatel_gps_msgs::NovatelPsrdop2_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace novatel_gps_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::novatel_gps_msgs::NovatelPsrdop2_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::novatel_gps_msgs::NovatelPsrdop2_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::novatel_gps_msgs::NovatelPsrdop2_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::novatel_gps_msgs::NovatelPsrdop2_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::novatel_gps_msgs::NovatelPsrdop2_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::novatel_gps_msgs::NovatelPsrdop2_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::novatel_gps_msgs::NovatelPsrdop2_<ContainerAllocator> >
{
  static const char* value()
  {
    return "8ad7d9f99e8c840fb04e7cb161bcbb5b";
  }

  static const char* value(const ::novatel_gps_msgs::NovatelPsrdop2_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x8ad7d9f99e8c840fULL;
  static const uint64_t static_value2 = 0xb04e7cb161bcbb5bULL;
};

template<class ContainerAllocator>
struct DataType< ::novatel_gps_msgs::NovatelPsrdop2_<ContainerAllocator> >
{
  static const char* value()
  {
    return "novatel_gps_msgs/NovatelPsrdop2";
  }

  static const char* value(const ::novatel_gps_msgs::NovatelPsrdop2_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::novatel_gps_msgs::NovatelPsrdop2_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# PSR Dilution of Precision (DOP) values\n"
"std_msgs/Header header\n"
"\n"
"NovatelMessageHeader novatel_msg_header\n"
"\n"
"# Geometry dilution of precision\n"
"float32 gdop\n"
"# Position dilution of precision\n"
"float32 pdop\n"
"# Horizontal dilution of precision\n"
"float32 hdop\n"
"# Vertical dilution of precision\n"
"float32 vdop\n"
"\n"
"# Time dilution of precision for each GNSS system\n"
"NovatelPsrdop2System[] systems\n"
"\n"
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
"MSG: novatel_gps_msgs/NovatelMessageHeader\n"
"# Novatel Message Header\n"
"\n"
"string message_name\n"
"string port\n"
"uint32 sequence_num\n"
"float32 percent_idle_time\n"
"string gps_time_status\n"
"uint32 gps_week_num\n"
"float64 gps_seconds\n"
"\n"
"# Bit       Mask      Description\n"
"#  0     0x00000001   Error flag (Bit = 0: No Error, Bit = 1: Error)\n"
"#  1     0x00000002   Temperature Status (0: Within Spec, 1: Warning)\n"
"#  2     0x00000004   Voltage Supply Status (0: OK, 1: Warning)\n"
"#  3     0x00000008   Antenna Power Status (0: Powered, 1: Not Powered)\n"
"#  4     0x00000010   <Reserved>\n"
"#  5     0x00000020   Antenna open flag (0: OK, 1: Open)\n"
"#  6     0x00000040   Antenna shorted flag (0: OK, 1: Shorted)\n"
"#  7     0x00000080   CPU overload flag\n"
"#  8     0x00000100   COM1 buffer overrun flag (0: No overrun, 1: Overrun)\n"
"#  9     0x00000200   COM2 buffer overrun flag (0: No overrun, 1: Overrun)\n"
"#  10    0x00000400   COM3 buffer overrun flag (0: No overrun, 1: Overrun)\n"
"#  11    0x00000800   USB buffer overrun flag (0: No overrun, 1: Overrun)\n"
"#  12    0x00001000   <Reserved>\n"
"#  13    0x00002000   <Reserved>\n"
"#  14    0x00004000   <Reserved>\n"
"#  15    0x00008000   RF1 AGC Status (0: OK, 1: Bad)\n"
"#  16    0x00010000   <Reserverd>\n"
"#  17    0x00020000   RF2 AGC status (0: OK, 1: Bad)\n"
"#  18    0x00040000   Almanac flag/UTC known (0: Valid, 1: Invalid)\n"
"#  19    0x00080000   Position solution flag (0: Valid, 1: Invalid)\n"
"#  20    0x00100000   Position fixed flag (0: Not fixed, 1: Fixed)\n"
"#  21    0x00200000   Clock steering status (0: Enabled, 1: Disabled)\n"
"#  22    0x00400000   Clock model flag (0: Valid, 1: Invalid)\n"
"#  23    0x00800000   OEMV external oscillator flag (0: Disabled, 1: Enabled)\n"
"#  24    0x01000000   Software resource (0: OK, 1: Warning)\n"
"#  25    0x02000000   <Reserved>\n"
"#  26    0x04000000   <Reserved>\n"
"#  27    0x08000000   <Reserved>\n"
"#  28    0x10000000   <Reserved>\n"
"#  29    0x20000000   Auxiliary 3 status event flag (0: No event, 1: Event)\n"
"#  30    0x40000000   Auxiliary 2 status event flag (0: No event, 1: Event)\n"
"#  31    0x80000000   Auxiliary 1 status event flag (0: No event, 1: Event)\n"
"NovatelReceiverStatus receiver_status\n"
"\n"
"# Receiver build number (0-65535)\n"
"uint32 receiver_software_version\n"
"================================================================================\n"
"MSG: novatel_gps_msgs/NovatelReceiverStatus\n"
"# From the original Novatel receiver status message bitfield\n"
"#  0     0x00000001   Error flag (Bit = 0: No Error, Bit = 1: Error)\n"
"#  1     0x00000002   Temperature Status (0: Within Spec, 1: Warning)\n"
"#  2     0x00000004   Voltage Supply Status (0: OK, 1: Warning)\n"
"#  3     0x00000008   Antenna Power Status (0: Powered, 1: Not Powered)\n"
"#  4     0x00000010   <Reserved>\n"
"#  5     0x00000020   Antenna open flag (0: OK, 1: Open)\n"
"#  6     0x00000040   Antenna shorted flag (0: OK, 1: Shorted)\n"
"#  7     0x00000080   CPU overload flag\n"
"#  8     0x00000100   COM1 buffer overrun flag (0: No overrun, 1: Overrun)\n"
"#  9     0x00000200   COM2 buffer overrun flag (0: No overrun, 1: Overrun)\n"
"#  10    0x00000400   COM3 buffer overrun flag (0: No overrun, 1: Overrun)\n"
"#  11    0x00000800   USB buffer overrun flag (0: No overrun, 1: Overrun)\n"
"#  12    0x00001000   <Reserved>\n"
"#  13    0x00002000   <Reserved>\n"
"#  14    0x00004000   <Reserved>\n"
"#  15    0x00008000   RF1 AGC Status (0: OK, 1: Bad)\n"
"#  16    0x00010000   <Reserverd>\n"
"#  17    0x00020000   RF2 AGC status (0: OK, 1: Bad)\n"
"#  18    0x00040000   Almanac flag/UTC known (0: Valid, 1: Invalid)\n"
"#  19    0x00080000   Position solution flag (0: Valid, 1: Invalid)\n"
"#  20    0x00100000   Position fixed flag (0: Not fixed, 1: Fixed)\n"
"#  21    0x00200000   Clock steering status (0: Enabled, 1: Disabled)\n"
"#  22    0x00400000   Clock model flag (0: Valid, 1: Invalid)\n"
"#  23    0x00800000   OEMV external oscillator flag (0: Disabled, 1: Enabled)\n"
"#  24    0x01000000   Software resource (0: OK, 1: Warning)\n"
"#  25    0x02000000   <Reserved>\n"
"#  26    0x04000000   <Reserved>\n"
"#  27    0x08000000   <Reserved>\n"
"#  28    0x10000000   <Reserved>\n"
"#  29    0x20000000   Auxiliary 3 status event flag (0: No event, 1: Event)\n"
"#  30    0x40000000   Auxiliary 2 status event flag (0: No event, 1: Event)\n"
"#  31    0x80000000   Auxiliary 1 status event flag (0: No event, 1: Event)\n"
"uint32 original_status_code\n"
"bool error_flag\n"
"bool temperature_flag\n"
"bool voltage_supply_flag\n"
"bool antenna_powered\n"
"bool antenna_is_open\n"
"bool antenna_is_shorted\n"
"bool cpu_overload_flag\n"
"bool com1_buffer_overrun\n"
"bool com2_buffer_overrun\n"
"bool com3_buffer_overrun\n"
"bool usb_buffer_overrun\n"
"bool rf1_agc_flag\n"
"bool rf2_agc_flag\n"
"bool almanac_flag\n"
"bool position_solution_flag\n"
"bool position_fixed_flag\n"
"bool clock_steering_status_enabled\n"
"bool clock_model_flag\n"
"bool oemv_external_oscillator_flag\n"
"bool software_resource_flag\n"
"bool aux1_status_event_flag\n"
"bool aux2_status_event_flag\n"
"bool aux3_status_event_flag\n"
"\n"
"\n"
"================================================================================\n"
"MSG: novatel_gps_msgs/NovatelPsrdop2System\n"
"# GNSS System information provided by PSRDOP2 logs\n"
"string system\n"
"float32 tdop\n"
;
  }

  static const char* value(const ::novatel_gps_msgs::NovatelPsrdop2_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::novatel_gps_msgs::NovatelPsrdop2_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.novatel_msg_header);
      stream.next(m.gdop);
      stream.next(m.pdop);
      stream.next(m.hdop);
      stream.next(m.vdop);
      stream.next(m.systems);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct NovatelPsrdop2_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::novatel_gps_msgs::NovatelPsrdop2_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::novatel_gps_msgs::NovatelPsrdop2_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "novatel_msg_header: ";
    s << std::endl;
    Printer< ::novatel_gps_msgs::NovatelMessageHeader_<ContainerAllocator> >::stream(s, indent + "  ", v.novatel_msg_header);
    s << indent << "gdop: ";
    Printer<float>::stream(s, indent + "  ", v.gdop);
    s << indent << "pdop: ";
    Printer<float>::stream(s, indent + "  ", v.pdop);
    s << indent << "hdop: ";
    Printer<float>::stream(s, indent + "  ", v.hdop);
    s << indent << "vdop: ";
    Printer<float>::stream(s, indent + "  ", v.vdop);
    s << indent << "systems[]" << std::endl;
    for (size_t i = 0; i < v.systems.size(); ++i)
    {
      s << indent << "  systems[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::novatel_gps_msgs::NovatelPsrdop2System_<ContainerAllocator> >::stream(s, indent + "    ", v.systems[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // NOVATEL_GPS_MSGS_MESSAGE_NOVATELPSRDOP2_H
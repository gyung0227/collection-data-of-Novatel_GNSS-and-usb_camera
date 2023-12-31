// Generated by gencpp from file novatel_gps_msgs/Inspvax.msg
// DO NOT EDIT!


#ifndef NOVATEL_GPS_MSGS_MESSAGE_INSPVAX_H
#define NOVATEL_GPS_MSGS_MESSAGE_INSPVAX_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <novatel_gps_msgs/NovatelMessageHeader.h>
#include <novatel_gps_msgs/NovatelExtendedSolutionStatus.h>

namespace novatel_gps_msgs
{
template <class ContainerAllocator>
struct Inspvax_
{
  typedef Inspvax_<ContainerAllocator> Type;

  Inspvax_()
    : header()
    , novatel_msg_header()
    , ins_status()
    , position_type()
    , latitude(0.0)
    , longitude(0.0)
    , altitude(0.0)
    , undulation(0.0)
    , north_velocity(0.0)
    , east_velocity(0.0)
    , up_velocity(0.0)
    , roll(0.0)
    , pitch(0.0)
    , azimuth(0.0)
    , latitude_std(0.0)
    , longitude_std(0.0)
    , altitude_std(0.0)
    , north_velocity_std(0.0)
    , east_velocity_std(0.0)
    , up_velocity_std(0.0)
    , roll_std(0.0)
    , pitch_std(0.0)
    , azimuth_std(0.0)
    , extended_status()
    , seconds_since_update(0)  {
    }
  Inspvax_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , novatel_msg_header(_alloc)
    , ins_status(_alloc)
    , position_type(_alloc)
    , latitude(0.0)
    , longitude(0.0)
    , altitude(0.0)
    , undulation(0.0)
    , north_velocity(0.0)
    , east_velocity(0.0)
    , up_velocity(0.0)
    , roll(0.0)
    , pitch(0.0)
    , azimuth(0.0)
    , latitude_std(0.0)
    , longitude_std(0.0)
    , altitude_std(0.0)
    , north_velocity_std(0.0)
    , east_velocity_std(0.0)
    , up_velocity_std(0.0)
    , roll_std(0.0)
    , pitch_std(0.0)
    , azimuth_std(0.0)
    , extended_status(_alloc)
    , seconds_since_update(0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::novatel_gps_msgs::NovatelMessageHeader_<ContainerAllocator>  _novatel_msg_header_type;
  _novatel_msg_header_type novatel_msg_header;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _ins_status_type;
  _ins_status_type ins_status;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _position_type_type;
  _position_type_type position_type;

   typedef double _latitude_type;
  _latitude_type latitude;

   typedef double _longitude_type;
  _longitude_type longitude;

   typedef double _altitude_type;
  _altitude_type altitude;

   typedef float _undulation_type;
  _undulation_type undulation;

   typedef double _north_velocity_type;
  _north_velocity_type north_velocity;

   typedef double _east_velocity_type;
  _east_velocity_type east_velocity;

   typedef double _up_velocity_type;
  _up_velocity_type up_velocity;

   typedef double _roll_type;
  _roll_type roll;

   typedef double _pitch_type;
  _pitch_type pitch;

   typedef double _azimuth_type;
  _azimuth_type azimuth;

   typedef float _latitude_std_type;
  _latitude_std_type latitude_std;

   typedef float _longitude_std_type;
  _longitude_std_type longitude_std;

   typedef float _altitude_std_type;
  _altitude_std_type altitude_std;

   typedef float _north_velocity_std_type;
  _north_velocity_std_type north_velocity_std;

   typedef float _east_velocity_std_type;
  _east_velocity_std_type east_velocity_std;

   typedef float _up_velocity_std_type;
  _up_velocity_std_type up_velocity_std;

   typedef float _roll_std_type;
  _roll_std_type roll_std;

   typedef float _pitch_std_type;
  _pitch_std_type pitch_std;

   typedef float _azimuth_std_type;
  _azimuth_std_type azimuth_std;

   typedef  ::novatel_gps_msgs::NovatelExtendedSolutionStatus_<ContainerAllocator>  _extended_status_type;
  _extended_status_type extended_status;

   typedef uint16_t _seconds_since_update_type;
  _seconds_since_update_type seconds_since_update;





  typedef boost::shared_ptr< ::novatel_gps_msgs::Inspvax_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::novatel_gps_msgs::Inspvax_<ContainerAllocator> const> ConstPtr;

}; // struct Inspvax_

typedef ::novatel_gps_msgs::Inspvax_<std::allocator<void> > Inspvax;

typedef boost::shared_ptr< ::novatel_gps_msgs::Inspvax > InspvaxPtr;
typedef boost::shared_ptr< ::novatel_gps_msgs::Inspvax const> InspvaxConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::novatel_gps_msgs::Inspvax_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::novatel_gps_msgs::Inspvax_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::novatel_gps_msgs::Inspvax_<ContainerAllocator1> & lhs, const ::novatel_gps_msgs::Inspvax_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.novatel_msg_header == rhs.novatel_msg_header &&
    lhs.ins_status == rhs.ins_status &&
    lhs.position_type == rhs.position_type &&
    lhs.latitude == rhs.latitude &&
    lhs.longitude == rhs.longitude &&
    lhs.altitude == rhs.altitude &&
    lhs.undulation == rhs.undulation &&
    lhs.north_velocity == rhs.north_velocity &&
    lhs.east_velocity == rhs.east_velocity &&
    lhs.up_velocity == rhs.up_velocity &&
    lhs.roll == rhs.roll &&
    lhs.pitch == rhs.pitch &&
    lhs.azimuth == rhs.azimuth &&
    lhs.latitude_std == rhs.latitude_std &&
    lhs.longitude_std == rhs.longitude_std &&
    lhs.altitude_std == rhs.altitude_std &&
    lhs.north_velocity_std == rhs.north_velocity_std &&
    lhs.east_velocity_std == rhs.east_velocity_std &&
    lhs.up_velocity_std == rhs.up_velocity_std &&
    lhs.roll_std == rhs.roll_std &&
    lhs.pitch_std == rhs.pitch_std &&
    lhs.azimuth_std == rhs.azimuth_std &&
    lhs.extended_status == rhs.extended_status &&
    lhs.seconds_since_update == rhs.seconds_since_update;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::novatel_gps_msgs::Inspvax_<ContainerAllocator1> & lhs, const ::novatel_gps_msgs::Inspvax_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace novatel_gps_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::novatel_gps_msgs::Inspvax_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::novatel_gps_msgs::Inspvax_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::novatel_gps_msgs::Inspvax_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::novatel_gps_msgs::Inspvax_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::novatel_gps_msgs::Inspvax_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::novatel_gps_msgs::Inspvax_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::novatel_gps_msgs::Inspvax_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cebf3b182479d01907e3894361b97eba";
  }

  static const char* value(const ::novatel_gps_msgs::Inspvax_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xcebf3b182479d019ULL;
  static const uint64_t static_value2 = 0x07e3894361b97ebaULL;
};

template<class ContainerAllocator>
struct DataType< ::novatel_gps_msgs::Inspvax_<ContainerAllocator> >
{
  static const char* value()
  {
    return "novatel_gps_msgs/Inspvax";
  }

  static const char* value(const ::novatel_gps_msgs::Inspvax_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::novatel_gps_msgs::Inspvax_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# message 1465\n"
"\n"
"std_msgs/Header header\n"
"\n"
"NovatelMessageHeader novatel_msg_header\n"
"\n"
"# Table 29 in the SPAN on OEM6 manual:\n"
"# See: http://www.novatel.com/assets/Documents/Manuals/OM-20000144UM.pdf#page=121\n"
"string ins_status\n"
"\n"
"\n"
"# Table 30 in the SPAN on OEM6 manual:\n"
"# See: http://www.novatel.com/assets/Documents/Manuals/OM-20000144UM.pdf#page=124\n"
"string position_type\n"
"\n"
"\n"
"float64 latitude\n"
"float64 longitude\n"
"float64 altitude\n"
"\n"
"float32 undulation\n"
"\n"
"float64 north_velocity\n"
"float64 east_velocity\n"
"float64 up_velocity\n"
"\n"
"float64 roll\n"
"float64 pitch\n"
"float64 azimuth\n"
"\n"
"float32 latitude_std\n"
"float32 longitude_std\n"
"float32 altitude_std\n"
"\n"
"float32 north_velocity_std\n"
"float32 east_velocity_std\n"
"float32 up_velocity_std\n"
"\n"
"float32 roll_std\n"
"float32 pitch_std\n"
"float32 azimuth_std\n"
"\n"
"NovatelExtendedSolutionStatus extended_status\n"
"\n"
"uint16 seconds_since_update\n"
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
"MSG: novatel_gps_msgs/NovatelExtendedSolutionStatus\n"
"# Bit    Mask      Description\n"
"#  0     0x01      Advance RTK verified (0 = not verified, 1 = verified)\n"
"# 1-3    0x0E      Pseudorange Ionosphere Correction\n"
"#                    0 = unknown\n"
"#                    1 = Klobuchar Broadcast\n"
"#                    2 = SBAS Broadcast\n"
"#                    3 = Multi-frequency Computed\n"
"#                    4 = PSRDiff Correction\n"
"#                    5 = NovaTel Blended Ionosphere Value\n"
"# 4-7  0xF0        <Reserved>\n"
"uint32 original_mask\n"
"bool advance_rtk_verified\n"
"string psuedorange_iono_correction\n"
;
  }

  static const char* value(const ::novatel_gps_msgs::Inspvax_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::novatel_gps_msgs::Inspvax_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.novatel_msg_header);
      stream.next(m.ins_status);
      stream.next(m.position_type);
      stream.next(m.latitude);
      stream.next(m.longitude);
      stream.next(m.altitude);
      stream.next(m.undulation);
      stream.next(m.north_velocity);
      stream.next(m.east_velocity);
      stream.next(m.up_velocity);
      stream.next(m.roll);
      stream.next(m.pitch);
      stream.next(m.azimuth);
      stream.next(m.latitude_std);
      stream.next(m.longitude_std);
      stream.next(m.altitude_std);
      stream.next(m.north_velocity_std);
      stream.next(m.east_velocity_std);
      stream.next(m.up_velocity_std);
      stream.next(m.roll_std);
      stream.next(m.pitch_std);
      stream.next(m.azimuth_std);
      stream.next(m.extended_status);
      stream.next(m.seconds_since_update);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Inspvax_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::novatel_gps_msgs::Inspvax_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::novatel_gps_msgs::Inspvax_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "novatel_msg_header: ";
    s << std::endl;
    Printer< ::novatel_gps_msgs::NovatelMessageHeader_<ContainerAllocator> >::stream(s, indent + "  ", v.novatel_msg_header);
    s << indent << "ins_status: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.ins_status);
    s << indent << "position_type: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.position_type);
    s << indent << "latitude: ";
    Printer<double>::stream(s, indent + "  ", v.latitude);
    s << indent << "longitude: ";
    Printer<double>::stream(s, indent + "  ", v.longitude);
    s << indent << "altitude: ";
    Printer<double>::stream(s, indent + "  ", v.altitude);
    s << indent << "undulation: ";
    Printer<float>::stream(s, indent + "  ", v.undulation);
    s << indent << "north_velocity: ";
    Printer<double>::stream(s, indent + "  ", v.north_velocity);
    s << indent << "east_velocity: ";
    Printer<double>::stream(s, indent + "  ", v.east_velocity);
    s << indent << "up_velocity: ";
    Printer<double>::stream(s, indent + "  ", v.up_velocity);
    s << indent << "roll: ";
    Printer<double>::stream(s, indent + "  ", v.roll);
    s << indent << "pitch: ";
    Printer<double>::stream(s, indent + "  ", v.pitch);
    s << indent << "azimuth: ";
    Printer<double>::stream(s, indent + "  ", v.azimuth);
    s << indent << "latitude_std: ";
    Printer<float>::stream(s, indent + "  ", v.latitude_std);
    s << indent << "longitude_std: ";
    Printer<float>::stream(s, indent + "  ", v.longitude_std);
    s << indent << "altitude_std: ";
    Printer<float>::stream(s, indent + "  ", v.altitude_std);
    s << indent << "north_velocity_std: ";
    Printer<float>::stream(s, indent + "  ", v.north_velocity_std);
    s << indent << "east_velocity_std: ";
    Printer<float>::stream(s, indent + "  ", v.east_velocity_std);
    s << indent << "up_velocity_std: ";
    Printer<float>::stream(s, indent + "  ", v.up_velocity_std);
    s << indent << "roll_std: ";
    Printer<float>::stream(s, indent + "  ", v.roll_std);
    s << indent << "pitch_std: ";
    Printer<float>::stream(s, indent + "  ", v.pitch_std);
    s << indent << "azimuth_std: ";
    Printer<float>::stream(s, indent + "  ", v.azimuth_std);
    s << indent << "extended_status: ";
    s << std::endl;
    Printer< ::novatel_gps_msgs::NovatelExtendedSolutionStatus_<ContainerAllocator> >::stream(s, indent + "  ", v.extended_status);
    s << indent << "seconds_since_update: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.seconds_since_update);
  }
};

} // namespace message_operations
} // namespace ros

#endif // NOVATEL_GPS_MSGS_MESSAGE_INSPVAX_H

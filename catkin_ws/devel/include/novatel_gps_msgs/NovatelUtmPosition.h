// Generated by gencpp from file novatel_gps_msgs/NovatelUtmPosition.msg
// DO NOT EDIT!


#ifndef NOVATEL_GPS_MSGS_MESSAGE_NOVATELUTMPOSITION_H
#define NOVATEL_GPS_MSGS_MESSAGE_NOVATELUTMPOSITION_H


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
#include <novatel_gps_msgs/NovatelSignalMask.h>

namespace novatel_gps_msgs
{
template <class ContainerAllocator>
struct NovatelUtmPosition_
{
  typedef NovatelUtmPosition_<ContainerAllocator> Type;

  NovatelUtmPosition_()
    : header()
    , novatel_msg_header()
    , solution_status()
    , position_type()
    , lon_zone_number(0)
    , lat_zone_letter()
    , northing(0.0)
    , easting(0.0)
    , height(0.0)
    , undulation(0.0)
    , datum_id()
    , northing_sigma(0.0)
    , easting_sigma(0.0)
    , height_sigma(0.0)
    , base_station_id()
    , diff_age(0.0)
    , solution_age(0.0)
    , num_satellites_tracked(0)
    , num_satellites_used_in_solution(0)
    , num_gps_and_glonass_l1_used_in_solution(0)
    , num_gps_and_glonass_l1_and_l2_used_in_solution(0)
    , extended_solution_status()
    , signal_mask()  {
    }
  NovatelUtmPosition_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , novatel_msg_header(_alloc)
    , solution_status(_alloc)
    , position_type(_alloc)
    , lon_zone_number(0)
    , lat_zone_letter(_alloc)
    , northing(0.0)
    , easting(0.0)
    , height(0.0)
    , undulation(0.0)
    , datum_id(_alloc)
    , northing_sigma(0.0)
    , easting_sigma(0.0)
    , height_sigma(0.0)
    , base_station_id(_alloc)
    , diff_age(0.0)
    , solution_age(0.0)
    , num_satellites_tracked(0)
    , num_satellites_used_in_solution(0)
    , num_gps_and_glonass_l1_used_in_solution(0)
    , num_gps_and_glonass_l1_and_l2_used_in_solution(0)
    , extended_solution_status(_alloc)
    , signal_mask(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::novatel_gps_msgs::NovatelMessageHeader_<ContainerAllocator>  _novatel_msg_header_type;
  _novatel_msg_header_type novatel_msg_header;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _solution_status_type;
  _solution_status_type solution_status;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _position_type_type;
  _position_type_type position_type;

   typedef uint32_t _lon_zone_number_type;
  _lon_zone_number_type lon_zone_number;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _lat_zone_letter_type;
  _lat_zone_letter_type lat_zone_letter;

   typedef double _northing_type;
  _northing_type northing;

   typedef double _easting_type;
  _easting_type easting;

   typedef double _height_type;
  _height_type height;

   typedef float _undulation_type;
  _undulation_type undulation;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _datum_id_type;
  _datum_id_type datum_id;

   typedef float _northing_sigma_type;
  _northing_sigma_type northing_sigma;

   typedef float _easting_sigma_type;
  _easting_sigma_type easting_sigma;

   typedef float _height_sigma_type;
  _height_sigma_type height_sigma;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _base_station_id_type;
  _base_station_id_type base_station_id;

   typedef float _diff_age_type;
  _diff_age_type diff_age;

   typedef float _solution_age_type;
  _solution_age_type solution_age;

   typedef uint8_t _num_satellites_tracked_type;
  _num_satellites_tracked_type num_satellites_tracked;

   typedef uint8_t _num_satellites_used_in_solution_type;
  _num_satellites_used_in_solution_type num_satellites_used_in_solution;

   typedef uint8_t _num_gps_and_glonass_l1_used_in_solution_type;
  _num_gps_and_glonass_l1_used_in_solution_type num_gps_and_glonass_l1_used_in_solution;

   typedef uint8_t _num_gps_and_glonass_l1_and_l2_used_in_solution_type;
  _num_gps_and_glonass_l1_and_l2_used_in_solution_type num_gps_and_glonass_l1_and_l2_used_in_solution;

   typedef  ::novatel_gps_msgs::NovatelExtendedSolutionStatus_<ContainerAllocator>  _extended_solution_status_type;
  _extended_solution_status_type extended_solution_status;

   typedef  ::novatel_gps_msgs::NovatelSignalMask_<ContainerAllocator>  _signal_mask_type;
  _signal_mask_type signal_mask;





  typedef boost::shared_ptr< ::novatel_gps_msgs::NovatelUtmPosition_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::novatel_gps_msgs::NovatelUtmPosition_<ContainerAllocator> const> ConstPtr;

}; // struct NovatelUtmPosition_

typedef ::novatel_gps_msgs::NovatelUtmPosition_<std::allocator<void> > NovatelUtmPosition;

typedef boost::shared_ptr< ::novatel_gps_msgs::NovatelUtmPosition > NovatelUtmPositionPtr;
typedef boost::shared_ptr< ::novatel_gps_msgs::NovatelUtmPosition const> NovatelUtmPositionConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::novatel_gps_msgs::NovatelUtmPosition_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::novatel_gps_msgs::NovatelUtmPosition_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::novatel_gps_msgs::NovatelUtmPosition_<ContainerAllocator1> & lhs, const ::novatel_gps_msgs::NovatelUtmPosition_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.novatel_msg_header == rhs.novatel_msg_header &&
    lhs.solution_status == rhs.solution_status &&
    lhs.position_type == rhs.position_type &&
    lhs.lon_zone_number == rhs.lon_zone_number &&
    lhs.lat_zone_letter == rhs.lat_zone_letter &&
    lhs.northing == rhs.northing &&
    lhs.easting == rhs.easting &&
    lhs.height == rhs.height &&
    lhs.undulation == rhs.undulation &&
    lhs.datum_id == rhs.datum_id &&
    lhs.northing_sigma == rhs.northing_sigma &&
    lhs.easting_sigma == rhs.easting_sigma &&
    lhs.height_sigma == rhs.height_sigma &&
    lhs.base_station_id == rhs.base_station_id &&
    lhs.diff_age == rhs.diff_age &&
    lhs.solution_age == rhs.solution_age &&
    lhs.num_satellites_tracked == rhs.num_satellites_tracked &&
    lhs.num_satellites_used_in_solution == rhs.num_satellites_used_in_solution &&
    lhs.num_gps_and_glonass_l1_used_in_solution == rhs.num_gps_and_glonass_l1_used_in_solution &&
    lhs.num_gps_and_glonass_l1_and_l2_used_in_solution == rhs.num_gps_and_glonass_l1_and_l2_used_in_solution &&
    lhs.extended_solution_status == rhs.extended_solution_status &&
    lhs.signal_mask == rhs.signal_mask;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::novatel_gps_msgs::NovatelUtmPosition_<ContainerAllocator1> & lhs, const ::novatel_gps_msgs::NovatelUtmPosition_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace novatel_gps_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::novatel_gps_msgs::NovatelUtmPosition_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::novatel_gps_msgs::NovatelUtmPosition_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::novatel_gps_msgs::NovatelUtmPosition_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::novatel_gps_msgs::NovatelUtmPosition_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::novatel_gps_msgs::NovatelUtmPosition_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::novatel_gps_msgs::NovatelUtmPosition_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::novatel_gps_msgs::NovatelUtmPosition_<ContainerAllocator> >
{
  static const char* value()
  {
    return "401ec19560e710c1e0aab9f0eec02ece";
  }

  static const char* value(const ::novatel_gps_msgs::NovatelUtmPosition_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x401ec19560e710c1ULL;
  static const uint64_t static_value2 = 0xe0aab9f0eec02eceULL;
};

template<class ContainerAllocator>
struct DataType< ::novatel_gps_msgs::NovatelUtmPosition_<ContainerAllocator> >
{
  static const char* value()
  {
    return "novatel_gps_msgs/NovatelUtmPosition";
  }

  static const char* value(const ::novatel_gps_msgs::NovatelUtmPosition_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::novatel_gps_msgs::NovatelUtmPosition_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Parsed Best UTM data from Novatel OEM6 receiver\n"
"Header header\n"
"\n"
"NovatelMessageHeader novatel_msg_header\n"
"\n"
"string solution_status\n"
"string position_type\n"
"\n"
"# Position Data\n"
"uint32 lon_zone_number\n"
"string lat_zone_letter\n"
"float64 northing\n"
"float64 easting\n"
"float64 height\n"
"\n"
"float32 undulation\n"
"string datum_id\n"
"\n"
"# Accuracy Statistics (units?)\n"
"float32 northing_sigma\n"
"float32 easting_sigma\n"
"float32 height_sigma\n"
"string base_station_id\n"
"float32 diff_age\n"
"float32 solution_age\n"
"uint8 num_satellites_tracked\n"
"uint8 num_satellites_used_in_solution\n"
"uint8 num_gps_and_glonass_l1_used_in_solution\n"
"uint8 num_gps_and_glonass_l1_and_l2_used_in_solution\n"
"\n"
"NovatelExtendedSolutionStatus extended_solution_status\n"
"\n"
"NovatelSignalMask signal_mask\n"
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
"\n"
"================================================================================\n"
"MSG: novatel_gps_msgs/NovatelSignalMask\n"
"# Bit    Mask      Description\n"
"#  0     0x01      GPS L1 used in Solution\n"
"#  1     0x02      GPS L2 used in Solution\n"
"#  2     0x04      GPS L5 used in Solution\n"
"#  3     0x08      <Reserved>\n"
"#  4     0x10      GLONASS L1 used in Solution\n"
"#  5     0x20      GLONASS L2 used in Solution\n"
"# 6-7  0x40-0x80   <Reserved>\n"
"uint32 original_mask\n"
"bool gps_L1_used_in_solution\n"
"bool gps_L2_used_in_solution\n"
"bool gps_L3_used_in_solution\n"
"bool glonass_L1_used_in_solution\n"
"bool glonass_L2_used_in_solution\n"
;
  }

  static const char* value(const ::novatel_gps_msgs::NovatelUtmPosition_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::novatel_gps_msgs::NovatelUtmPosition_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.novatel_msg_header);
      stream.next(m.solution_status);
      stream.next(m.position_type);
      stream.next(m.lon_zone_number);
      stream.next(m.lat_zone_letter);
      stream.next(m.northing);
      stream.next(m.easting);
      stream.next(m.height);
      stream.next(m.undulation);
      stream.next(m.datum_id);
      stream.next(m.northing_sigma);
      stream.next(m.easting_sigma);
      stream.next(m.height_sigma);
      stream.next(m.base_station_id);
      stream.next(m.diff_age);
      stream.next(m.solution_age);
      stream.next(m.num_satellites_tracked);
      stream.next(m.num_satellites_used_in_solution);
      stream.next(m.num_gps_and_glonass_l1_used_in_solution);
      stream.next(m.num_gps_and_glonass_l1_and_l2_used_in_solution);
      stream.next(m.extended_solution_status);
      stream.next(m.signal_mask);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct NovatelUtmPosition_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::novatel_gps_msgs::NovatelUtmPosition_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::novatel_gps_msgs::NovatelUtmPosition_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "novatel_msg_header: ";
    s << std::endl;
    Printer< ::novatel_gps_msgs::NovatelMessageHeader_<ContainerAllocator> >::stream(s, indent + "  ", v.novatel_msg_header);
    s << indent << "solution_status: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.solution_status);
    s << indent << "position_type: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.position_type);
    s << indent << "lon_zone_number: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.lon_zone_number);
    s << indent << "lat_zone_letter: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.lat_zone_letter);
    s << indent << "northing: ";
    Printer<double>::stream(s, indent + "  ", v.northing);
    s << indent << "easting: ";
    Printer<double>::stream(s, indent + "  ", v.easting);
    s << indent << "height: ";
    Printer<double>::stream(s, indent + "  ", v.height);
    s << indent << "undulation: ";
    Printer<float>::stream(s, indent + "  ", v.undulation);
    s << indent << "datum_id: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.datum_id);
    s << indent << "northing_sigma: ";
    Printer<float>::stream(s, indent + "  ", v.northing_sigma);
    s << indent << "easting_sigma: ";
    Printer<float>::stream(s, indent + "  ", v.easting_sigma);
    s << indent << "height_sigma: ";
    Printer<float>::stream(s, indent + "  ", v.height_sigma);
    s << indent << "base_station_id: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.base_station_id);
    s << indent << "diff_age: ";
    Printer<float>::stream(s, indent + "  ", v.diff_age);
    s << indent << "solution_age: ";
    Printer<float>::stream(s, indent + "  ", v.solution_age);
    s << indent << "num_satellites_tracked: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.num_satellites_tracked);
    s << indent << "num_satellites_used_in_solution: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.num_satellites_used_in_solution);
    s << indent << "num_gps_and_glonass_l1_used_in_solution: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.num_gps_and_glonass_l1_used_in_solution);
    s << indent << "num_gps_and_glonass_l1_and_l2_used_in_solution: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.num_gps_and_glonass_l1_and_l2_used_in_solution);
    s << indent << "extended_solution_status: ";
    s << std::endl;
    Printer< ::novatel_gps_msgs::NovatelExtendedSolutionStatus_<ContainerAllocator> >::stream(s, indent + "  ", v.extended_solution_status);
    s << indent << "signal_mask: ";
    s << std::endl;
    Printer< ::novatel_gps_msgs::NovatelSignalMask_<ContainerAllocator> >::stream(s, indent + "  ", v.signal_mask);
  }
};

} // namespace message_operations
} // namespace ros

#endif // NOVATEL_GPS_MSGS_MESSAGE_NOVATELUTMPOSITION_H

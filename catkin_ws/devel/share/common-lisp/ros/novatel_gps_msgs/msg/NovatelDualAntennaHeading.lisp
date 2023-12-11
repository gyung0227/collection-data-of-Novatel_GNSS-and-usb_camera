; Auto-generated. Do not edit!


(cl:in-package novatel_gps_msgs-msg)


;//! \htmlinclude NovatelDualAntennaHeading.msg.html

(cl:defclass <NovatelDualAntennaHeading> (roslisp-msg-protocol:ros-message)
  ((header
    :reader header
    :initarg :header
    :type std_msgs-msg:Header
    :initform (cl:make-instance 'std_msgs-msg:Header))
   (novatel_msg_header
    :reader novatel_msg_header
    :initarg :novatel_msg_header
    :type novatel_gps_msgs-msg:NovatelMessageHeader
    :initform (cl:make-instance 'novatel_gps_msgs-msg:NovatelMessageHeader))
   (solution_status
    :reader solution_status
    :initarg :solution_status
    :type cl:string
    :initform "")
   (position_type
    :reader position_type
    :initarg :position_type
    :type cl:string
    :initform "")
   (baseline_length
    :reader baseline_length
    :initarg :baseline_length
    :type cl:float
    :initform 0.0)
   (heading
    :reader heading
    :initarg :heading
    :type cl:float
    :initform 0.0)
   (pitch
    :reader pitch
    :initarg :pitch
    :type cl:float
    :initform 0.0)
   (heading_sigma
    :reader heading_sigma
    :initarg :heading_sigma
    :type cl:float
    :initform 0.0)
   (pitch_sigma
    :reader pitch_sigma
    :initarg :pitch_sigma
    :type cl:float
    :initform 0.0)
   (station_id
    :reader station_id
    :initarg :station_id
    :type cl:string
    :initform "")
   (num_satellites_tracked
    :reader num_satellites_tracked
    :initarg :num_satellites_tracked
    :type cl:fixnum
    :initform 0)
   (num_satellites_used_in_solution
    :reader num_satellites_used_in_solution
    :initarg :num_satellites_used_in_solution
    :type cl:fixnum
    :initform 0)
   (num_satellites_above_elevation_mask_angle
    :reader num_satellites_above_elevation_mask_angle
    :initarg :num_satellites_above_elevation_mask_angle
    :type cl:fixnum
    :initform 0)
   (num_satellites_above_elevation_mask_angle_l2
    :reader num_satellites_above_elevation_mask_angle_l2
    :initarg :num_satellites_above_elevation_mask_angle_l2
    :type cl:fixnum
    :initform 0)
   (solution_source
    :reader solution_source
    :initarg :solution_source
    :type cl:fixnum
    :initform 0)
   (extended_solution_status
    :reader extended_solution_status
    :initarg :extended_solution_status
    :type novatel_gps_msgs-msg:NovatelExtendedSolutionStatus
    :initform (cl:make-instance 'novatel_gps_msgs-msg:NovatelExtendedSolutionStatus))
   (signal_mask
    :reader signal_mask
    :initarg :signal_mask
    :type novatel_gps_msgs-msg:NovatelSignalMask
    :initform (cl:make-instance 'novatel_gps_msgs-msg:NovatelSignalMask)))
)

(cl:defclass NovatelDualAntennaHeading (<NovatelDualAntennaHeading>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <NovatelDualAntennaHeading>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'NovatelDualAntennaHeading)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name novatel_gps_msgs-msg:<NovatelDualAntennaHeading> is deprecated: use novatel_gps_msgs-msg:NovatelDualAntennaHeading instead.")))

(cl:ensure-generic-function 'header-val :lambda-list '(m))
(cl:defmethod header-val ((m <NovatelDualAntennaHeading>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader novatel_gps_msgs-msg:header-val is deprecated.  Use novatel_gps_msgs-msg:header instead.")
  (header m))

(cl:ensure-generic-function 'novatel_msg_header-val :lambda-list '(m))
(cl:defmethod novatel_msg_header-val ((m <NovatelDualAntennaHeading>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader novatel_gps_msgs-msg:novatel_msg_header-val is deprecated.  Use novatel_gps_msgs-msg:novatel_msg_header instead.")
  (novatel_msg_header m))

(cl:ensure-generic-function 'solution_status-val :lambda-list '(m))
(cl:defmethod solution_status-val ((m <NovatelDualAntennaHeading>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader novatel_gps_msgs-msg:solution_status-val is deprecated.  Use novatel_gps_msgs-msg:solution_status instead.")
  (solution_status m))

(cl:ensure-generic-function 'position_type-val :lambda-list '(m))
(cl:defmethod position_type-val ((m <NovatelDualAntennaHeading>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader novatel_gps_msgs-msg:position_type-val is deprecated.  Use novatel_gps_msgs-msg:position_type instead.")
  (position_type m))

(cl:ensure-generic-function 'baseline_length-val :lambda-list '(m))
(cl:defmethod baseline_length-val ((m <NovatelDualAntennaHeading>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader novatel_gps_msgs-msg:baseline_length-val is deprecated.  Use novatel_gps_msgs-msg:baseline_length instead.")
  (baseline_length m))

(cl:ensure-generic-function 'heading-val :lambda-list '(m))
(cl:defmethod heading-val ((m <NovatelDualAntennaHeading>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader novatel_gps_msgs-msg:heading-val is deprecated.  Use novatel_gps_msgs-msg:heading instead.")
  (heading m))

(cl:ensure-generic-function 'pitch-val :lambda-list '(m))
(cl:defmethod pitch-val ((m <NovatelDualAntennaHeading>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader novatel_gps_msgs-msg:pitch-val is deprecated.  Use novatel_gps_msgs-msg:pitch instead.")
  (pitch m))

(cl:ensure-generic-function 'heading_sigma-val :lambda-list '(m))
(cl:defmethod heading_sigma-val ((m <NovatelDualAntennaHeading>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader novatel_gps_msgs-msg:heading_sigma-val is deprecated.  Use novatel_gps_msgs-msg:heading_sigma instead.")
  (heading_sigma m))

(cl:ensure-generic-function 'pitch_sigma-val :lambda-list '(m))
(cl:defmethod pitch_sigma-val ((m <NovatelDualAntennaHeading>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader novatel_gps_msgs-msg:pitch_sigma-val is deprecated.  Use novatel_gps_msgs-msg:pitch_sigma instead.")
  (pitch_sigma m))

(cl:ensure-generic-function 'station_id-val :lambda-list '(m))
(cl:defmethod station_id-val ((m <NovatelDualAntennaHeading>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader novatel_gps_msgs-msg:station_id-val is deprecated.  Use novatel_gps_msgs-msg:station_id instead.")
  (station_id m))

(cl:ensure-generic-function 'num_satellites_tracked-val :lambda-list '(m))
(cl:defmethod num_satellites_tracked-val ((m <NovatelDualAntennaHeading>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader novatel_gps_msgs-msg:num_satellites_tracked-val is deprecated.  Use novatel_gps_msgs-msg:num_satellites_tracked instead.")
  (num_satellites_tracked m))

(cl:ensure-generic-function 'num_satellites_used_in_solution-val :lambda-list '(m))
(cl:defmethod num_satellites_used_in_solution-val ((m <NovatelDualAntennaHeading>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader novatel_gps_msgs-msg:num_satellites_used_in_solution-val is deprecated.  Use novatel_gps_msgs-msg:num_satellites_used_in_solution instead.")
  (num_satellites_used_in_solution m))

(cl:ensure-generic-function 'num_satellites_above_elevation_mask_angle-val :lambda-list '(m))
(cl:defmethod num_satellites_above_elevation_mask_angle-val ((m <NovatelDualAntennaHeading>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader novatel_gps_msgs-msg:num_satellites_above_elevation_mask_angle-val is deprecated.  Use novatel_gps_msgs-msg:num_satellites_above_elevation_mask_angle instead.")
  (num_satellites_above_elevation_mask_angle m))

(cl:ensure-generic-function 'num_satellites_above_elevation_mask_angle_l2-val :lambda-list '(m))
(cl:defmethod num_satellites_above_elevation_mask_angle_l2-val ((m <NovatelDualAntennaHeading>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader novatel_gps_msgs-msg:num_satellites_above_elevation_mask_angle_l2-val is deprecated.  Use novatel_gps_msgs-msg:num_satellites_above_elevation_mask_angle_l2 instead.")
  (num_satellites_above_elevation_mask_angle_l2 m))

(cl:ensure-generic-function 'solution_source-val :lambda-list '(m))
(cl:defmethod solution_source-val ((m <NovatelDualAntennaHeading>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader novatel_gps_msgs-msg:solution_source-val is deprecated.  Use novatel_gps_msgs-msg:solution_source instead.")
  (solution_source m))

(cl:ensure-generic-function 'extended_solution_status-val :lambda-list '(m))
(cl:defmethod extended_solution_status-val ((m <NovatelDualAntennaHeading>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader novatel_gps_msgs-msg:extended_solution_status-val is deprecated.  Use novatel_gps_msgs-msg:extended_solution_status instead.")
  (extended_solution_status m))

(cl:ensure-generic-function 'signal_mask-val :lambda-list '(m))
(cl:defmethod signal_mask-val ((m <NovatelDualAntennaHeading>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader novatel_gps_msgs-msg:signal_mask-val is deprecated.  Use novatel_gps_msgs-msg:signal_mask instead.")
  (signal_mask m))
(cl:defmethod roslisp-msg-protocol:symbol-codes ((msg-type (cl:eql '<NovatelDualAntennaHeading>)))
    "Constants for message type '<NovatelDualAntennaHeading>"
  '((:SOURCE_PRIMARY_ANTENNA . 0)
    (:SOURCE_SECONDARY_ANTENNA . 1))
)
(cl:defmethod roslisp-msg-protocol:symbol-codes ((msg-type (cl:eql 'NovatelDualAntennaHeading)))
    "Constants for message type 'NovatelDualAntennaHeading"
  '((:SOURCE_PRIMARY_ANTENNA . 0)
    (:SOURCE_SECONDARY_ANTENNA . 1))
)
(cl:defmethod roslisp-msg-protocol:serialize ((msg <NovatelDualAntennaHeading>) ostream)
  "Serializes a message object of type '<NovatelDualAntennaHeading>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'header) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'novatel_msg_header) ostream)
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'solution_status))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'solution_status))
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'position_type))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'position_type))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'baseline_length))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'heading))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'pitch))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'heading_sigma))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'pitch_sigma))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'station_id))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'station_id))
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'num_satellites_tracked)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'num_satellites_used_in_solution)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'num_satellites_above_elevation_mask_angle)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'num_satellites_above_elevation_mask_angle_l2)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'solution_source)) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'extended_solution_status) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'signal_mask) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <NovatelDualAntennaHeading>) istream)
  "Deserializes a message object of type '<NovatelDualAntennaHeading>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'header) istream)
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'novatel_msg_header) istream)
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'solution_status) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'solution_status) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'position_type) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'position_type) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'baseline_length) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'heading) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'pitch) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'heading_sigma) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'pitch_sigma) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'station_id) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'station_id) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'num_satellites_tracked)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'num_satellites_used_in_solution)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'num_satellites_above_elevation_mask_angle)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'num_satellites_above_elevation_mask_angle_l2)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'solution_source)) (cl:read-byte istream))
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'extended_solution_status) istream)
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'signal_mask) istream)
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<NovatelDualAntennaHeading>)))
  "Returns string type for a message object of type '<NovatelDualAntennaHeading>"
  "novatel_gps_msgs/NovatelDualAntennaHeading")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'NovatelDualAntennaHeading)))
  "Returns string type for a message object of type 'NovatelDualAntennaHeading"
  "novatel_gps_msgs/NovatelDualAntennaHeading")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<NovatelDualAntennaHeading>)))
  "Returns md5sum for a message object of type '<NovatelDualAntennaHeading>"
  "9e80eaa83bf25f057aea59ce70d859e5")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'NovatelDualAntennaHeading)))
  "Returns md5sum for a message object of type 'NovatelDualAntennaHeading"
  "9e80eaa83bf25f057aea59ce70d859e5")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<NovatelDualAntennaHeading>)))
  "Returns full string definition for message of type '<NovatelDualAntennaHeading>"
  (cl:format cl:nil "# Parsed Heading East of North from Novatel receiver. Only ALIGN capable recievers can publish this~%Header header~%~%NovatelMessageHeader novatel_msg_header~%~%# Solution Status~%string solution_status~%string position_type~%~%# Baseline length (m)~%float32 baseline_length~%~%# Heading in degrees [0,360)~%float32 heading~%~%# Pitch in degrees +- 90~%float32 pitch~%~%# Orientation Standard Deviations (deg)~%float32 heading_sigma~%float32 pitch_sigma~%~%# Station ids~%string station_id~%~%# Satellite Usage~%uint8 num_satellites_tracked~%uint8 num_satellites_used_in_solution~%uint8 num_satellites_above_elevation_mask_angle~%uint8 num_satellites_above_elevation_mask_angle_l2~%~%# Enum for solution source~%uint8 solution_source~%~%uint8 SOURCE_PRIMARY_ANTENNA=0~%uint8 SOURCE_SECONDARY_ANTENNA=1~%~%# Extended Solution Status~%NovatelExtendedSolutionStatus extended_solution_status~%~%# Signal Masks~%NovatelSignalMask signal_mask~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%string frame_id~%~%================================================================================~%MSG: novatel_gps_msgs/NovatelMessageHeader~%# Novatel Message Header~%~%string message_name~%string port~%uint32 sequence_num~%float32 percent_idle_time~%string gps_time_status~%uint32 gps_week_num~%float64 gps_seconds~%~%# Bit       Mask      Description~%#  0     0x00000001   Error flag (Bit = 0: No Error, Bit = 1: Error)~%#  1     0x00000002   Temperature Status (0: Within Spec, 1: Warning)~%#  2     0x00000004   Voltage Supply Status (0: OK, 1: Warning)~%#  3     0x00000008   Antenna Power Status (0: Powered, 1: Not Powered)~%#  4     0x00000010   <Reserved>~%#  5     0x00000020   Antenna open flag (0: OK, 1: Open)~%#  6     0x00000040   Antenna shorted flag (0: OK, 1: Shorted)~%#  7     0x00000080   CPU overload flag~%#  8     0x00000100   COM1 buffer overrun flag (0: No overrun, 1: Overrun)~%#  9     0x00000200   COM2 buffer overrun flag (0: No overrun, 1: Overrun)~%#  10    0x00000400   COM3 buffer overrun flag (0: No overrun, 1: Overrun)~%#  11    0x00000800   USB buffer overrun flag (0: No overrun, 1: Overrun)~%#  12    0x00001000   <Reserved>~%#  13    0x00002000   <Reserved>~%#  14    0x00004000   <Reserved>~%#  15    0x00008000   RF1 AGC Status (0: OK, 1: Bad)~%#  16    0x00010000   <Reserverd>~%#  17    0x00020000   RF2 AGC status (0: OK, 1: Bad)~%#  18    0x00040000   Almanac flag/UTC known (0: Valid, 1: Invalid)~%#  19    0x00080000   Position solution flag (0: Valid, 1: Invalid)~%#  20    0x00100000   Position fixed flag (0: Not fixed, 1: Fixed)~%#  21    0x00200000   Clock steering status (0: Enabled, 1: Disabled)~%#  22    0x00400000   Clock model flag (0: Valid, 1: Invalid)~%#  23    0x00800000   OEMV external oscillator flag (0: Disabled, 1: Enabled)~%#  24    0x01000000   Software resource (0: OK, 1: Warning)~%#  25    0x02000000   <Reserved>~%#  26    0x04000000   <Reserved>~%#  27    0x08000000   <Reserved>~%#  28    0x10000000   <Reserved>~%#  29    0x20000000   Auxiliary 3 status event flag (0: No event, 1: Event)~%#  30    0x40000000   Auxiliary 2 status event flag (0: No event, 1: Event)~%#  31    0x80000000   Auxiliary 1 status event flag (0: No event, 1: Event)~%NovatelReceiverStatus receiver_status~%~%# Receiver build number (0-65535)~%uint32 receiver_software_version~%================================================================================~%MSG: novatel_gps_msgs/NovatelReceiverStatus~%# From the original Novatel receiver status message bitfield~%#  0     0x00000001   Error flag (Bit = 0: No Error, Bit = 1: Error)~%#  1     0x00000002   Temperature Status (0: Within Spec, 1: Warning)~%#  2     0x00000004   Voltage Supply Status (0: OK, 1: Warning)~%#  3     0x00000008   Antenna Power Status (0: Powered, 1: Not Powered)~%#  4     0x00000010   <Reserved>~%#  5     0x00000020   Antenna open flag (0: OK, 1: Open)~%#  6     0x00000040   Antenna shorted flag (0: OK, 1: Shorted)~%#  7     0x00000080   CPU overload flag~%#  8     0x00000100   COM1 buffer overrun flag (0: No overrun, 1: Overrun)~%#  9     0x00000200   COM2 buffer overrun flag (0: No overrun, 1: Overrun)~%#  10    0x00000400   COM3 buffer overrun flag (0: No overrun, 1: Overrun)~%#  11    0x00000800   USB buffer overrun flag (0: No overrun, 1: Overrun)~%#  12    0x00001000   <Reserved>~%#  13    0x00002000   <Reserved>~%#  14    0x00004000   <Reserved>~%#  15    0x00008000   RF1 AGC Status (0: OK, 1: Bad)~%#  16    0x00010000   <Reserverd>~%#  17    0x00020000   RF2 AGC status (0: OK, 1: Bad)~%#  18    0x00040000   Almanac flag/UTC known (0: Valid, 1: Invalid)~%#  19    0x00080000   Position solution flag (0: Valid, 1: Invalid)~%#  20    0x00100000   Position fixed flag (0: Not fixed, 1: Fixed)~%#  21    0x00200000   Clock steering status (0: Enabled, 1: Disabled)~%#  22    0x00400000   Clock model flag (0: Valid, 1: Invalid)~%#  23    0x00800000   OEMV external oscillator flag (0: Disabled, 1: Enabled)~%#  24    0x01000000   Software resource (0: OK, 1: Warning)~%#  25    0x02000000   <Reserved>~%#  26    0x04000000   <Reserved>~%#  27    0x08000000   <Reserved>~%#  28    0x10000000   <Reserved>~%#  29    0x20000000   Auxiliary 3 status event flag (0: No event, 1: Event)~%#  30    0x40000000   Auxiliary 2 status event flag (0: No event, 1: Event)~%#  31    0x80000000   Auxiliary 1 status event flag (0: No event, 1: Event)~%uint32 original_status_code~%bool error_flag~%bool temperature_flag~%bool voltage_supply_flag~%bool antenna_powered~%bool antenna_is_open~%bool antenna_is_shorted~%bool cpu_overload_flag~%bool com1_buffer_overrun~%bool com2_buffer_overrun~%bool com3_buffer_overrun~%bool usb_buffer_overrun~%bool rf1_agc_flag~%bool rf2_agc_flag~%bool almanac_flag~%bool position_solution_flag~%bool position_fixed_flag~%bool clock_steering_status_enabled~%bool clock_model_flag~%bool oemv_external_oscillator_flag~%bool software_resource_flag~%bool aux1_status_event_flag~%bool aux2_status_event_flag~%bool aux3_status_event_flag~%~%~%================================================================================~%MSG: novatel_gps_msgs/NovatelExtendedSolutionStatus~%# Bit    Mask      Description~%#  0     0x01      Advance RTK verified (0 = not verified, 1 = verified)~%# 1-3    0x0E      Pseudorange Ionosphere Correction~%#                    0 = unknown~%#                    1 = Klobuchar Broadcast~%#                    2 = SBAS Broadcast~%#                    3 = Multi-frequency Computed~%#                    4 = PSRDiff Correction~%#                    5 = NovaTel Blended Ionosphere Value~%# 4-7  0xF0        <Reserved>~%uint32 original_mask~%bool advance_rtk_verified~%string psuedorange_iono_correction~%~%================================================================================~%MSG: novatel_gps_msgs/NovatelSignalMask~%# Bit    Mask      Description~%#  0     0x01      GPS L1 used in Solution~%#  1     0x02      GPS L2 used in Solution~%#  2     0x04      GPS L5 used in Solution~%#  3     0x08      <Reserved>~%#  4     0x10      GLONASS L1 used in Solution~%#  5     0x20      GLONASS L2 used in Solution~%# 6-7  0x40-0x80   <Reserved>~%uint32 original_mask~%bool gps_L1_used_in_solution~%bool gps_L2_used_in_solution~%bool gps_L3_used_in_solution~%bool glonass_L1_used_in_solution~%bool glonass_L2_used_in_solution~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'NovatelDualAntennaHeading)))
  "Returns full string definition for message of type 'NovatelDualAntennaHeading"
  (cl:format cl:nil "# Parsed Heading East of North from Novatel receiver. Only ALIGN capable recievers can publish this~%Header header~%~%NovatelMessageHeader novatel_msg_header~%~%# Solution Status~%string solution_status~%string position_type~%~%# Baseline length (m)~%float32 baseline_length~%~%# Heading in degrees [0,360)~%float32 heading~%~%# Pitch in degrees +- 90~%float32 pitch~%~%# Orientation Standard Deviations (deg)~%float32 heading_sigma~%float32 pitch_sigma~%~%# Station ids~%string station_id~%~%# Satellite Usage~%uint8 num_satellites_tracked~%uint8 num_satellites_used_in_solution~%uint8 num_satellites_above_elevation_mask_angle~%uint8 num_satellites_above_elevation_mask_angle_l2~%~%# Enum for solution source~%uint8 solution_source~%~%uint8 SOURCE_PRIMARY_ANTENNA=0~%uint8 SOURCE_SECONDARY_ANTENNA=1~%~%# Extended Solution Status~%NovatelExtendedSolutionStatus extended_solution_status~%~%# Signal Masks~%NovatelSignalMask signal_mask~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%string frame_id~%~%================================================================================~%MSG: novatel_gps_msgs/NovatelMessageHeader~%# Novatel Message Header~%~%string message_name~%string port~%uint32 sequence_num~%float32 percent_idle_time~%string gps_time_status~%uint32 gps_week_num~%float64 gps_seconds~%~%# Bit       Mask      Description~%#  0     0x00000001   Error flag (Bit = 0: No Error, Bit = 1: Error)~%#  1     0x00000002   Temperature Status (0: Within Spec, 1: Warning)~%#  2     0x00000004   Voltage Supply Status (0: OK, 1: Warning)~%#  3     0x00000008   Antenna Power Status (0: Powered, 1: Not Powered)~%#  4     0x00000010   <Reserved>~%#  5     0x00000020   Antenna open flag (0: OK, 1: Open)~%#  6     0x00000040   Antenna shorted flag (0: OK, 1: Shorted)~%#  7     0x00000080   CPU overload flag~%#  8     0x00000100   COM1 buffer overrun flag (0: No overrun, 1: Overrun)~%#  9     0x00000200   COM2 buffer overrun flag (0: No overrun, 1: Overrun)~%#  10    0x00000400   COM3 buffer overrun flag (0: No overrun, 1: Overrun)~%#  11    0x00000800   USB buffer overrun flag (0: No overrun, 1: Overrun)~%#  12    0x00001000   <Reserved>~%#  13    0x00002000   <Reserved>~%#  14    0x00004000   <Reserved>~%#  15    0x00008000   RF1 AGC Status (0: OK, 1: Bad)~%#  16    0x00010000   <Reserverd>~%#  17    0x00020000   RF2 AGC status (0: OK, 1: Bad)~%#  18    0x00040000   Almanac flag/UTC known (0: Valid, 1: Invalid)~%#  19    0x00080000   Position solution flag (0: Valid, 1: Invalid)~%#  20    0x00100000   Position fixed flag (0: Not fixed, 1: Fixed)~%#  21    0x00200000   Clock steering status (0: Enabled, 1: Disabled)~%#  22    0x00400000   Clock model flag (0: Valid, 1: Invalid)~%#  23    0x00800000   OEMV external oscillator flag (0: Disabled, 1: Enabled)~%#  24    0x01000000   Software resource (0: OK, 1: Warning)~%#  25    0x02000000   <Reserved>~%#  26    0x04000000   <Reserved>~%#  27    0x08000000   <Reserved>~%#  28    0x10000000   <Reserved>~%#  29    0x20000000   Auxiliary 3 status event flag (0: No event, 1: Event)~%#  30    0x40000000   Auxiliary 2 status event flag (0: No event, 1: Event)~%#  31    0x80000000   Auxiliary 1 status event flag (0: No event, 1: Event)~%NovatelReceiverStatus receiver_status~%~%# Receiver build number (0-65535)~%uint32 receiver_software_version~%================================================================================~%MSG: novatel_gps_msgs/NovatelReceiverStatus~%# From the original Novatel receiver status message bitfield~%#  0     0x00000001   Error flag (Bit = 0: No Error, Bit = 1: Error)~%#  1     0x00000002   Temperature Status (0: Within Spec, 1: Warning)~%#  2     0x00000004   Voltage Supply Status (0: OK, 1: Warning)~%#  3     0x00000008   Antenna Power Status (0: Powered, 1: Not Powered)~%#  4     0x00000010   <Reserved>~%#  5     0x00000020   Antenna open flag (0: OK, 1: Open)~%#  6     0x00000040   Antenna shorted flag (0: OK, 1: Shorted)~%#  7     0x00000080   CPU overload flag~%#  8     0x00000100   COM1 buffer overrun flag (0: No overrun, 1: Overrun)~%#  9     0x00000200   COM2 buffer overrun flag (0: No overrun, 1: Overrun)~%#  10    0x00000400   COM3 buffer overrun flag (0: No overrun, 1: Overrun)~%#  11    0x00000800   USB buffer overrun flag (0: No overrun, 1: Overrun)~%#  12    0x00001000   <Reserved>~%#  13    0x00002000   <Reserved>~%#  14    0x00004000   <Reserved>~%#  15    0x00008000   RF1 AGC Status (0: OK, 1: Bad)~%#  16    0x00010000   <Reserverd>~%#  17    0x00020000   RF2 AGC status (0: OK, 1: Bad)~%#  18    0x00040000   Almanac flag/UTC known (0: Valid, 1: Invalid)~%#  19    0x00080000   Position solution flag (0: Valid, 1: Invalid)~%#  20    0x00100000   Position fixed flag (0: Not fixed, 1: Fixed)~%#  21    0x00200000   Clock steering status (0: Enabled, 1: Disabled)~%#  22    0x00400000   Clock model flag (0: Valid, 1: Invalid)~%#  23    0x00800000   OEMV external oscillator flag (0: Disabled, 1: Enabled)~%#  24    0x01000000   Software resource (0: OK, 1: Warning)~%#  25    0x02000000   <Reserved>~%#  26    0x04000000   <Reserved>~%#  27    0x08000000   <Reserved>~%#  28    0x10000000   <Reserved>~%#  29    0x20000000   Auxiliary 3 status event flag (0: No event, 1: Event)~%#  30    0x40000000   Auxiliary 2 status event flag (0: No event, 1: Event)~%#  31    0x80000000   Auxiliary 1 status event flag (0: No event, 1: Event)~%uint32 original_status_code~%bool error_flag~%bool temperature_flag~%bool voltage_supply_flag~%bool antenna_powered~%bool antenna_is_open~%bool antenna_is_shorted~%bool cpu_overload_flag~%bool com1_buffer_overrun~%bool com2_buffer_overrun~%bool com3_buffer_overrun~%bool usb_buffer_overrun~%bool rf1_agc_flag~%bool rf2_agc_flag~%bool almanac_flag~%bool position_solution_flag~%bool position_fixed_flag~%bool clock_steering_status_enabled~%bool clock_model_flag~%bool oemv_external_oscillator_flag~%bool software_resource_flag~%bool aux1_status_event_flag~%bool aux2_status_event_flag~%bool aux3_status_event_flag~%~%~%================================================================================~%MSG: novatel_gps_msgs/NovatelExtendedSolutionStatus~%# Bit    Mask      Description~%#  0     0x01      Advance RTK verified (0 = not verified, 1 = verified)~%# 1-3    0x0E      Pseudorange Ionosphere Correction~%#                    0 = unknown~%#                    1 = Klobuchar Broadcast~%#                    2 = SBAS Broadcast~%#                    3 = Multi-frequency Computed~%#                    4 = PSRDiff Correction~%#                    5 = NovaTel Blended Ionosphere Value~%# 4-7  0xF0        <Reserved>~%uint32 original_mask~%bool advance_rtk_verified~%string psuedorange_iono_correction~%~%================================================================================~%MSG: novatel_gps_msgs/NovatelSignalMask~%# Bit    Mask      Description~%#  0     0x01      GPS L1 used in Solution~%#  1     0x02      GPS L2 used in Solution~%#  2     0x04      GPS L5 used in Solution~%#  3     0x08      <Reserved>~%#  4     0x10      GLONASS L1 used in Solution~%#  5     0x20      GLONASS L2 used in Solution~%# 6-7  0x40-0x80   <Reserved>~%uint32 original_mask~%bool gps_L1_used_in_solution~%bool gps_L2_used_in_solution~%bool gps_L3_used_in_solution~%bool glonass_L1_used_in_solution~%bool glonass_L2_used_in_solution~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <NovatelDualAntennaHeading>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'header))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'novatel_msg_header))
     4 (cl:length (cl:slot-value msg 'solution_status))
     4 (cl:length (cl:slot-value msg 'position_type))
     4
     4
     4
     4
     4
     4 (cl:length (cl:slot-value msg 'station_id))
     1
     1
     1
     1
     1
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'extended_solution_status))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'signal_mask))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <NovatelDualAntennaHeading>))
  "Converts a ROS message object to a list"
  (cl:list 'NovatelDualAntennaHeading
    (cl:cons ':header (header msg))
    (cl:cons ':novatel_msg_header (novatel_msg_header msg))
    (cl:cons ':solution_status (solution_status msg))
    (cl:cons ':position_type (position_type msg))
    (cl:cons ':baseline_length (baseline_length msg))
    (cl:cons ':heading (heading msg))
    (cl:cons ':pitch (pitch msg))
    (cl:cons ':heading_sigma (heading_sigma msg))
    (cl:cons ':pitch_sigma (pitch_sigma msg))
    (cl:cons ':station_id (station_id msg))
    (cl:cons ':num_satellites_tracked (num_satellites_tracked msg))
    (cl:cons ':num_satellites_used_in_solution (num_satellites_used_in_solution msg))
    (cl:cons ':num_satellites_above_elevation_mask_angle (num_satellites_above_elevation_mask_angle msg))
    (cl:cons ':num_satellites_above_elevation_mask_angle_l2 (num_satellites_above_elevation_mask_angle_l2 msg))
    (cl:cons ':solution_source (solution_source msg))
    (cl:cons ':extended_solution_status (extended_solution_status msg))
    (cl:cons ':signal_mask (signal_mask msg))
))

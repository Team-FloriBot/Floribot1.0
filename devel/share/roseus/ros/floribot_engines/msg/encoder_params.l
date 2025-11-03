;; Auto-generated. Do not edit!


(when (boundp 'floribot_engines::encoder_params)
  (if (not (find-package "FLORIBOT_ENGINES"))
    (make-package "FLORIBOT_ENGINES"))
  (shadow 'encoder_params (find-package "FLORIBOT_ENGINES")))
(unless (find-package "FLORIBOT_ENGINES::ENCODER_PARAMS")
  (make-package "FLORIBOT_ENGINES::ENCODER_PARAMS"))

(in-package "ROS")
;;//! \htmlinclude encoder_params.msg.html
(if (not (find-package "STD_MSGS"))
  (ros::roseus-add-msgs "std_msgs"))


(defclass floribot_engines::encoder_params
  :super ros::object
  :slots (_header _index _count _count_change _time ))

(defmethod floribot_engines::encoder_params
  (:init
   (&key
    ((:header __header) (instance std_msgs::Header :init))
    ((:index __index) 0)
    ((:count __count) 0)
    ((:count_change __count_change) 0)
    ((:time __time) 0)
    )
   (send-super :init)
   (setq _header __header)
   (setq _index (round __index))
   (setq _count (round __count))
   (setq _count_change (round __count_change))
   (setq _time (round __time))
   self)
  (:header
   (&rest __header)
   (if (keywordp (car __header))
       (send* _header __header)
     (progn
       (if __header (setq _header (car __header)))
       _header)))
  (:index
   (&optional __index)
   (if __index (setq _index __index)) _index)
  (:count
   (&optional __count)
   (if __count (setq _count __count)) _count)
  (:count_change
   (&optional __count_change)
   (if __count_change (setq _count_change __count_change)) _count_change)
  (:time
   (&optional __time)
   (if __time (setq _time __time)) _time)
  (:serialization-length
   ()
   (+
    ;; std_msgs/Header _header
    (send _header :serialization-length)
    ;; int32 _index
    4
    ;; int32 _count
    4
    ;; int32 _count_change
    4
    ;; int32 _time
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; std_msgs/Header _header
       (send _header :serialize s)
     ;; int32 _index
       (write-long _index s)
     ;; int32 _count
       (write-long _count s)
     ;; int32 _count_change
       (write-long _count_change s)
     ;; int32 _time
       (write-long _time s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; std_msgs/Header _header
     (send _header :deserialize buf ptr-) (incf ptr- (send _header :serialization-length))
   ;; int32 _index
     (setq _index (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;; int32 _count
     (setq _count (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;; int32 _count_change
     (setq _count_change (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;; int32 _time
     (setq _time (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;;
   self)
  )

(setf (get floribot_engines::encoder_params :md5sum-) "cdd1a63f64eb1a145c6b4f3cd6e0681b")
(setf (get floribot_engines::encoder_params :datatype-) "floribot_engines/encoder_params")
(setf (get floribot_engines::encoder_params :definition-)
      "Header header
int32 index
int32 count
int32 count_change
int32 time

================================================================================
MSG: std_msgs/Header
# Standard metadata for higher-level stamped data types.
# This is generally used to communicate timestamped data 
# in a particular coordinate frame.
# 
# sequence ID: consecutively increasing ID 
uint32 seq
#Two-integer timestamp that is expressed as:
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
# time-handling sugar is provided by the client library
time stamp
#Frame this data is associated with
string frame_id

")



(provide :floribot_engines/encoder_params "cdd1a63f64eb1a145c6b4f3cd6e0681b")



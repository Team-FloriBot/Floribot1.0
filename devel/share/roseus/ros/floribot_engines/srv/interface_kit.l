;; Auto-generated. Do not edit!


(when (boundp 'floribot_engines::interface_kit)
  (if (not (find-package "FLORIBOT_ENGINES"))
    (make-package "FLORIBOT_ENGINES"))
  (shadow 'interface_kit (find-package "FLORIBOT_ENGINES")))
(unless (find-package "FLORIBOT_ENGINES::INTERFACE_KIT")
  (make-package "FLORIBOT_ENGINES::INTERFACE_KIT"))
(unless (find-package "FLORIBOT_ENGINES::INTERFACE_KITREQUEST")
  (make-package "FLORIBOT_ENGINES::INTERFACE_KITREQUEST"))
(unless (find-package "FLORIBOT_ENGINES::INTERFACE_KITRESPONSE")
  (make-package "FLORIBOT_ENGINES::INTERFACE_KITRESPONSE"))

(in-package "ROS")





(defclass floribot_engines::interface_kitRequest
  :super ros::object
  :slots (_index _value_type _value ))

(defmethod floribot_engines::interface_kitRequest
  (:init
   (&key
    ((:index __index) 0)
    ((:value_type __value_type) 0)
    ((:value __value) 0)
    )
   (send-super :init)
   (setq _index (round __index))
   (setq _value_type (round __value_type))
   (setq _value (round __value))
   self)
  (:index
   (&optional __index)
   (if __index (setq _index __index)) _index)
  (:value_type
   (&optional __value_type)
   (if __value_type (setq _value_type __value_type)) _value_type)
  (:value
   (&optional __value)
   (if __value (setq _value __value)) _value)
  (:serialization-length
   ()
   (+
    ;; int32 _index
    4
    ;; int32 _value_type
    4
    ;; int32 _value
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; int32 _index
       (write-long _index s)
     ;; int32 _value_type
       (write-long _value_type s)
     ;; int32 _value
       (write-long _value s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; int32 _index
     (setq _index (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;; int32 _value_type
     (setq _value_type (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;; int32 _value
     (setq _value (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;;
   self)
  )

(defclass floribot_engines::interface_kitResponse
  :super ros::object
  :slots (_ack ))

(defmethod floribot_engines::interface_kitResponse
  (:init
   (&key
    ((:ack __ack) 0)
    )
   (send-super :init)
   (setq _ack (round __ack))
   self)
  (:ack
   (&optional __ack)
   (if __ack (setq _ack __ack)) _ack)
  (:serialization-length
   ()
   (+
    ;; int32 _ack
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; int32 _ack
       (write-long _ack s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; int32 _ack
     (setq _ack (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;;
   self)
  )

(defclass floribot_engines::interface_kit
  :super ros::object
  :slots ())

(setf (get floribot_engines::interface_kit :md5sum-) "75cbd2a6abfcf442181c14de3598b662")
(setf (get floribot_engines::interface_kit :datatype-) "floribot_engines/interface_kit")
(setf (get floribot_engines::interface_kit :request) floribot_engines::interface_kitRequest)
(setf (get floribot_engines::interface_kit :response) floribot_engines::interface_kitResponse)

(defmethod floribot_engines::interface_kitRequest
  (:response () (instance floribot_engines::interface_kitResponse :init)))

(setf (get floribot_engines::interface_kitRequest :md5sum-) "75cbd2a6abfcf442181c14de3598b662")
(setf (get floribot_engines::interface_kitRequest :datatype-) "floribot_engines/interface_kitRequest")
(setf (get floribot_engines::interface_kitRequest :definition-)
      "int32 index
int32 value_type
int32 value
---
int32 ack

")

(setf (get floribot_engines::interface_kitResponse :md5sum-) "75cbd2a6abfcf442181c14de3598b662")
(setf (get floribot_engines::interface_kitResponse :datatype-) "floribot_engines/interface_kitResponse")
(setf (get floribot_engines::interface_kitResponse :definition-)
      "int32 index
int32 value_type
int32 value
---
int32 ack

")



(provide :floribot_engines/interface_kit "75cbd2a6abfcf442181c14de3598b662")



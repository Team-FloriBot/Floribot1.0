
(cl:in-package :asdf)

(defsystem "floribot_engines-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils :std_msgs-msg
)
  :components ((:file "_package")
    (:file "encoder_params" :depends-on ("_package_encoder_params"))
    (:file "_package_encoder_params" :depends-on ("_package"))
    (:file "interface_kit_params" :depends-on ("_package_interface_kit_params"))
    (:file "_package_interface_kit_params" :depends-on ("_package"))
  ))
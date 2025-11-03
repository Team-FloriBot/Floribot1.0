
(cl:in-package :asdf)

(defsystem "floribot_engines-srv"
  :depends-on (:roslisp-msg-protocol :roslisp-utils )
  :components ((:file "_package")
    (:file "interface_kit" :depends-on ("_package_interface_kit"))
    (:file "_package_interface_kit" :depends-on ("_package"))
  ))
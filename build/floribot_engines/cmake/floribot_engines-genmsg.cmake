# generated from genmsg/cmake/pkg-genmsg.cmake.em

message(STATUS "floribot_engines: 2 messages, 1 services")

set(MSG_I_FLAGS "-Ifloribot_engines:/home/user/floribot_ws/src/floribot_engines/msg;-Istd_msgs:/opt/ros/noetic/share/std_msgs/cmake/../msg")

# Find all generators
find_package(gencpp REQUIRED)
find_package(geneus REQUIRED)
find_package(genlisp REQUIRED)
find_package(gennodejs REQUIRED)
find_package(genpy REQUIRED)

add_custom_target(floribot_engines_generate_messages ALL)

# verify that message/service dependencies have not changed since configure



get_filename_component(_filename "/home/user/floribot_ws/src/floribot_engines/msg/interface_kit_params.msg" NAME_WE)
add_custom_target(_floribot_engines_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "floribot_engines" "/home/user/floribot_ws/src/floribot_engines/msg/interface_kit_params.msg" "std_msgs/Header"
)

get_filename_component(_filename "/home/user/floribot_ws/src/floribot_engines/msg/encoder_params.msg" NAME_WE)
add_custom_target(_floribot_engines_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "floribot_engines" "/home/user/floribot_ws/src/floribot_engines/msg/encoder_params.msg" "std_msgs/Header"
)

get_filename_component(_filename "/home/user/floribot_ws/src/floribot_engines/srv/interface_kit.srv" NAME_WE)
add_custom_target(_floribot_engines_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "floribot_engines" "/home/user/floribot_ws/src/floribot_engines/srv/interface_kit.srv" ""
)

#
#  langs = gencpp;geneus;genlisp;gennodejs;genpy
#

### Section generating for lang: gencpp
### Generating Messages
_generate_msg_cpp(floribot_engines
  "/home/user/floribot_ws/src/floribot_engines/msg/interface_kit_params.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/floribot_engines
)
_generate_msg_cpp(floribot_engines
  "/home/user/floribot_ws/src/floribot_engines/msg/encoder_params.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/floribot_engines
)

### Generating Services
_generate_srv_cpp(floribot_engines
  "/home/user/floribot_ws/src/floribot_engines/srv/interface_kit.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/floribot_engines
)

### Generating Module File
_generate_module_cpp(floribot_engines
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/floribot_engines
  "${ALL_GEN_OUTPUT_FILES_cpp}"
)

add_custom_target(floribot_engines_generate_messages_cpp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_cpp}
)
add_dependencies(floribot_engines_generate_messages floribot_engines_generate_messages_cpp)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/user/floribot_ws/src/floribot_engines/msg/interface_kit_params.msg" NAME_WE)
add_dependencies(floribot_engines_generate_messages_cpp _floribot_engines_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/floribot_ws/src/floribot_engines/msg/encoder_params.msg" NAME_WE)
add_dependencies(floribot_engines_generate_messages_cpp _floribot_engines_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/floribot_ws/src/floribot_engines/srv/interface_kit.srv" NAME_WE)
add_dependencies(floribot_engines_generate_messages_cpp _floribot_engines_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(floribot_engines_gencpp)
add_dependencies(floribot_engines_gencpp floribot_engines_generate_messages_cpp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS floribot_engines_generate_messages_cpp)

### Section generating for lang: geneus
### Generating Messages
_generate_msg_eus(floribot_engines
  "/home/user/floribot_ws/src/floribot_engines/msg/interface_kit_params.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/floribot_engines
)
_generate_msg_eus(floribot_engines
  "/home/user/floribot_ws/src/floribot_engines/msg/encoder_params.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/floribot_engines
)

### Generating Services
_generate_srv_eus(floribot_engines
  "/home/user/floribot_ws/src/floribot_engines/srv/interface_kit.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/floribot_engines
)

### Generating Module File
_generate_module_eus(floribot_engines
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/floribot_engines
  "${ALL_GEN_OUTPUT_FILES_eus}"
)

add_custom_target(floribot_engines_generate_messages_eus
  DEPENDS ${ALL_GEN_OUTPUT_FILES_eus}
)
add_dependencies(floribot_engines_generate_messages floribot_engines_generate_messages_eus)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/user/floribot_ws/src/floribot_engines/msg/interface_kit_params.msg" NAME_WE)
add_dependencies(floribot_engines_generate_messages_eus _floribot_engines_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/floribot_ws/src/floribot_engines/msg/encoder_params.msg" NAME_WE)
add_dependencies(floribot_engines_generate_messages_eus _floribot_engines_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/floribot_ws/src/floribot_engines/srv/interface_kit.srv" NAME_WE)
add_dependencies(floribot_engines_generate_messages_eus _floribot_engines_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(floribot_engines_geneus)
add_dependencies(floribot_engines_geneus floribot_engines_generate_messages_eus)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS floribot_engines_generate_messages_eus)

### Section generating for lang: genlisp
### Generating Messages
_generate_msg_lisp(floribot_engines
  "/home/user/floribot_ws/src/floribot_engines/msg/interface_kit_params.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/floribot_engines
)
_generate_msg_lisp(floribot_engines
  "/home/user/floribot_ws/src/floribot_engines/msg/encoder_params.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/floribot_engines
)

### Generating Services
_generate_srv_lisp(floribot_engines
  "/home/user/floribot_ws/src/floribot_engines/srv/interface_kit.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/floribot_engines
)

### Generating Module File
_generate_module_lisp(floribot_engines
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/floribot_engines
  "${ALL_GEN_OUTPUT_FILES_lisp}"
)

add_custom_target(floribot_engines_generate_messages_lisp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_lisp}
)
add_dependencies(floribot_engines_generate_messages floribot_engines_generate_messages_lisp)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/user/floribot_ws/src/floribot_engines/msg/interface_kit_params.msg" NAME_WE)
add_dependencies(floribot_engines_generate_messages_lisp _floribot_engines_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/floribot_ws/src/floribot_engines/msg/encoder_params.msg" NAME_WE)
add_dependencies(floribot_engines_generate_messages_lisp _floribot_engines_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/floribot_ws/src/floribot_engines/srv/interface_kit.srv" NAME_WE)
add_dependencies(floribot_engines_generate_messages_lisp _floribot_engines_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(floribot_engines_genlisp)
add_dependencies(floribot_engines_genlisp floribot_engines_generate_messages_lisp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS floribot_engines_generate_messages_lisp)

### Section generating for lang: gennodejs
### Generating Messages
_generate_msg_nodejs(floribot_engines
  "/home/user/floribot_ws/src/floribot_engines/msg/interface_kit_params.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/floribot_engines
)
_generate_msg_nodejs(floribot_engines
  "/home/user/floribot_ws/src/floribot_engines/msg/encoder_params.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/floribot_engines
)

### Generating Services
_generate_srv_nodejs(floribot_engines
  "/home/user/floribot_ws/src/floribot_engines/srv/interface_kit.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/floribot_engines
)

### Generating Module File
_generate_module_nodejs(floribot_engines
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/floribot_engines
  "${ALL_GEN_OUTPUT_FILES_nodejs}"
)

add_custom_target(floribot_engines_generate_messages_nodejs
  DEPENDS ${ALL_GEN_OUTPUT_FILES_nodejs}
)
add_dependencies(floribot_engines_generate_messages floribot_engines_generate_messages_nodejs)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/user/floribot_ws/src/floribot_engines/msg/interface_kit_params.msg" NAME_WE)
add_dependencies(floribot_engines_generate_messages_nodejs _floribot_engines_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/floribot_ws/src/floribot_engines/msg/encoder_params.msg" NAME_WE)
add_dependencies(floribot_engines_generate_messages_nodejs _floribot_engines_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/floribot_ws/src/floribot_engines/srv/interface_kit.srv" NAME_WE)
add_dependencies(floribot_engines_generate_messages_nodejs _floribot_engines_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(floribot_engines_gennodejs)
add_dependencies(floribot_engines_gennodejs floribot_engines_generate_messages_nodejs)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS floribot_engines_generate_messages_nodejs)

### Section generating for lang: genpy
### Generating Messages
_generate_msg_py(floribot_engines
  "/home/user/floribot_ws/src/floribot_engines/msg/interface_kit_params.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/floribot_engines
)
_generate_msg_py(floribot_engines
  "/home/user/floribot_ws/src/floribot_engines/msg/encoder_params.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/floribot_engines
)

### Generating Services
_generate_srv_py(floribot_engines
  "/home/user/floribot_ws/src/floribot_engines/srv/interface_kit.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/floribot_engines
)

### Generating Module File
_generate_module_py(floribot_engines
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/floribot_engines
  "${ALL_GEN_OUTPUT_FILES_py}"
)

add_custom_target(floribot_engines_generate_messages_py
  DEPENDS ${ALL_GEN_OUTPUT_FILES_py}
)
add_dependencies(floribot_engines_generate_messages floribot_engines_generate_messages_py)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/user/floribot_ws/src/floribot_engines/msg/interface_kit_params.msg" NAME_WE)
add_dependencies(floribot_engines_generate_messages_py _floribot_engines_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/floribot_ws/src/floribot_engines/msg/encoder_params.msg" NAME_WE)
add_dependencies(floribot_engines_generate_messages_py _floribot_engines_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/floribot_ws/src/floribot_engines/srv/interface_kit.srv" NAME_WE)
add_dependencies(floribot_engines_generate_messages_py _floribot_engines_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(floribot_engines_genpy)
add_dependencies(floribot_engines_genpy floribot_engines_generate_messages_py)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS floribot_engines_generate_messages_py)



if(gencpp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/floribot_engines)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/floribot_engines
    DESTINATION ${gencpp_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_cpp)
  add_dependencies(floribot_engines_generate_messages_cpp std_msgs_generate_messages_cpp)
endif()

if(geneus_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/floribot_engines)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/floribot_engines
    DESTINATION ${geneus_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_eus)
  add_dependencies(floribot_engines_generate_messages_eus std_msgs_generate_messages_eus)
endif()

if(genlisp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/floribot_engines)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/floribot_engines
    DESTINATION ${genlisp_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_lisp)
  add_dependencies(floribot_engines_generate_messages_lisp std_msgs_generate_messages_lisp)
endif()

if(gennodejs_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/floribot_engines)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/floribot_engines
    DESTINATION ${gennodejs_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_nodejs)
  add_dependencies(floribot_engines_generate_messages_nodejs std_msgs_generate_messages_nodejs)
endif()

if(genpy_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/floribot_engines)
  install(CODE "execute_process(COMMAND \"/usr/bin/python3\" -m compileall \"${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/floribot_engines\")")
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/floribot_engines
    DESTINATION ${genpy_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_py)
  add_dependencies(floribot_engines_generate_messages_py std_msgs_generate_messages_py)
endif()

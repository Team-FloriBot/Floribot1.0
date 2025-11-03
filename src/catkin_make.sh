cd ..
source /opt/ros/kinetic/setup.bash
source ./devel/setup.bash
catkin_make floribot_engines_generate_messages
catkin_make
cd src

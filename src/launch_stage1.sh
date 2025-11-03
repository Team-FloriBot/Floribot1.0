source /opt/ros/hydro/setup.bash
source ../devel/setup.bash
export ROS_HOSTNAME=localhost
export ROS_MASTER_URI=http://localhost:11311/

roslaunch floribot_robot stage1.launch

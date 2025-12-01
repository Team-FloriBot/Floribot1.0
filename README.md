# FloriBot ROS Workspace

Dies ist der Workspace für den FloriBot1.0.

## 📋 Voraussetzungen

* **Ubuntu 18.04** (Bionic Beaver)
* **ROS Melodic**
* Git

## Klonen Repository
```bash
git clone https://github.com/Team-FloriBot/Floribot1.0.git ~/floribot
cd ~/floribot
git submodule init
git submodule update

## Abhaengingkeiten installieren 
sudo apt update
rosdep update
rosdep install --from-paths src --ignore-src -r -y

## Workspace bauen
catkin_make

## Umgebung laden
source devel/setup.bash

## Fuer dauerhaftes Laden
echo "source ~/floribot/devel/setup.bash" >> ~/.bashrc
source ~/.bashrc

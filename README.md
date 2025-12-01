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
```
## Abhaengingkeiten installieren 
```bash
sudo apt update
rosdep update
rosdep install --from-paths src --ignore-src -r -y
```
## Workspace bauen
```bash
catkin_make
```
## Umgebung laden
```bash
source devel/setup.bash
```
## Fuer dauerhaftes Laden
```bash
echo "source ~/floribot/devel/setup.bash" >> ~/.bashrc
source ~/.bashrc
```

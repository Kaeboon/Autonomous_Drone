## Autonomous Droe

### Introduction

- The goal of this project is to control a flying frone to travel between different waypoints. it will repeat the following three steps until the ground robot reaches it's final waypoint - (i) move to the moving turtlebot, (ii) move to the turtlebot's waypoint, (iii) and back to the initial position above the take off point. Once the ground bot reaches the final waypoint, the cycle continues.

This program is developed using ROS2 Humble

### Running

1. Download and build the `sjtu_drone`.

```
mkdir -p ~/sjtu_drone/src
cd ~/sjtu_drone/src
git clone https://github.com/NovoG93/sjtu_drone.git
cd ~/sjtu_drone
colcon build --symlink-install
cd ~
```

2. Build the current repo

```
cd Autonomous_Drone
chmod _x *.sh
./bd.sh
```

3. Run the code

```
./run.sh
```

### Summary

<b> Task: Estimation Task</b>:

The program has an inertial navigation system (INS) that combines multiple readings to estimate the motion states of a robot. This can be done using the Extended Kalman Filter (EKF). EKF Correction is carried out depending on the avaibalibity of the measurements. Sensors used include GPS, Magnetometer, Sonar, Barometer.

<b> Task: Controller Task </b>:

The program implemented a pure pursuit path tracking algorithm. The desired velocities are first determined by a proportional (P) controller, then subsequently constrained.

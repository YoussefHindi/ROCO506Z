# Turtlebot ROCO506Z

This simulation shows turtlebot robot where it has multiple functionality SLAM, different implemented path planning algorithms, and finally error measurement between the actual path and planned path.

## Getting Started

Clone this repository in your home folder it's highly recommended to be cloned in your home folder for easier modifications. 

### Prerequisites

The following packages was tested using the following:

Ubuntu 16.04  
ROS kinteic   
VREP PRO EDU V 3.6.2  

Install the following packages using these commands:

```
sudo apt install ros-kinetic-tf2*
sudo apt install ros-kinetic-move-base*
sudo apt-get install python-qt4
sudo apt-get install ros-kinetic-navigation
sudo apt-get install ros-kinetic-move-base ros-kinetic-pointcloud-to-laserscan ros-kinetic-slam-karto ros-kinetic-hector-*
sudo apt-get install -y python-wstool python-rosdep ninja-build
sudo apt install ros-kinetic-hector*
sudo apt-get install ros-kinetic-dwa-local-planner

```

### Installing

Open the folder ___ it contains a folder named turtlebot2_wss which is a meta package that contains multiple packages.

first catkin the package turtlebot_msgs.


```
cd ~/ROCO506Z/turtlebot2_wss/turtlebot_msgs/
catkin_make
```

and then source them. 

```
cd ..
source source_all.bash
```
and then repeat the same steps for each package.

turtlebot  
turtlebot_2dslam  
turtlebot_interaction  
turtlebot_map_and_nav  
turtlebot_simulation  

Now After compiling and sourcing all packages lets start the simulation.

## Running the tests

first run roscore 

```
roscore
```
And then vrep
```
vrep
```
If the above command didn't work make sure you downloaded vrep files in your pc and make the following changes in .bashrc file.
```
gedit ~/.bashrc
source ~/.bashrc
```
then go to the bottom of the text file and add the following 2 lines. 
```
export VREP_ROOT=~/your_vrep_folder_path
alias vrep="cd $VREP_ROOT && ./vrep.sh"
```

After vrep is up and running go to file at the top left then open   

file->open  

then go to ROCO506Z/turtlebot2_wss/turtlebot_simulation/src/vrep_simulation/scenes/

and select the following scene:  

youssef_maze_scenario.ttt  

and click the play button to run the simulation.  

open a new terminal and go to the following folder and source it. 
```
cd ~/ROCO506Z/turtlebot2_wss/
source source_all.bash
```

run the following command
```
roslaunch turtlebot_rviz_launchers vrep_turtlebot_rviz_launch.launch
```

lets test SLAM, path plannig, error calculation and finally testing differentpath planning algorithm.

### SLAM using Hector mapping 
why we used hector mapping..............

Run hector mapping launch file 
```
roslaunch turtlebot_2dslam/src/turtlebot_hector_mapping/turtlebot_hector_mapping.launch

```
navigate the robot using the keyboard arrows make sure you select the the window that popsup when you run the command
```
roslaunch turtlebot_teleop_keyboard keyboard_teleop_diff_drive.launch
```
As the robot moves around a map is build around check the video for Hector mapping SLAM in the videos  folder.

### And coding style tests

Explain what these tests test and why

```
Give an example
```

## Deployment

Add additional notes about how to deploy this on a live system

## Built With

* [Dropwizard](http://www.dropwizard.io/1.0.2/docs/) - The web framework used
* [Maven](https://maven.apache.org/) - Dependency Management
* [ROME](https://rometools.github.io/rome/) - Used to generate RSS Feeds

## Contributing

Please read [CONTRIBUTING.md](https://gist.github.com/PurpleBooth/b24679402957c63ec426) for details on our code of conduct, and the process for submitting pull requests to us.

## Versioning

We use [SemVer](http://semver.org/) for versioning. For the versions available, see the [tags on this repository](https://github.com/your/project/tags). 

## Authors

* **Billie Thompson** - *Initial work* - [PurpleBooth](https://github.com/PurpleBooth)

See also the list of [contributors](https://github.com/your/project/contributors) who participated in this project.

## License

This project is licensed under the MIT License - see the [LICENSE.md](LICENSE.md) file for details

## Acknowledgments

* Hat tip to anyone whose code was used
* Inspiration
* etc



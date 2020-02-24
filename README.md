# ROCO506Z

git init									//git init
git add .									//Adds the files in the local repository 
										  and stages them for commit. To unstage a file, 
										  use 'git reset HEAD YOUR-FILE'.	
git commit -m ""								//sets your commit
git remote add origin https://github.com/youssefhindawi/ROCO506Z.git		//Sets the new remote
git remote -v									//Verifies the new remote URL
git push origin master								//push changes to github

git push -f origin master							//override and push changes anyway


git config --global user.email "j0h@example.com"
git config --global user.name "jOh"

git config -l

////////////////////////////////////////////

roscore
./vrep.sh
roslaunch turtlebot_rviz_launchers vrep_turtlebot_rviz_launch.launch
roslaunch turtlebot_octomap turtlebot_octomap.launch
roslaunch trajectory_control trajectory_control.launch
roslaunch stigmergy_planner stigmergy_planner.launch

roslaunch turtlebot_teleop_keyboard keyboard_teleop_diff_drive.launch
roslaunch rgb_pcd_kinect_fusion rgb_pcd_kinect_fusion.launch










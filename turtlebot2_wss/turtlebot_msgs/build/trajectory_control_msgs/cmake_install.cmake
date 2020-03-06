# Install script for directory: /home/user001/ROCO506Z/turtlebot2_wss/turtlebot_msgs/src/trajectory_control_msgs

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/user001/ROCO506Z/turtlebot2_wss/turtlebot_msgs/install")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/trajectory_control_msgs/action" TYPE FILE FILES "/home/user001/ROCO506Z/turtlebot2_wss/turtlebot_msgs/src/trajectory_control_msgs/action/TrajectoryControl.action")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/trajectory_control_msgs/msg" TYPE FILE FILES
    "/home/user001/ROCO506Z/turtlebot2_wss/turtlebot_msgs/devel/share/trajectory_control_msgs/msg/TrajectoryControlAction.msg"
    "/home/user001/ROCO506Z/turtlebot2_wss/turtlebot_msgs/devel/share/trajectory_control_msgs/msg/TrajectoryControlActionGoal.msg"
    "/home/user001/ROCO506Z/turtlebot2_wss/turtlebot_msgs/devel/share/trajectory_control_msgs/msg/TrajectoryControlActionResult.msg"
    "/home/user001/ROCO506Z/turtlebot2_wss/turtlebot_msgs/devel/share/trajectory_control_msgs/msg/TrajectoryControlActionFeedback.msg"
    "/home/user001/ROCO506Z/turtlebot2_wss/turtlebot_msgs/devel/share/trajectory_control_msgs/msg/TrajectoryControlGoal.msg"
    "/home/user001/ROCO506Z/turtlebot2_wss/turtlebot_msgs/devel/share/trajectory_control_msgs/msg/TrajectoryControlResult.msg"
    "/home/user001/ROCO506Z/turtlebot2_wss/turtlebot_msgs/devel/share/trajectory_control_msgs/msg/TrajectoryControlFeedback.msg"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/trajectory_control_msgs/cmake" TYPE FILE FILES "/home/user001/ROCO506Z/turtlebot2_wss/turtlebot_msgs/build/trajectory_control_msgs/catkin_generated/installspace/trajectory_control_msgs-msg-paths.cmake")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES "/home/user001/ROCO506Z/turtlebot2_wss/turtlebot_msgs/devel/include/trajectory_control_msgs")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roseus/ros" TYPE DIRECTORY FILES "/home/user001/ROCO506Z/turtlebot2_wss/turtlebot_msgs/devel/share/roseus/ros/trajectory_control_msgs")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/common-lisp/ros" TYPE DIRECTORY FILES "/home/user001/ROCO506Z/turtlebot2_wss/turtlebot_msgs/devel/share/common-lisp/ros/trajectory_control_msgs")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/gennodejs/ros" TYPE DIRECTORY FILES "/home/user001/ROCO506Z/turtlebot2_wss/turtlebot_msgs/devel/share/gennodejs/ros/trajectory_control_msgs")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  execute_process(COMMAND "/usr/bin/python" -m compileall "/home/user001/ROCO506Z/turtlebot2_wss/turtlebot_msgs/devel/lib/python2.7/dist-packages/trajectory_control_msgs")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python2.7/dist-packages" TYPE DIRECTORY FILES "/home/user001/ROCO506Z/turtlebot2_wss/turtlebot_msgs/devel/lib/python2.7/dist-packages/trajectory_control_msgs")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/user001/ROCO506Z/turtlebot2_wss/turtlebot_msgs/build/trajectory_control_msgs/catkin_generated/installspace/trajectory_control_msgs.pc")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/trajectory_control_msgs/cmake" TYPE FILE FILES "/home/user001/ROCO506Z/turtlebot2_wss/turtlebot_msgs/build/trajectory_control_msgs/catkin_generated/installspace/trajectory_control_msgs-msg-extras.cmake")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/trajectory_control_msgs/cmake" TYPE FILE FILES
    "/home/user001/ROCO506Z/turtlebot2_wss/turtlebot_msgs/build/trajectory_control_msgs/catkin_generated/installspace/trajectory_control_msgsConfig.cmake"
    "/home/user001/ROCO506Z/turtlebot2_wss/turtlebot_msgs/build/trajectory_control_msgs/catkin_generated/installspace/trajectory_control_msgsConfig-version.cmake"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/trajectory_control_msgs" TYPE FILE FILES "/home/user001/ROCO506Z/turtlebot2_wss/turtlebot_msgs/src/trajectory_control_msgs/package.xml")
endif()


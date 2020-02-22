
(cl:in-package :asdf)

(defsystem "trajectory_control_msgs-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils :actionlib_msgs-msg
               :geometry_msgs-msg
               :nav_msgs-msg
               :nifti_robot_driver_msgs-msg
               :std_msgs-msg
)
  :components ((:file "_package")
    (:file "TrajectoryControlAction" :depends-on ("_package_TrajectoryControlAction"))
    (:file "_package_TrajectoryControlAction" :depends-on ("_package"))
    (:file "TrajectoryControlActionFeedback" :depends-on ("_package_TrajectoryControlActionFeedback"))
    (:file "_package_TrajectoryControlActionFeedback" :depends-on ("_package"))
    (:file "TrajectoryControlActionGoal" :depends-on ("_package_TrajectoryControlActionGoal"))
    (:file "_package_TrajectoryControlActionGoal" :depends-on ("_package"))
    (:file "TrajectoryControlActionResult" :depends-on ("_package_TrajectoryControlActionResult"))
    (:file "_package_TrajectoryControlActionResult" :depends-on ("_package"))
    (:file "TrajectoryControlFeedback" :depends-on ("_package_TrajectoryControlFeedback"))
    (:file "_package_TrajectoryControlFeedback" :depends-on ("_package"))
    (:file "TrajectoryControlGoal" :depends-on ("_package_TrajectoryControlGoal"))
    (:file "_package_TrajectoryControlGoal" :depends-on ("_package"))
    (:file "TrajectoryControlResult" :depends-on ("_package_TrajectoryControlResult"))
    (:file "_package_TrajectoryControlResult" :depends-on ("_package"))
  ))
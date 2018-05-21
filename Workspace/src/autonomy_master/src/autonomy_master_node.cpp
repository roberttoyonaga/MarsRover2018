//
// Created by tom on 20/05/18.
//

#include "autonomy_master_logic.h"
#include "ros/ros.h"
#include <cstdio>


int main(int argc, char **argv) {
  ros::init(argc, argv, "autonomy_master");
  ros::NodeHandle nh;
  ROS_INFO("local planner");

  CAutonomyMasterLogic masterLogic(nh);
  ROS_INFO("local planner setup complete");

  masterLogic.Start();

  return 0;
}
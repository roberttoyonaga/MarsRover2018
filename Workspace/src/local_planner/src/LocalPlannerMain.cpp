#include "DynamicWindow.h"
#include "LocalPlanner.h"
#include "ros/ros.h"
#include "nav_msgs/OccupancyGrid.h"
#include "geometry_msgs/Twist.h"
#include <cstdio>

ros::Publisher velocityPub;

void CurrentVelocityCallback(geometry_msgs::Twist::ConstPtr& currentVelocity)
{

}

void OccupancyGridCallback(nav_msgs::OccupancyGrid::ConstPtr& occupancyGrid)
{

}


int main(int argc, char** argv)
{
    ros::init(argc, argv, "local_planner");
    ros::NodeHandle nh;
    ROS_INFO("local planner");
    RobotParams_t roverParams;
    //defaults
    roverParams.maxAngAccel = 1.0;
    roverParams.maxLinAccel = 1.0;
    roverParams.maxLinDecel = 1.0;
    roverParams.maxV = 1.5;
    roverParams.minV = 0.0;
    roverParams.maxW = 1.0;
    roverParams.robotLength = 1.5;
    roverParams.robotWidth = 0.5;
    roverParams.timestep = 0.5;

    ros::param::get("roverParams_maxAngAccel", roverParams.maxAngAccel);
    ros::param::get("roverParams_maxLinAccel", roverParams.maxLinAccel);
    ros::param::get("roverParams_maxLinDecel", roverParams.maxLinDecel);
    ros::param::get("roverParams_maxV", roverParams.maxV);
    ros::param::get("roverParams_minV", roverParams.minV);
    ros::param::get("roverParams_maxW", roverParams.maxW);
    ros::param::get("roverParams_robotLength", roverParams.robotLength);
    ros::param::get("roverParams_robotWidth", roverParams.robotWidth);
    ros::param::get("roverParams_timestep", roverParams.timestep);

    CLocalPlanner localPlanner(&nh, roverParams);
    ROS_INFO("local planner setup complete");


    ros::spin();


    return 0;
}
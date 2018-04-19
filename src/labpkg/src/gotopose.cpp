#include <math.h>
#include <ros/ros.h>
#include <move_base_msgs/MoveBaseAction.h>
#include <actionlib/client/simple_action_client.h>
#include <geometry_msgs/Pose2D.h>
#include <geometry_msgs/Twist.h>
#include <tf2_geometry_msgs/tf2_geometry_msgs.h>
float x;
float y;
float theta;
bool message;

void locationMessageRecieved(const geometry_msgs::Pose2D&msg)
{
    x = 0.0;
    y = 0.0;
    theta = 0.0;
    message = 0;
}

void poseMessageReceived(const geometry_msgs::Pose2D&msg) 
{	
	x = msg.x;
	y = msg.y;
	theta = msg.theta;
	message = true;
}


int main(int argc, char** argv)
{

  ros::init(argc, argv, "gotopose");
  ros::NodeHandle nh;
  ros::Subscriber subPose = nh.subscribe("targetpose",1000,&poseMessageReceived);

actionlib::SimpleActionClient<move_base_msgs::MoveBaseAction> ac("move_base",true);

    
while(ros::ok())
{

    while(message == false)
    {
    ros::spinOnce();
    }
    ROS_INFO_STREAM("done!");

    move_base_msgs::MoveBaseGoal goal;

    goal.target_pose.header.frame_id = "map";
    goal.target_pose.header.stamp = ros::Time::now();

    goal.target_pose.pose.position.x = x;
    goal.target_pose.pose.position.y = y;
    goal.target_pose.pose.orientation.z = sin(theta/2);
    goal.target_pose.pose.orientation.w = cos(theta/2);

    ac.sendGoal(goal);
    ac.waitForResult();
    message = false;
}
  return 0;
}

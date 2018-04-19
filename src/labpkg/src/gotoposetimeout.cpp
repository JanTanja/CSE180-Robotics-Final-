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
{	//reusing code from previous lab
	x = msg.x;
	y = msg.y;
	theta = msg.theta;
	//new for checking if a message has been recieved
	message = true;
}


int main(int argc, char *argv[])
{

    ros::init(argc, argv, "gotopose");
    ros::NodeHandle nh;
    ros::Subscriber subPose =nh.subscribe("targetpose",1000,&poseMessageReceived);

    actionlib::SimpleActionClient<move_base_msgs::MoveBaseAction> ac("move_base",true);

    while(ros::ok())
    {
    while(!message)
    {
        ros::spinOnce();
    }
    move_base_msgs::MoveBaseGoal dest;

    dest.target_pose.header.frame_id = "map";
    dest.target_pose.header.stamp = ros::Time::now();

    dest.target_pose.pose.position.x = x;
    dest.target_pose.pose.position.y = y;
    dest.target_pose.pose.orientation.z = sin(theta/2);
    dest.target_pose.pose.orientation.w = cos(theta/2);

    //send the initial goal
    ac.sendGoal(dest);
    ac.waitForResult();

    if (ac.getState() == actionlib::SimpleClientGoalState::SUCCEEDED) 
    {
    	ac.waitForResult(ros::Duration(5.0));
	    ROS_INFO_STREAM("Destination Reached");
    }
    else
    {
        ac.cancelGoal();
    }
    message = false;
}
  return 0;
}

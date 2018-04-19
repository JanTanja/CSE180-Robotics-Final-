#include <ros/ros.h>
#include <tf2_ros/transform_listener.h>
#include <tf2/impl/utils.h>
#include <geometry_msgs/TransformStamped.h>
#include <geometry_msgs/Twist.h>
#include <iostream>

int main(int argc, char** argv)
{
ros::init(argc, argv, "listener");
ros::NodeHandle nh;

geometry_msgs::TransformStamped transformStamped;
geometry_msgs::TransformStamped transformStamped2;
geometry_msgs::Twist message;

tf2_ros::Buffer buf;
tf2_ros::TransformListener listener(buf);

tf2::Quaternion q;
tf2::Quaternion q2;

ros::Publisher pub = nh.advertise<geometry_msgs::Twist>("husky_alpha/husky_velocity_controller/cmd_vel", 1000);

ros::Rate rate(60);




while (nh.ok())
{
	try
	{
	transformStamped = buf.lookupTransform("husky_beta/base_link", "husky_alpha/base_link",ros::Time(0));
	rate.sleep();
	transformStamped2 = buf.lookupTransform("husky_beta/base_link", "husky_alpha/base_link",ros::Time(0), ros::Duration(3.0));

	}

	catch (tf2::TransformException &ex) 
	{
	ROS_WARN("%s",ex.what());
	ros::Duration(1.0).sleep();
	continue;
	}

	double difX = transformStamped2.transform.translation.x - transformStamped.transform.translation.x;

	double difY = transformStamped2.transform.translation.y - transformStamped.transform.translation.y;

	double dist = sqrt(pow(difX,2) - pow(difY,2));


	tf2::fromMsg(transformStamped2.transform.rotation,q2);
	tf2::fromMsg(transformStamped.transform.rotation,q);
	double theta = q.getAngle();
	double theta2 = q2.getAngle();
	double t = theta;
	double t2 = theta2;

	double difRot= t2 - t;

	message.angular.z = difRot;

	message.linear.x = dist;

	pub.publish(message);
	ROS_INFO_STREAM(message);
	rate.sleep();

}
return 0;
};

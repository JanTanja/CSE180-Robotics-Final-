#include <ros/ros.h>
#include <geometry_msgs/Twist.h>
#include <sensor_msgs/LaserScan.h>
#include <stdlib.h>

void getLaserInfo(const sensor_msgs::LaserScan&msg) {

	for(int i = 0;i<msg.ranges.size();i++) {
		ROS_INFO_STREAM("Showing ranges:"<< msg.ranges[i]);
	}
}

int main(int argc, char **argv) {
	ros::init(argc, argv, "laserListener");

	ros::NodeHandle nh;
  
  	ros::Subscriber sub = nh.subscribe("/scan",1000,&getLaserInfo);

  	ros::spin();
}
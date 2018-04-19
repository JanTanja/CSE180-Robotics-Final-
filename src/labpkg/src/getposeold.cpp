#include <ros/ros.h>
#include<geometry_msgs/Pose2D.h>

using namespace std;

int main(int argc, char **argv){
        ros::init(argc,argv,"getpose");

        ros::NodeHandle nh;

        ros::Publisher pubPose = nh.advertise<geometry_msgs::Pose2D>("targetpose",1000);

	float x;
	float y;
	float theta;
	geometry_msgs::Pose2D pos;
	ros::Rate rate(1);
	while(ros::ok()){
		cin>>x>>y>>theta;
		pos.x = x;
		pos.y = y;
		pos.theta = theta;
		pubPose.publish(pos);
		ROS_INFO_STREAM("SENT OUT Pose2d : x: "<<pos.x<<" y:  "<<pos.y<<" thetha: "<<pos.theta);
		rate.sleep();
	}

}



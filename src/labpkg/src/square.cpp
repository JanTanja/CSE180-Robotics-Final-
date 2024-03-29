#include<ros/ros.h>
#include<geometry_msgs/Twist.h>


int main(int argc, char **argv){

  ros::init(argc, argv, "publish_velocity");
  ros::NodeHandle nh;

  ros::Publisher pub =
    nh.advertise<geometry_msgs::Twist>("husky_velocity_controller/cmd_vel",1000);

  ros::Rate rate(1);
  geometry_msgs::Twist msg;


  while (ros::ok()) {
    msg.linear.x = 1;
    msg.angular.z = 0.0;
    pub.publish(msg);
    rate.sleep();
    msg.linear.x = 0;
    msg.angular.z = M_PI/2;
    pub.publish(msg);
    rate.sleep();
}
}

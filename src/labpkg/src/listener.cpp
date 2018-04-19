# include <ros/ros.h>
# include <tf2_ros/transform_listener.h>
# include <geometry_msgs/TransformStamped.h>
int main(int argc, char **argv)
{
  ros::init(argc, argv, "listener");
  ros::NodeHandle nh;

  tf2_ros::Buffer buf;
  tf2_ros::TransformListener listen(buf);

  geometry_msgs::TransformStamped tran;

  while (nh.ok())
  {
    try
    {
      tran = buf.lookupTransform("husky_beta/base_link", "husky_alpha/base_link", ros::Time(0));
    }
    catch (tf2::TransformException &ex) 
    {
      ros::Duration(1.0).sleep();
      ROS_WARN("%s",ex.what());
      continue;
    }
    ROS_INFO_STREAM("Current transformation: " << tran);
  }
  return 0;
}


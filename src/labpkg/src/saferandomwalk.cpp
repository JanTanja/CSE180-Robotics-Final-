# include <ros/ros.h>
# include <geometry_msgs/Pose2D.h>
# include <sensor_msgs/LaserScan.h>
# include <nav_msgs/GetPlan.h>
# include <tf2/LinearMath/Quaternion.h>
# include <move_base_msgs/MoveBaseAction.h>
# include <actionlib/client/simple_action_client.h>
# include <tf2_geometry_msgs/tf2_geometry_msgs.h>

float x;
float y;
float theta;

float xx;
float yy;
float Theta;

bool blockade = 0;
int count = 0;

void readLocation(const sensor_msgs::LaserScan&msg)
{
    for (int c = 0; c < (msg.ranges.size() - 1); c++)
    {
        if (msg.ranges[c] < 0.4)
        {
            blockade = 1;
            break;
        }
        else blockade = 0;
    }
}

void sensorIsCalled(const sensor_msgs::LaserScan&msg) {
	ROS_INFO_STREAM("OBJECT DETECTED");
	ROS_INFO_STREAM("This is msg: " << msg << std::endl);
}

void condition(const move_base_msgs::MoveBaseFeedbackConstPtr& fb)
{
   if (count == 10) count = -1;
   else count++;
}

void start()
{
	// start
}

void finish(const actionlib::SimpleClientGoalState& state, const move_base_msgs::MoveBaseResultConstPtr& result)
{
	// finish
}

int main (int argc, char **argv) 
{
	ros::init(argc, argv, "saferandomwalk"); // initializing the Node saferandomwalk
	ros::NodeHandle nh; // NodeHandler initialized in order for publishing and subscribing
	actionlib::SimpleActionClient<move_base_msgs::MoveBaseAction> goToGoal("move_base", true); // 	
	ros::Subscriber sub = nh.subscribe("/scan",1000,&readLocation);
	ros::Subscriber sensorReading = nh.subscribe("/objectsDetected",1000,&sensorIsCalled);
	tf2::Quaternion quat;
        ros::Rate rate(1);
  	while (ros::ok()) 
        {
		move_base_msgs::MoveBaseGoal goal;
		goal.target_pose.header.frame_id = "map";
		goal.target_pose.header.stamp = ros::Time::now();
		quat.setRPY ( 0 , 0 , ((double)(rand() % 11))/13);
		goal.target_pose.pose.position.x = ((double)(rand() % 17));
		goal.target_pose.pose.orientation = tf2::toMsg(quat);
		goToGoal.sendGoal(goal, &finish, &start, &condition);
        ros::spinOnce();
        if (blockade) goToGoal.cancelAllGoals();
        rate.sleep();
	}
 	return 0;
}


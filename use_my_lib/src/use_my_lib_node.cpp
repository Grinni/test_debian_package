/*
 * my_lib.cpp
 *
 *  Created on: Apr 4, 2018
 *      Author: gns
 */

#include <ros/ros.h>
//#include "../include/use_my_lib/use_my_lib.h"
#include <my_lib/my_lib.h>



int main(int argc, char **argv)
{
  ros::init(argc, argv, "use_my_lib_node");

  ros::NodeHandle nh;

  ros::Rate rate(1);
  int i = 0;
  while(ros::ok())
  {
    ROS_INFO_STREAM("Loop Nr. " << i << ".");
    ROS_INFO_STREAM("Test my_lib: " << grip::writeInt(i));
    i++;

    ros::spinOnce();
    rate.sleep();
  }

  ROS_INFO("Exiting ...");
  return 0;
}


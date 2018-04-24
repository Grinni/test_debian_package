/*
 * my_lib.cpp
 *
 *  Created on: Apr 4, 2018
 *      Author: gns
 */

#include <ros/ros.h>
#include "../include/my_lib/my_lib.h"


namespace grip {

bool invertWhatIam(bool test)
{
  ROS_INFO_STREAM("inverting ...");
  return !test;
}

std::string writeInt(int i)
{
  ROS_INFO_STREAM("Creating a String ...");
  std::stringstream ss;
  ss << "Got Integer: " << i;
  return ss.str();
}

} //end namespace

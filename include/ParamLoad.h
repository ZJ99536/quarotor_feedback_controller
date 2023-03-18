#pragma once

#include <ros/ros.h>

template <typename TName, typename TVal>

void read_yaml_param(const ros::NodeHandle &nh, const TName &name, TVal &val){
    if (nh.getParam(name, val)){
        // pass
    }
    else{
        ROS_ERROR_STREAM("Read param: " << name << " failed.");
        ROS_BREAK();
    }
};
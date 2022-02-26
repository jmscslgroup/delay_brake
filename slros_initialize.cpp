#include "slros_initialize.h"

ros::NodeHandle * SLROSNodePtr;
const std::string SLROSNodeName = "delay_brake";

// For Block delay_brake/Subscribe
SimulinkSubscriber<std_msgs::Float64, SL_Bus_delay_brake_std_msgs_Float64> Sub_delay_brake_429;

// For Block delay_brake/Subscribe4
SimulinkSubscriber<geometry_msgs::Twist, SL_Bus_delay_brake_geometry_msgs_Twist> Sub_delay_brake_430;

// For Block delay_brake/Subscribe5
SimulinkSubscriber<geometry_msgs::Twist, SL_Bus_delay_brake_geometry_msgs_Twist> Sub_delay_brake_431;

// For Block delay_brake/Subscribe6
SimulinkSubscriber<std_msgs::Float64, SL_Bus_delay_brake_std_msgs_Float64> Sub_delay_brake_476;

// For Block delay_brake/Subscribe7
SimulinkSubscriber<std_msgs::Bool, SL_Bus_delay_brake_std_msgs_Bool> Sub_delay_brake_481;

// For Block delay_brake/Publish1
SimulinkPublisher<std_msgs::Float64, SL_Bus_delay_brake_std_msgs_Float64> Pub_delay_brake_401;

// For Block delay_brake/Publish2
SimulinkPublisher<geometry_msgs::Twist, SL_Bus_delay_brake_geometry_msgs_Twist> Pub_delay_brake_520;

// For Block delay_brake/delay_brake/Get Parameter1
SimulinkParameterGetter<real64_T, double> ParamGet_delay_brake_447;

// For Block delay_brake/delay_brake/Get Parameter2
SimulinkParameterGetter<real64_T, double> ParamGet_delay_brake_448;

// For Block delay_brake/delay_brake/Get Parameter3
SimulinkParameterGetter<real64_T, double> ParamGet_delay_brake_449;

// For Block delay_brake/delay_brake/Get Parameter4
SimulinkParameterGetter<real64_T, double> ParamGet_delay_brake_450;

// For Block delay_brake/delay_brake/Get Parameter5
SimulinkParameterGetter<real64_T, double> ParamGet_delay_brake_463;

// For Block delay_brake/delay_brake/Get Parameter6
SimulinkParameterGetter<real64_T, double> ParamGet_delay_brake_465;

// For Block delay_brake/delay_brake/Get Parameter7
SimulinkParameterGetter<boolean_T, bool> ParamGet_delay_brake_529;

void slros_node_init(int argc, char** argv)
{
  ros::init(argc, argv, SLROSNodeName);
  SLROSNodePtr = new ros::NodeHandle();
}


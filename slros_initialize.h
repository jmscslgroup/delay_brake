#ifndef _SLROS_INITIALIZE_H_
#define _SLROS_INITIALIZE_H_

#include "slros_busmsg_conversion.h"
#include "slros_generic.h"

extern ros::NodeHandle * SLROSNodePtr;
extern const std::string SLROSNodeName;

// For Block delay_brake/Subscribe
extern SimulinkSubscriber<std_msgs::Float64, SL_Bus_delay_brake_std_msgs_Float64> Sub_delay_brake_429;

// For Block delay_brake/Subscribe4
extern SimulinkSubscriber<geometry_msgs::Twist, SL_Bus_delay_brake_geometry_msgs_Twist> Sub_delay_brake_430;

// For Block delay_brake/Subscribe5
extern SimulinkSubscriber<geometry_msgs::Twist, SL_Bus_delay_brake_geometry_msgs_Twist> Sub_delay_brake_431;

// For Block delay_brake/Subscribe6
extern SimulinkSubscriber<std_msgs::Float64, SL_Bus_delay_brake_std_msgs_Float64> Sub_delay_brake_476;

// For Block delay_brake/Subscribe7
extern SimulinkSubscriber<std_msgs::Bool, SL_Bus_delay_brake_std_msgs_Bool> Sub_delay_brake_481;

// For Block delay_brake/Publish1
extern SimulinkPublisher<std_msgs::Float64, SL_Bus_delay_brake_std_msgs_Float64> Pub_delay_brake_401;

// For Block delay_brake/Publish2
extern SimulinkPublisher<geometry_msgs::Twist, SL_Bus_delay_brake_geometry_msgs_Twist> Pub_delay_brake_520;

// For Block delay_brake/delay_brake/Get Parameter1
extern SimulinkParameterGetter<real64_T, double> ParamGet_delay_brake_447;

// For Block delay_brake/delay_brake/Get Parameter2
extern SimulinkParameterGetter<real64_T, double> ParamGet_delay_brake_448;

// For Block delay_brake/delay_brake/Get Parameter3
extern SimulinkParameterGetter<real64_T, double> ParamGet_delay_brake_449;

// For Block delay_brake/delay_brake/Get Parameter4
extern SimulinkParameterGetter<real64_T, double> ParamGet_delay_brake_450;

// For Block delay_brake/delay_brake/Get Parameter5
extern SimulinkParameterGetter<real64_T, double> ParamGet_delay_brake_463;

// For Block delay_brake/delay_brake/Get Parameter6
extern SimulinkParameterGetter<real64_T, double> ParamGet_delay_brake_465;

// For Block delay_brake/delay_brake/Get Parameter7
extern SimulinkParameterGetter<boolean_T, bool> ParamGet_delay_brake_529;

void slros_node_init(int argc, char** argv);

#endif

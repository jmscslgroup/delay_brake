//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: delay_brake.h
//
// Code generated for Simulink model 'delay_brake'.
//
// Model version                  : 3.88
// Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
// C/C++ source code generated on : Sat Feb 26 15:53:22 2022
//
// Target selection: ert.tlc
// Embedded hardware selection: Generic->Unspecified (assume 32-bit Generic)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#ifndef RTW_HEADER_delay_brake_h_
#define RTW_HEADER_delay_brake_h_
#include <stddef.h>
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "slros_initialize.h"
#include "delay_brake_types.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"

// Macros for accessing real-time model data structure
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

// Block signals (default storage)
struct B_delay_brake_T {
  SL_Bus_delay_brake_geometry_msgs_Twist In1;// '<S14>/In1'
  SL_Bus_delay_brake_geometry_msgs_Twist In1_p;// '<S13>/In1'
  SL_Bus_delay_brake_geometry_msgs_Twist BusAssignment2;// '<Root>/Bus Assignment2' 
  char_T b_zeroDelimTopic[31];
  char_T b_zeroDelimTopic_m[25];
  real_T vl;
  real_T X_rel;
  SL_Bus_delay_brake_std_msgs_Float64 In1_o;// '<S15>/In1'
  SL_Bus_delay_brake_std_msgs_Float64 In1_m;// '<S12>/In1'
};

// Block states (default storage) for system '<Root>'
struct DW_delay_brake_T {
  ros_slros_internal_block_GetP_T obj; // '<S11>/Get Parameter7'
  ros_slros_internal_block_GetP_T obj_j;// '<S11>/Get Parameter6'
  ros_slros_internal_block_GetP_T obj_e;// '<S11>/Get Parameter5'
  ros_slros_internal_block_GetP_T obj_k;// '<S11>/Get Parameter4'
  ros_slros_internal_block_GetP_T obj_i;// '<S11>/Get Parameter3'
  ros_slros_internal_block_GetP_T obj_p;// '<S11>/Get Parameter2'
  ros_slros_internal_block_GetP_T obj_n;// '<S11>/Get Parameter1'
  ros_slroscpp_internal_block_P_T obj_jd;// '<S5>/SinkBlock'
  ros_slroscpp_internal_block_P_T obj_c;// '<S4>/SinkBlock'
  ros_slroscpp_internal_block_S_T obj_d;// '<S10>/SourceBlock'
  ros_slroscpp_internal_block_S_T obj_n0;// '<S9>/SourceBlock'
  ros_slroscpp_internal_block_S_T obj_is;// '<S8>/SourceBlock'
  ros_slroscpp_internal_block_S_T obj_o;// '<S7>/SourceBlock'
  ros_slroscpp_internal_block_S_T obj_f;// '<S6>/SourceBlock'
  boolean_T relative_distance_prev_not_empt;// '<Root>/MATLAB Function1'
};

// Parameters (default storage)
struct P_delay_brake_T_ {
  SL_Bus_delay_brake_geometry_msgs_Twist Constant_Value;// Computed Parameter: Constant_Value
                                                           //  Referenced by: '<S2>/Constant'

  SL_Bus_delay_brake_geometry_msgs_Twist Out1_Y0;// Computed Parameter: Out1_Y0
                                                    //  Referenced by: '<S13>/Out1'

  SL_Bus_delay_brake_geometry_msgs_Twist Constant_Value_p;// Computed Parameter: Constant_Value_p
                                                             //  Referenced by: '<S7>/Constant'

  SL_Bus_delay_brake_geometry_msgs_Twist Out1_Y0_k;// Computed Parameter: Out1_Y0_k
                                                      //  Referenced by: '<S14>/Out1'

  SL_Bus_delay_brake_geometry_msgs_Twist Constant_Value_pq;// Computed Parameter: Constant_Value_pq
                                                              //  Referenced by: '<S8>/Constant'

  SL_Bus_delay_brake_std_msgs_Bool Out1_Y0_o;// Computed Parameter: Out1_Y0_o
                                                //  Referenced by: '<S16>/Out1'

  SL_Bus_delay_brake_std_msgs_Bool Constant_Value_o;// Computed Parameter: Constant_Value_o
                                                       //  Referenced by: '<S10>/Constant'

  SL_Bus_delay_brake_std_msgs_Float64 Constant_Value_m;// Computed Parameter: Constant_Value_m
                                                          //  Referenced by: '<S1>/Constant'

  SL_Bus_delay_brake_std_msgs_Float64 Out1_Y0_f;// Computed Parameter: Out1_Y0_f
                                                   //  Referenced by: '<S12>/Out1'

  SL_Bus_delay_brake_std_msgs_Float64 Constant_Value_k;// Computed Parameter: Constant_Value_k
                                                          //  Referenced by: '<S6>/Constant'

  SL_Bus_delay_brake_std_msgs_Float64 Out1_Y0_a;// Computed Parameter: Out1_Y0_a
                                                   //  Referenced by: '<S15>/Out1'

  SL_Bus_delay_brake_std_msgs_Float64 Constant_Value_a;// Computed Parameter: Constant_Value_a
                                                          //  Referenced by: '<S9>/Constant'

  real_T Constant2_Value;              // Expression: 1.0
                                          //  Referenced by: '<Root>/Constant2'

  real_T Switch_Threshold;             // Expression: 0.5
                                          //  Referenced by: '<Root>/Switch'

  real_T minmax3015_UpperSat;          // Expression: 1.5
                                          //  Referenced by: '<Root>/min//max -3.0//1.5'

  real_T minmax3015_LowerSat;          // Expression: -3.0
                                          //  Referenced by: '<Root>/min//max -3.0//1.5'

  real_T Constant1_Value;              // Expression: 5
                                          //  Referenced by: '<Root>/Constant1'

};

// Real-time Model Data Structure
struct tag_RTM_delay_brake_T {
  const char_T *errorStatus;
};

// Block parameters (default storage)
#ifdef __cplusplus

extern "C" {

#endif

  extern P_delay_brake_T delay_brake_P;

#ifdef __cplusplus

}
#endif

// Block signals (default storage)
#ifdef __cplusplus

extern "C" {

#endif

  extern struct B_delay_brake_T delay_brake_B;

#ifdef __cplusplus

}
#endif

// Block states (default storage)
extern struct DW_delay_brake_T delay_brake_DW;

#ifdef __cplusplus

extern "C" {

#endif

  // Model entry point functions
  extern void delay_brake_initialize(void);
  extern void delay_brake_step(void);
  extern void delay_brake_terminate(void);

#ifdef __cplusplus

}
#endif

// Real-time Model object
#ifdef __cplusplus

extern "C" {

#endif

  extern RT_MODEL_delay_brake_T *const delay_brake_M;

#ifdef __cplusplus

}
#endif

//-
//  These blocks were eliminated from the model due to optimizations:
//
//  Block '<Root>/Scope' : Unused code path elimination


//-
//  The generated code includes comments that allow you to trace directly
//  back to the appropriate location in the model.  The basic format
//  is <system>/block_name, where system is the system number (uniquely
//  assigned by Simulink) and block_name is the name of the block.
//
//  Use the MATLAB hilite_system command to trace the generated code back
//  to the model.  For example,
//
//  hilite_system('<S3>')    - opens system 3
//  hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
//
//  Here is the system hierarchy for this model
//
//  '<Root>' : 'delay_brake'
//  '<S1>'   : 'delay_brake/Blank Message1'
//  '<S2>'   : 'delay_brake/Blank Message2'
//  '<S3>'   : 'delay_brake/MATLAB Function1'
//  '<S4>'   : 'delay_brake/Publish1'
//  '<S5>'   : 'delay_brake/Publish2'
//  '<S6>'   : 'delay_brake/Subscribe'
//  '<S7>'   : 'delay_brake/Subscribe4'
//  '<S8>'   : 'delay_brake/Subscribe5'
//  '<S9>'   : 'delay_brake/Subscribe6'
//  '<S10>'  : 'delay_brake/Subscribe7'
//  '<S11>'  : 'delay_brake/delay_brake'
//  '<S12>'  : 'delay_brake/Subscribe/Enabled Subsystem'
//  '<S13>'  : 'delay_brake/Subscribe4/Enabled Subsystem'
//  '<S14>'  : 'delay_brake/Subscribe5/Enabled Subsystem'
//  '<S15>'  : 'delay_brake/Subscribe6/Enabled Subsystem'
//  '<S16>'  : 'delay_brake/Subscribe7/Enabled Subsystem'
//  '<S17>'  : 'delay_brake/delay_brake/MATLAB Function1'

#endif                                 // RTW_HEADER_delay_brake_h_

//
// File trailer for generated code.
//
// [EOF]
//

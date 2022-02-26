//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: delay_brake.cpp
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
#include "delay_brake.h"
#include "delay_brake_private.h"

// Block signals (default storage)
B_delay_brake_T delay_brake_B;

// Block states (default storage)
DW_delay_brake_T delay_brake_DW;

// Real-time model
RT_MODEL_delay_brake_T delay_brake_M_ = RT_MODEL_delay_brake_T();
RT_MODEL_delay_brake_T *const delay_brake_M = &delay_brake_M_;

// Model step function
void delay_brake_step(void)
{
  SL_Bus_delay_brake_std_msgs_Bool b_varargout_2_0;
  SL_Bus_delay_brake_std_msgs_Float64 b_varargout_2;
  SL_Bus_delay_brake_std_msgs_Float64 rtb_BusAssignment1;
  real_T rtb_minmax3015;
  real_T rtb_safe_accel;
  real_T value;
  real_T value_0;
  real_T value_1;
  boolean_T b_varargout_1;

  // Outputs for Atomic SubSystem: '<Root>/Subscribe6'
  // MATLABSystem: '<S9>/SourceBlock' incorporates:
  //   Inport: '<S15>/In1'

  b_varargout_1 = Sub_delay_brake_476.getLatestMessage(&b_varargout_2);

  // Outputs for Enabled SubSystem: '<S9>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S15>/Enable'

  if (b_varargout_1) {
    delay_brake_B.In1_o = b_varargout_2;
  }

  // End of MATLABSystem: '<S9>/SourceBlock'
  // End of Outputs for SubSystem: '<S9>/Enabled Subsystem'
  // End of Outputs for SubSystem: '<Root>/Subscribe6'

  // Outputs for Atomic SubSystem: '<Root>/Subscribe'
  // MATLABSystem: '<S6>/SourceBlock' incorporates:
  //   Inport: '<S12>/In1'

  b_varargout_1 = Sub_delay_brake_429.getLatestMessage(&b_varargout_2);

  // Outputs for Enabled SubSystem: '<S6>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S12>/Enable'

  if (b_varargout_1) {
    delay_brake_B.In1_m = b_varargout_2;
  }

  // End of MATLABSystem: '<S6>/SourceBlock'
  // End of Outputs for SubSystem: '<S6>/Enabled Subsystem'
  // End of Outputs for SubSystem: '<Root>/Subscribe'

  // Outputs for Atomic SubSystem: '<Root>/Subscribe4'
  // MATLABSystem: '<S7>/SourceBlock' incorporates:
  //   Inport: '<S13>/In1'

  b_varargout_1 = Sub_delay_brake_430.getLatestMessage
    (&delay_brake_B.BusAssignment2);

  // Outputs for Enabled SubSystem: '<S7>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S13>/Enable'

  if (b_varargout_1) {
    delay_brake_B.In1_p = delay_brake_B.BusAssignment2;
  }

  // End of MATLABSystem: '<S7>/SourceBlock'
  // End of Outputs for SubSystem: '<S7>/Enabled Subsystem'
  // End of Outputs for SubSystem: '<Root>/Subscribe4'

  // Outputs for Atomic SubSystem: '<Root>/Subscribe5'
  // MATLABSystem: '<S8>/SourceBlock' incorporates:
  //   Inport: '<S14>/In1'

  b_varargout_1 = Sub_delay_brake_431.getLatestMessage
    (&delay_brake_B.BusAssignment2);

  // Outputs for Enabled SubSystem: '<S8>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S14>/Enable'

  if (b_varargout_1) {
    delay_brake_B.In1 = delay_brake_B.BusAssignment2;
  }

  // End of MATLABSystem: '<S8>/SourceBlock'
  // End of Outputs for SubSystem: '<S8>/Enabled Subsystem'
  // End of Outputs for SubSystem: '<Root>/Subscribe5'

  // MATLABSystem: '<S11>/Get Parameter1'
  ParamGet_delay_brake_447.get_parameter(&rtb_minmax3015);

  // MATLABSystem: '<S11>/Get Parameter3'
  ParamGet_delay_brake_449.get_parameter(&delay_brake_B.X_rel);

  // MATLABSystem: '<S11>/Get Parameter4'
  ParamGet_delay_brake_450.get_parameter(&value);

  // MATLABSystem: '<S11>/Get Parameter5'
  ParamGet_delay_brake_463.get_parameter(&value_0);

  // MATLABSystem: '<S11>/Get Parameter2'
  ParamGet_delay_brake_448.get_parameter(&value_1);

  // MATLABSystem: '<S11>/Get Parameter7'
  ParamGet_delay_brake_529.get_parameter(&b_varargout_1);

  // MATLAB Function: '<S11>/MATLAB Function1' incorporates:
  //   MATLABSystem: '<S11>/Get Parameter1'
  //   MATLABSystem: '<S11>/Get Parameter2'
  //   MATLABSystem: '<S11>/Get Parameter3'
  //   MATLABSystem: '<S11>/Get Parameter4'
  //   MATLABSystem: '<S11>/Get Parameter5'
  //   MATLABSystem: '<S11>/Get Parameter7'
  //   SignalConversion generated from: '<Root>/Bus Selector7'

  rtb_safe_accel = delay_brake_B.In1_o.Data;
  delay_brake_B.vl = delay_brake_B.In1.Linear.X + delay_brake_B.In1_p.Linear.Z;
  delay_brake_B.X_rel = (((delay_brake_B.In1_m.Data - delay_brake_B.vl *
    delay_brake_B.vl * 0.5 / delay_brake_B.X_rel) - value *
    delay_brake_B.In1.Linear.X) + delay_brake_B.In1.Linear.X *
    delay_brake_B.In1.Linear.X * 0.5 / rtb_minmax3015) - 3.5;
  if (delay_brake_B.X_rel <= value_0) {
    rtb_safe_accel = rtb_minmax3015;
  } else if (b_varargout_1 && (delay_brake_B.X_rel > value_0) &&
             (delay_brake_B.X_rel < value_1)) {
    rtb_safe_accel = rtb_minmax3015 / (value_1 - value_0) * (value_1 -
      delay_brake_B.X_rel);
    if ((!(rtb_safe_accel < delay_brake_B.In1_o.Data)) && (!rtIsNaN
         (delay_brake_B.In1_o.Data))) {
      rtb_safe_accel = delay_brake_B.In1_o.Data;
    }
  }

  // End of MATLAB Function: '<S11>/MATLAB Function1'

  // Switch: '<Root>/Switch' incorporates:
  //   Constant: '<Root>/Constant2'
  //   SignalConversion generated from: '<Root>/Bus Selector7'

  if (delay_brake_P.Constant2_Value > delay_brake_P.Switch_Threshold) {
    // MinMax: '<Root>/MinMax' incorporates:
    //   SignalConversion generated from: '<Root>/Bus Selector7'

    if ((rtb_safe_accel < delay_brake_B.In1_o.Data) || rtIsNaN
        (delay_brake_B.In1_o.Data)) {
      rtb_minmax3015 = rtb_safe_accel;
    } else {
      rtb_minmax3015 = delay_brake_B.In1_o.Data;
    }

    // End of MinMax: '<Root>/MinMax'
  } else {
    rtb_minmax3015 = delay_brake_B.In1_o.Data;
  }

  // End of Switch: '<Root>/Switch'

  // Saturate: '<Root>/min//max -3.0//1.5'
  if (rtb_minmax3015 > delay_brake_P.minmax3015_UpperSat) {
    rtb_minmax3015 = delay_brake_P.minmax3015_UpperSat;
  } else if (rtb_minmax3015 < delay_brake_P.minmax3015_LowerSat) {
    rtb_minmax3015 = delay_brake_P.minmax3015_LowerSat;
  }

  // End of Saturate: '<Root>/min//max -3.0//1.5'

  // BusAssignment: '<Root>/Bus Assignment1'
  rtb_BusAssignment1.Data = rtb_minmax3015;

  // Outputs for Atomic SubSystem: '<Root>/Publish1'
  // MATLABSystem: '<S4>/SinkBlock'
  Pub_delay_brake_401.publish(&rtb_BusAssignment1);

  // End of Outputs for SubSystem: '<Root>/Publish1'

  // BusAssignment: '<Root>/Bus Assignment2' incorporates:
  //   Constant: '<S2>/Constant'
  //   SignalConversion generated from: '<Root>/Bus Selector7'

  delay_brake_B.BusAssignment2 = delay_brake_P.Constant_Value;
  delay_brake_B.BusAssignment2.Linear.X = delay_brake_B.In1_o.Data;
  delay_brake_B.BusAssignment2.Linear.Y = rtb_safe_accel;
  delay_brake_B.BusAssignment2.Linear.Z = rtb_minmax3015;

  // Outputs for Atomic SubSystem: '<Root>/Publish2'
  // MATLABSystem: '<S5>/SinkBlock'
  Pub_delay_brake_520.publish(&delay_brake_B.BusAssignment2);

  // End of Outputs for SubSystem: '<Root>/Publish2'

  // MATLAB Function: '<Root>/MATLAB Function1'
  delay_brake_DW.relative_distance_prev_not_empt = true;

  // MATLABSystem: '<S11>/Get Parameter6'
  ParamGet_delay_brake_465.get_parameter(&rtb_minmax3015);

  // Outputs for Atomic SubSystem: '<Root>/Subscribe7'
  // MATLABSystem: '<S10>/SourceBlock'
  Sub_delay_brake_481.getLatestMessage(&b_varargout_2_0);

  // End of Outputs for SubSystem: '<Root>/Subscribe7'
}

// Model initialize function
void delay_brake_initialize(void)
{
  // Registration code

  // initialize non-finites
  rt_InitInfAndNaN(sizeof(real_T));

  {
    int32_T i;
    char_T b_zeroDelimTopic[14];
    char_T b_zeroDelimTopic_0[10];
    char_T b_zeroDelimTopic_1[8];
    char_T b_zeroDelimName_0[7];
    char_T b_zeroDelimName[6];
    char_T b_zeroDelimTopic_2[4];
    char_T b_zeroDelimName_1[3];
    static const char_T tmp[13] = { 'c', 'm', 'd', '_', 'a', 'c', 'c', 'e', 'l',
      '_', 'p', 'r', 'e' };

    static const char_T tmp_0[9] = { 'l', 'e', 'a', 'd', '_', 'd', 'i', 's', 't'
    };

    static const char_T tmp_1[7] = { 'r', 'e', 'l', '_', 'v', 'e', 'l' };

    static const char_T tmp_2[9] = { 'c', 'm', 'd', '_', 'a', 'c', 'c', 'e', 'l'
    };

    static const char_T tmp_3[30] = { '/', 'd', 'e', 'l', 'a', 'y', '_', 'b',
      'r', 'a', 'k', 'e', '/', 'd', 'e', 'l', 'a', 'y', '_', 'b', 'r', 'a', 'k',
      'e', '_', 'd', 'e', 'b', 'u', 'g' };

    static const char_T tmp_4[24] = { '/', 'c', 'a', 'r', '/', 'h', 'u', 'd',
      '/', 'm', 'i', 'n', 'i', '_', 'c', 'a', 'r', '_', 'e', 'n', 'a', 'b', 'l',
      'e' };

    static const char_T tmp_5[5] = { 'a', '_', 'm', 'i', 'n' };

    static const char_T tmp_6[7] = { 'a', '_', 'm', 'i', 'n', '_', 'l' };

    static const char_T tmp_7[5] = { 'd', 'e', 'l', 't', 'a' };

    static const char_T tmp_8[5] = { 'd', '_', 'm', 'i', 'n' };

    static const char_T tmp_9[5] = { 'd', '_', 'm', 'a', 'x' };

    static const char_T tmp_a[6] = { 's', 'm', 'o', 'o', 't', 'h' };

    // SystemInitialize for Atomic SubSystem: '<Root>/Subscribe6'
    // SystemInitialize for Enabled SubSystem: '<S9>/Enabled Subsystem'
    // SystemInitialize for Outport: '<S15>/Out1' incorporates:
    //   Inport: '<S15>/In1'

    delay_brake_B.In1_o = delay_brake_P.Out1_Y0_a;

    // End of SystemInitialize for SubSystem: '<S9>/Enabled Subsystem'

    // Start for MATLABSystem: '<S9>/SourceBlock'
    delay_brake_DW.obj_n0.matlabCodegenIsDeleted = false;
    delay_brake_DW.obj_n0.isInitialized = 1;
    for (i = 0; i < 13; i++) {
      b_zeroDelimTopic[i] = tmp[i];
    }

    b_zeroDelimTopic[13] = '\x00';
    Sub_delay_brake_476.createSubscriber(&b_zeroDelimTopic[0], 1);
    delay_brake_DW.obj_n0.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S9>/SourceBlock'
    // End of SystemInitialize for SubSystem: '<Root>/Subscribe6'

    // SystemInitialize for Atomic SubSystem: '<Root>/Subscribe'
    // SystemInitialize for Enabled SubSystem: '<S6>/Enabled Subsystem'
    // SystemInitialize for Outport: '<S12>/Out1' incorporates:
    //   Inport: '<S12>/In1'

    delay_brake_B.In1_m = delay_brake_P.Out1_Y0_f;

    // End of SystemInitialize for SubSystem: '<S6>/Enabled Subsystem'

    // Start for MATLABSystem: '<S6>/SourceBlock'
    delay_brake_DW.obj_f.matlabCodegenIsDeleted = false;
    delay_brake_DW.obj_f.isInitialized = 1;
    for (i = 0; i < 9; i++) {
      b_zeroDelimTopic_0[i] = tmp_0[i];
    }

    b_zeroDelimTopic_0[9] = '\x00';
    Sub_delay_brake_429.createSubscriber(&b_zeroDelimTopic_0[0], 1);
    delay_brake_DW.obj_f.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S6>/SourceBlock'
    // End of SystemInitialize for SubSystem: '<Root>/Subscribe'

    // SystemInitialize for Atomic SubSystem: '<Root>/Subscribe4'
    // SystemInitialize for Enabled SubSystem: '<S7>/Enabled Subsystem'
    // SystemInitialize for Outport: '<S13>/Out1' incorporates:
    //   Inport: '<S13>/In1'

    delay_brake_B.In1_p = delay_brake_P.Out1_Y0;

    // End of SystemInitialize for SubSystem: '<S7>/Enabled Subsystem'

    // Start for MATLABSystem: '<S7>/SourceBlock'
    delay_brake_DW.obj_o.matlabCodegenIsDeleted = false;
    delay_brake_DW.obj_o.isInitialized = 1;
    for (i = 0; i < 7; i++) {
      b_zeroDelimTopic_1[i] = tmp_1[i];
    }

    b_zeroDelimTopic_1[7] = '\x00';
    Sub_delay_brake_430.createSubscriber(&b_zeroDelimTopic_1[0], 1);
    delay_brake_DW.obj_o.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S7>/SourceBlock'
    // End of SystemInitialize for SubSystem: '<Root>/Subscribe4'

    // SystemInitialize for Atomic SubSystem: '<Root>/Subscribe5'
    // SystemInitialize for Enabled SubSystem: '<S8>/Enabled Subsystem'
    // SystemInitialize for Outport: '<S14>/Out1' incorporates:
    //   Inport: '<S14>/In1'

    delay_brake_B.In1 = delay_brake_P.Out1_Y0_k;

    // End of SystemInitialize for SubSystem: '<S8>/Enabled Subsystem'

    // Start for MATLABSystem: '<S8>/SourceBlock'
    delay_brake_DW.obj_is.matlabCodegenIsDeleted = false;
    delay_brake_DW.obj_is.isInitialized = 1;
    b_zeroDelimTopic_2[0] = 'v';
    b_zeroDelimTopic_2[1] = 'e';
    b_zeroDelimTopic_2[2] = 'l';
    b_zeroDelimTopic_2[3] = '\x00';
    Sub_delay_brake_431.createSubscriber(&b_zeroDelimTopic_2[0], 1);
    delay_brake_DW.obj_is.isSetupComplete = true;

    // End of SystemInitialize for SubSystem: '<Root>/Subscribe5'

    // SystemInitialize for Atomic SubSystem: '<Root>/Publish1'
    // Start for MATLABSystem: '<S4>/SinkBlock'
    delay_brake_DW.obj_c.matlabCodegenIsDeleted = false;
    delay_brake_DW.obj_c.isInitialized = 1;
    for (i = 0; i < 9; i++) {
      b_zeroDelimTopic_0[i] = tmp_2[i];
    }

    b_zeroDelimTopic_0[9] = '\x00';
    Pub_delay_brake_401.createPublisher(&b_zeroDelimTopic_0[0], 1);
    delay_brake_DW.obj_c.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S4>/SinkBlock'
    // End of SystemInitialize for SubSystem: '<Root>/Publish1'

    // SystemInitialize for Atomic SubSystem: '<Root>/Publish2'
    // Start for MATLABSystem: '<S5>/SinkBlock'
    delay_brake_DW.obj_jd.matlabCodegenIsDeleted = false;
    delay_brake_DW.obj_jd.isInitialized = 1;
    for (i = 0; i < 30; i++) {
      delay_brake_B.b_zeroDelimTopic[i] = tmp_3[i];
    }

    delay_brake_B.b_zeroDelimTopic[30] = '\x00';
    Pub_delay_brake_520.createPublisher(&delay_brake_B.b_zeroDelimTopic[0], 1);
    delay_brake_DW.obj_jd.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S5>/SinkBlock'
    // End of SystemInitialize for SubSystem: '<Root>/Publish2'

    // SystemInitialize for Atomic SubSystem: '<Root>/Subscribe7'
    // Start for MATLABSystem: '<S10>/SourceBlock'
    delay_brake_DW.obj_d.matlabCodegenIsDeleted = false;
    delay_brake_DW.obj_d.isInitialized = 1;
    for (i = 0; i < 24; i++) {
      delay_brake_B.b_zeroDelimTopic_m[i] = tmp_4[i];
    }

    delay_brake_B.b_zeroDelimTopic_m[24] = '\x00';
    Sub_delay_brake_481.createSubscriber(&delay_brake_B.b_zeroDelimTopic_m[0], 1);
    delay_brake_DW.obj_d.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S10>/SourceBlock'
    // End of SystemInitialize for SubSystem: '<Root>/Subscribe7'

    // Start for MATLABSystem: '<S11>/Get Parameter1'
    delay_brake_DW.obj_n.matlabCodegenIsDeleted = false;
    delay_brake_DW.obj_n.isInitialized = 1;
    for (i = 0; i < 5; i++) {
      b_zeroDelimName[i] = tmp_5[i];
    }

    b_zeroDelimName[5] = '\x00';
    ParamGet_delay_brake_447.initialize(&b_zeroDelimName[0]);
    ParamGet_delay_brake_447.initialize_error_codes(0, 1, 2, 3);
    ParamGet_delay_brake_447.set_initial_value(-3.0);
    delay_brake_DW.obj_n.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S11>/Get Parameter1'

    // Start for MATLABSystem: '<S11>/Get Parameter3'
    delay_brake_DW.obj_i.matlabCodegenIsDeleted = false;
    delay_brake_DW.obj_i.isInitialized = 1;
    for (i = 0; i < 7; i++) {
      b_zeroDelimTopic_1[i] = tmp_6[i];
    }

    b_zeroDelimTopic_1[7] = '\x00';
    ParamGet_delay_brake_449.initialize(&b_zeroDelimTopic_1[0]);
    ParamGet_delay_brake_449.initialize_error_codes(0, 1, 2, 3);
    ParamGet_delay_brake_449.set_initial_value(-3.0);
    delay_brake_DW.obj_i.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S11>/Get Parameter3'

    // Start for MATLABSystem: '<S11>/Get Parameter4'
    delay_brake_DW.obj_k.matlabCodegenIsDeleted = false;
    delay_brake_DW.obj_k.isInitialized = 1;
    for (i = 0; i < 5; i++) {
      b_zeroDelimName[i] = tmp_7[i];
    }

    b_zeroDelimName[5] = '\x00';
    ParamGet_delay_brake_450.initialize(&b_zeroDelimName[0]);
    ParamGet_delay_brake_450.initialize_error_codes(0, 1, 2, 3);
    ParamGet_delay_brake_450.set_initial_value(0.2);
    delay_brake_DW.obj_k.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S11>/Get Parameter4'

    // Start for MATLABSystem: '<S11>/Get Parameter5'
    delay_brake_DW.obj_e.matlabCodegenIsDeleted = false;
    delay_brake_DW.obj_e.isInitialized = 1;
    for (i = 0; i < 5; i++) {
      b_zeroDelimName[i] = tmp_8[i];
    }

    b_zeroDelimName[5] = '\x00';
    ParamGet_delay_brake_463.initialize(&b_zeroDelimName[0]);
    ParamGet_delay_brake_463.initialize_error_codes(0, 1, 2, 3);
    ParamGet_delay_brake_463.set_initial_value(2.0);
    delay_brake_DW.obj_e.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S11>/Get Parameter5'

    // Start for MATLABSystem: '<S11>/Get Parameter2'
    delay_brake_DW.obj_p.matlabCodegenIsDeleted = false;
    delay_brake_DW.obj_p.isInitialized = 1;
    for (i = 0; i < 5; i++) {
      b_zeroDelimName[i] = tmp_9[i];
    }

    b_zeroDelimName[5] = '\x00';
    ParamGet_delay_brake_448.initialize(&b_zeroDelimName[0]);
    ParamGet_delay_brake_448.initialize_error_codes(0, 1, 2, 3);
    ParamGet_delay_brake_448.set_initial_value(15.0);
    delay_brake_DW.obj_p.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S11>/Get Parameter2'

    // Start for MATLABSystem: '<S11>/Get Parameter7'
    delay_brake_DW.obj.matlabCodegenIsDeleted = false;
    delay_brake_DW.obj.isInitialized = 1;
    for (i = 0; i < 6; i++) {
      b_zeroDelimName_0[i] = tmp_a[i];
    }

    b_zeroDelimName_0[6] = '\x00';
    ParamGet_delay_brake_529.initialize(&b_zeroDelimName_0[0]);
    ParamGet_delay_brake_529.initialize_error_codes(0, 1, 2, 3);
    ParamGet_delay_brake_529.set_initial_value(true);
    delay_brake_DW.obj.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S11>/Get Parameter7'

    // Start for MATLABSystem: '<S11>/Get Parameter6'
    delay_brake_DW.obj_j.matlabCodegenIsDeleted = false;
    delay_brake_DW.obj_j.isInitialized = 1;
    b_zeroDelimName_1[0] = 'w';
    b_zeroDelimName_1[1] = '3';
    b_zeroDelimName_1[2] = '\x00';
    ParamGet_delay_brake_465.initialize(&b_zeroDelimName_1[0]);
    ParamGet_delay_brake_465.initialize_error_codes(0, 1, 2, 3);
    ParamGet_delay_brake_465.set_initial_value(6.0);
    delay_brake_DW.obj_j.isSetupComplete = true;
  }
}

// Model terminate function
void delay_brake_terminate(void)
{
  // Terminate for Atomic SubSystem: '<Root>/Subscribe6'
  // Terminate for MATLABSystem: '<S9>/SourceBlock'
  if (!delay_brake_DW.obj_n0.matlabCodegenIsDeleted) {
    delay_brake_DW.obj_n0.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S9>/SourceBlock'
  // End of Terminate for SubSystem: '<Root>/Subscribe6'

  // Terminate for Atomic SubSystem: '<Root>/Subscribe'
  // Terminate for MATLABSystem: '<S6>/SourceBlock'
  if (!delay_brake_DW.obj_f.matlabCodegenIsDeleted) {
    delay_brake_DW.obj_f.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S6>/SourceBlock'
  // End of Terminate for SubSystem: '<Root>/Subscribe'

  // Terminate for Atomic SubSystem: '<Root>/Subscribe4'
  // Terminate for MATLABSystem: '<S7>/SourceBlock'
  if (!delay_brake_DW.obj_o.matlabCodegenIsDeleted) {
    delay_brake_DW.obj_o.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S7>/SourceBlock'
  // End of Terminate for SubSystem: '<Root>/Subscribe4'

  // Terminate for Atomic SubSystem: '<Root>/Subscribe5'
  // Terminate for MATLABSystem: '<S8>/SourceBlock'
  if (!delay_brake_DW.obj_is.matlabCodegenIsDeleted) {
    delay_brake_DW.obj_is.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S8>/SourceBlock'
  // End of Terminate for SubSystem: '<Root>/Subscribe5'

  // Terminate for MATLABSystem: '<S11>/Get Parameter1'
  if (!delay_brake_DW.obj_n.matlabCodegenIsDeleted) {
    delay_brake_DW.obj_n.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S11>/Get Parameter1'

  // Terminate for MATLABSystem: '<S11>/Get Parameter3'
  if (!delay_brake_DW.obj_i.matlabCodegenIsDeleted) {
    delay_brake_DW.obj_i.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S11>/Get Parameter3'

  // Terminate for MATLABSystem: '<S11>/Get Parameter4'
  if (!delay_brake_DW.obj_k.matlabCodegenIsDeleted) {
    delay_brake_DW.obj_k.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S11>/Get Parameter4'

  // Terminate for MATLABSystem: '<S11>/Get Parameter5'
  if (!delay_brake_DW.obj_e.matlabCodegenIsDeleted) {
    delay_brake_DW.obj_e.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S11>/Get Parameter5'

  // Terminate for MATLABSystem: '<S11>/Get Parameter2'
  if (!delay_brake_DW.obj_p.matlabCodegenIsDeleted) {
    delay_brake_DW.obj_p.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S11>/Get Parameter2'

  // Terminate for MATLABSystem: '<S11>/Get Parameter7'
  if (!delay_brake_DW.obj.matlabCodegenIsDeleted) {
    delay_brake_DW.obj.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S11>/Get Parameter7'

  // Terminate for Atomic SubSystem: '<Root>/Publish1'
  // Terminate for MATLABSystem: '<S4>/SinkBlock'
  if (!delay_brake_DW.obj_c.matlabCodegenIsDeleted) {
    delay_brake_DW.obj_c.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S4>/SinkBlock'
  // End of Terminate for SubSystem: '<Root>/Publish1'

  // Terminate for Atomic SubSystem: '<Root>/Publish2'
  // Terminate for MATLABSystem: '<S5>/SinkBlock'
  if (!delay_brake_DW.obj_jd.matlabCodegenIsDeleted) {
    delay_brake_DW.obj_jd.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S5>/SinkBlock'
  // End of Terminate for SubSystem: '<Root>/Publish2'

  // Terminate for MATLABSystem: '<S11>/Get Parameter6'
  if (!delay_brake_DW.obj_j.matlabCodegenIsDeleted) {
    delay_brake_DW.obj_j.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S11>/Get Parameter6'

  // Terminate for Atomic SubSystem: '<Root>/Subscribe7'
  // Terminate for MATLABSystem: '<S10>/SourceBlock'
  if (!delay_brake_DW.obj_d.matlabCodegenIsDeleted) {
    delay_brake_DW.obj_d.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S10>/SourceBlock'
  // End of Terminate for SubSystem: '<Root>/Subscribe7'
}

//
// File trailer for generated code.
//
// [EOF]
//

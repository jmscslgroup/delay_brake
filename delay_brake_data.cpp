//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: delay_brake_data.cpp
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

// Block parameters (default storage)
P_delay_brake_T delay_brake_P = {
  // Computed Parameter: Constant_Value
  //  Referenced by: '<S2>/Constant'

  {
    {
      0.0,                             // X
      0.0,                             // Y
      0.0                              // Z
    },                                 // Linear

    {
      0.0,                             // X
      0.0,                             // Y
      0.0                              // Z
    }                                  // Angular
  },

  // Computed Parameter: Out1_Y0
  //  Referenced by: '<S13>/Out1'

  {
    {
      0.0,                             // X
      0.0,                             // Y
      0.0                              // Z
    },                                 // Linear

    {
      0.0,                             // X
      0.0,                             // Y
      0.0                              // Z
    }                                  // Angular
  },

  // Computed Parameter: Constant_Value_p
  //  Referenced by: '<S7>/Constant'

  {
    {
      0.0,                             // X
      0.0,                             // Y
      0.0                              // Z
    },                                 // Linear

    {
      0.0,                             // X
      0.0,                             // Y
      0.0                              // Z
    }                                  // Angular
  },

  // Computed Parameter: Out1_Y0_k
  //  Referenced by: '<S14>/Out1'

  {
    {
      0.0,                             // X
      0.0,                             // Y
      0.0                              // Z
    },                                 // Linear

    {
      0.0,                             // X
      0.0,                             // Y
      0.0                              // Z
    }                                  // Angular
  },

  // Computed Parameter: Constant_Value_pq
  //  Referenced by: '<S8>/Constant'

  {
    {
      0.0,                             // X
      0.0,                             // Y
      0.0                              // Z
    },                                 // Linear

    {
      0.0,                             // X
      0.0,                             // Y
      0.0                              // Z
    }                                  // Angular
  },

  // Computed Parameter: Out1_Y0_o
  //  Referenced by: '<S16>/Out1'

  {
    false                              // Data
  },

  // Computed Parameter: Constant_Value_o
  //  Referenced by: '<S10>/Constant'

  {
    false                              // Data
  },

  // Computed Parameter: Constant_Value_m
  //  Referenced by: '<S1>/Constant'

  {
    0.0                                // Data
  },

  // Computed Parameter: Out1_Y0_f
  //  Referenced by: '<S12>/Out1'

  {
    0.0                                // Data
  },

  // Computed Parameter: Constant_Value_k
  //  Referenced by: '<S6>/Constant'

  {
    0.0                                // Data
  },

  // Computed Parameter: Out1_Y0_a
  //  Referenced by: '<S15>/Out1'

  {
    0.0                                // Data
  },

  // Computed Parameter: Constant_Value_a
  //  Referenced by: '<S9>/Constant'

  {
    0.0                                // Data
  },

  // Expression: 1.0
  //  Referenced by: '<Root>/Constant2'

  1.0,

  // Expression: 0.5
  //  Referenced by: '<Root>/Switch'

  0.5,

  // Expression: 1.5
  //  Referenced by: '<Root>/min//max -3.0//1.5'

  1.5,

  // Expression: -3.0
  //  Referenced by: '<Root>/min//max -3.0//1.5'

  -3.0,

  // Expression: 5
  //  Referenced by: '<Root>/Constant1'

  5.0
};

//
// File trailer for generated code.
//
// [EOF]
//

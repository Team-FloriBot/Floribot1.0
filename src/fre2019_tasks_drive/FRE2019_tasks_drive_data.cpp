//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: FRE2019_tasks_drive_data.cpp
//
// Code generated for Simulink model 'FRE2019_tasks_drive'.
//
// Model version                  : 1.44
// Simulink Coder version         : 9.0 (R2018b) 24-May-2018
// C/C++ source code generated on : Thu Jun 20 10:16:57 2019
//
// Target selection: ert.tlc
// Embedded hardware selection: Generic->Unspecified (assume 32-bit Generic)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#include "FRE2019_tasks_drive.h"
#include "FRE2019_tasks_drive_private.h"

// Block parameters (default storage)
P_FRE2019_tasks_drive_T FRE2019_tasks_drive_P = {
  // Variable: safety_threshold
  //  Referenced by:
  //    '<S16>/Prevent div 1'
  //    '<S16>/Prevent div 2'
  //    '<S17>/Prevent div 1'
  //    '<S17>/Prevent div 2'

  0.5,

  // Variable: scan_box_height
  //  Referenced by: '<S17>/scan_box_height//2'

  1.0,

  // Variable: scan_box_height_headland
  //  Referenced by: '<S16>/scan_box_height//2'

  1.4,

  // Variable: scan_box_width
  //  Referenced by:
  //    '<S17>/const2'
  //    '<S17>/const3'

  0.75,

  // Variable: scan_box_width_headland
  //  Referenced by:
  //    '<S16>/const2'
  //    '<S16>/const3'

  1.25,

  // Mask Parameter: Ramp_InitialOutput
  //  Referenced by: '<S35>/Constant1'

  0.0,

  // Mask Parameter: Ramp_slope
  //  Referenced by: '<S35>/Step'

  0.25,

  // Mask Parameter: Ramp_start
  //  Referenced by:
  //    '<S35>/Constant'
  //    '<S35>/Step'

  0.0,

  // Computed Parameter: Out1_Y0
  //  Referenced by: '<S23>/Out1'

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

  // Computed Parameter: Constant_Value
  //  Referenced by: '<S3>/Constant'

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

  // Computed Parameter: Constant_Value_d
  //  Referenced by: '<S1>/Constant'

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

  // Computed Parameter: Out1_Y0_a
  //  Referenced by: '<S24>/Out1'

  {
    false                              // Data
  },

  // Computed Parameter: Constant_Value_e
  //  Referenced by: '<S4>/Constant'

  {
    false                              // Data
  },

  // Computed Parameter: Out1_Y0_ac
  //  Referenced by: '<S25>/Out1'

  {
    false                              // Data
  },

  // Computed Parameter: Constant_Value_p
  //  Referenced by: '<S5>/Constant'

  {
    false                              // Data
  },

  // Computed Parameter: Out1_Y0_k
  //  Referenced by: '<S26>/Out1'

  {
    false                              // Data
  },

  // Computed Parameter: Constant_Value_e1
  //  Referenced by: '<S6>/Constant'

  {
    false                              // Data
  },

  // Computed Parameter: Out1_Y0_e
  //  Referenced by: '<S27>/Out1'

  {
    false                              // Data
  },

  // Computed Parameter: Constant_Value_pr
  //  Referenced by: '<S7>/Constant'

  {
    false                              // Data
  },

  // Computed Parameter: Out1_Y0_f
  //  Referenced by: '<S29>/Out1'

  {
    false                              // Data
  },

  // Computed Parameter: Constant_Value_l
  //  Referenced by: '<S9>/Constant'

  {
    false                              // Data
  },

  // Computed Parameter: Out1_Y0_d
  //  Referenced by: '<S31>/Out1'

  {
    false                              // Data
  },

  // Computed Parameter: Constant_Value_j
  //  Referenced by: '<S11>/Constant'

  {
    false                              // Data
  },

  // Computed Parameter: Out1_Y0_k5
  //  Referenced by: '<S33>/Out1'

  {
    false                              // Data
  },

  // Computed Parameter: Constant_Value_h
  //  Referenced by: '<S13>/Constant'

  {
    false                              // Data
  },

  // Computed Parameter: Out1_Y0_g
  //  Referenced by: '<S28>/Out1'

  {
    0.0                                // Data
  },

  // Computed Parameter: Constant_Value_i
  //  Referenced by: '<S8>/Constant'

  {
    0.0                                // Data
  },

  // Computed Parameter: Out1_Y0_n
  //  Referenced by: '<S30>/Out1'

  {
    0.0                                // Data
  },

  // Computed Parameter: Constant_Value_ep
  //  Referenced by: '<S10>/Constant'

  {
    0.0                                // Data
  },

  // Computed Parameter: Out1_Y0_h
  //  Referenced by: '<S32>/Out1'

  {
    0.0                                // Data
  },

  // Computed Parameter: Constant_Value_b
  //  Referenced by: '<S12>/Constant'

  {
    0.0                                // Data
  },

  // Computed Parameter: Out1_Y0_ex
  //  Referenced by: '<S34>/Out1'

  {
    0.0                                // Data
  },

  // Computed Parameter: Constant_Value_o
  //  Referenced by: '<S14>/Constant'

  {
    0.0                                // Data
  },

  // Expression: 0
  //  Referenced by: '<S35>/Step'

  0.0,

  // Expression: 0.5
  //  Referenced by: '<S15>/Saturation'

  0.5,

  // Expression: 0
  //  Referenced by: '<S15>/Saturation'

  0.0,

  // Expression: 0
  //  Referenced by: '<S15>/Rotations- geschwindigkeit'

  0.0,

  // Expression: 1
  //  Referenced by: '<S16>/gain'

  1.0,

  // Expression: 1
  //  Referenced by: '<S16>/Constant'

  1.0,

  // Expression: 2
  //  Referenced by: '<S16>/const1'

  2.0,

  // Expression: 1
  //  Referenced by: '<S16>/cmd_vel_x_max'

  1.0,

  // Expression: 0.3
  //  Referenced by: '<S16>/secure_slow'

  0.3,

  // Expression: pi
  //  Referenced by: '<S16>/cmd_vel_yaw_max'

  3.1415926535897931,

  // Expression: 0.3
  //  Referenced by: '<S16>/secure_slow1'

  0.3,

  // Expression: 1
  //  Referenced by: '<S17>/gain'

  1.0,

  // Expression: 1
  //  Referenced by: '<S17>/Constant'

  1.0,

  // Expression: 2
  //  Referenced by: '<S17>/const1'

  2.0,

  // Expression: 1
  //  Referenced by: '<S17>/cmd_vel_x_max'

  1.0,

  // Expression: 0.3
  //  Referenced by: '<S17>/secure_slow'

  0.3,

  // Expression: pi
  //  Referenced by: '<S17>/cmd_vel_yaw_max'

  3.1415926535897931,

  // Expression: 0.68
  //  Referenced by: '<S17>/secure_slow1'

  0.68,

  // Expression: 0
  //  Referenced by: '<S20>/Rotations- geschwindigkeit'

  0.0,

  // Expression: 0.5
  //  Referenced by: '<S20>/Translations- geschwindigkeit'

  0.5,

  // Expression: 90
  //  Referenced by: '<S21>/Drehwinkel'

  90.0,

  // Expression: pi/180
  //  Referenced by: '<S36>/Gain1'

  0.017453292519943295,

  // Expression: 0.35
  //  Referenced by: '<S21>/Kurvenradius'

  0.35,

  // Expression: 90
  //  Referenced by: '<S22>/Drehwinkel'

  90.0,

  // Expression: pi/180
  //  Referenced by: '<S37>/Gain1'

  0.017453292519943295,

  // Expression: 0.35
  //  Referenced by: '<S22>/Kurvenradius'

  0.35,

  // Expression: -1
  //  Referenced by: '<S22>/Gain'

  -1.0,

  // Expression: 3
  //  Referenced by: '<Root>/Drehwinkel'

  3.0,

  // Expression: 3
  //  Referenced by: '<Root>/Drehwinkel1'

  3.0,

  // Computed Parameter: Merge_InitialOutput
  //  Referenced by: '<Root>/Merge'

  0.0
};

//
// File trailer for generated code.
//
// [EOF]
//

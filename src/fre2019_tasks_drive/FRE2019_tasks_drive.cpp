//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: FRE2019_tasks_drive.cpp
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

// Block signals (default storage)
B_FRE2019_tasks_drive_T FRE2019_tasks_drive_B;

// Block states (default storage)
DW_FRE2019_tasks_drive_T FRE2019_tasks_drive_DW;

// Real-time model
RT_MODEL_FRE2019_tasks_drive_T FRE2019_tasks_drive_M_;
RT_MODEL_FRE2019_tasks_drive_T *const FRE2019_tasks_drive_M =
  &FRE2019_tasks_drive_M_;

// Forward declaration for local functions
static void matlabCodegenHandle_matlabCod_f(robotics_slros_internal_blo_f_T *obj);
static void matlabCodegenHandle_matlabCodeg(robotics_slros_internal_block_T *obj);
real_T rt_atan2d_snf_cordic11(real_T u0, real_T u1)
{
  real_T y;
  real_T xAcc;
  real_T yAcc;
  boolean_T y_quad_adjust;
  boolean_T y_nonzero;
  boolean_T x_quad_adjust;
  real_T xtmp;
  real_T ytmp;
  int16_T idx;
  int32_T idx_0;
  static const real_T atan2_cordicLUT_n11_d[11] = { 0.78539816339744828,
    0.46364760900080609, 0.24497866312686414, 0.12435499454676144,
    0.06241880999595735, 0.031239833430268277, 0.015623728620476831,
    0.0078123410601011111, 0.0039062301319669718, 0.0019531225164788188,
    0.00097656218955931946 };

  const real_T *u3;
  u3 = &atan2_cordicLUT_n11_d[0];
  if (u0 < 0.0) {
    yAcc = -u0;
    y_quad_adjust = true;
    y_nonzero = true;
  } else {
    yAcc = u0;
    y_quad_adjust = false;
    y_nonzero = (u0 > 0.0);
  }

  if (u1 < 0.0) {
    xAcc = -u1;
    x_quad_adjust = true;
  } else {
    xAcc = u1;
    x_quad_adjust = false;
  }

  y = 0.0;
  xtmp = xAcc;
  ytmp = yAcc;
  for (idx_0 = 0; idx_0 < 11; idx_0++) {
    idx = (int16_T)(1 + idx_0);
    if (yAcc < 0.0) {
      xAcc -= ytmp;
      yAcc += xtmp;
      y -= u3[idx - 1];
    } else {
      xAcc += ytmp;
      yAcc -= xtmp;
      y += u3[idx - 1];
    }

    xtmp = ldexp(xAcc, -idx);
    ytmp = ldexp(yAcc, -idx);
  }

  if (y_nonzero) {
    if (x_quad_adjust) {
      if (y_quad_adjust) {
        y -= 3.1415926535897931;
      } else {
        y = 3.1415926535897931 - y;
      }
    } else {
      if (y_quad_adjust) {
        y = -y;
      }
    }
  } else if (x_quad_adjust) {
    y = 3.1415926535897931;
  } else {
    y = 0.0;
  }

  return y;
}

static void matlabCodegenHandle_matlabCod_f(robotics_slros_internal_blo_f_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
  }
}

static void matlabCodegenHandle_matlabCodeg(robotics_slros_internal_block_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
  }
}

// Model step function
void FRE2019_tasks_drive_step(void)
{
  boolean_T b_varargout_1;
  SL_Bus_FRE2019_tasks_drive_std_msgs_Bool b_varargout_2;
  real_T rtb_Preventdiv2;

  // Outputs for Atomic SubSystem: '<Root>/Subscribe3'
  // MATLABSystem: '<S8>/SourceBlock' incorporates:
  //   Inport: '<S28>/In1'

  b_varargout_1 = Sub_FRE2019_tasks_drive_112.getLatestMessage
    (&FRE2019_tasks_drive_B.b_varargout_2);

  // Outputs for Enabled SubSystem: '<S8>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S28>/Enable'

  if (b_varargout_1) {
    FRE2019_tasks_drive_B.In1_k = FRE2019_tasks_drive_B.b_varargout_2;
  }

  // End of MATLABSystem: '<S8>/SourceBlock'
  // End of Outputs for SubSystem: '<S8>/Enabled Subsystem'
  // End of Outputs for SubSystem: '<Root>/Subscribe3'

  // Outputs for Atomic SubSystem: '<Root>/Subscribe9'
  // MATLABSystem: '<S14>/SourceBlock' incorporates:
  //   Inport: '<S34>/In1'

  b_varargout_1 = Sub_FRE2019_tasks_drive_119.getLatestMessage
    (&FRE2019_tasks_drive_B.b_varargout_2);

  // Outputs for Enabled SubSystem: '<S14>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S34>/Enable'

  if (b_varargout_1) {
    FRE2019_tasks_drive_B.In1_d = FRE2019_tasks_drive_B.b_varargout_2;
  }

  // End of MATLABSystem: '<S14>/SourceBlock'
  // End of Outputs for SubSystem: '<S14>/Enabled Subsystem'
  // End of Outputs for SubSystem: '<Root>/Subscribe9'

  // Outputs for Atomic SubSystem: '<Root>/Subscribe5'
  // MATLABSystem: '<S10>/SourceBlock' incorporates:
  //   Inport: '<S30>/In1'

  b_varargout_1 = Sub_FRE2019_tasks_drive_113.getLatestMessage
    (&FRE2019_tasks_drive_B.b_varargout_2);

  // Outputs for Enabled SubSystem: '<S10>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S30>/Enable'

  if (b_varargout_1) {
    FRE2019_tasks_drive_B.In1_i = FRE2019_tasks_drive_B.b_varargout_2;
  }

  // End of MATLABSystem: '<S10>/SourceBlock'
  // End of Outputs for SubSystem: '<S10>/Enabled Subsystem'
  // End of Outputs for SubSystem: '<Root>/Subscribe5'

  // Outputs for Atomic SubSystem: '<Root>/Subscribe7'
  // MATLABSystem: '<S12>/SourceBlock' incorporates:
  //   Inport: '<S32>/In1'

  b_varargout_1 = Sub_FRE2019_tasks_drive_118.getLatestMessage
    (&FRE2019_tasks_drive_B.b_varargout_2);

  // Outputs for Enabled SubSystem: '<S12>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S32>/Enable'

  if (b_varargout_1) {
    FRE2019_tasks_drive_B.In1_p = FRE2019_tasks_drive_B.b_varargout_2;
  }

  // End of MATLABSystem: '<S12>/SourceBlock'
  // End of Outputs for SubSystem: '<S12>/Enabled Subsystem'
  // End of Outputs for SubSystem: '<Root>/Subscribe7'

  // Outputs for Atomic SubSystem: '<Root>/Subscribe4'
  // MATLABSystem: '<S9>/SourceBlock' incorporates:
  //   Inport: '<S29>/In1'

  b_varargout_1 = Sub_FRE2019_tasks_drive_133.getLatestMessage(&b_varargout_2);

  // Outputs for Enabled SubSystem: '<S9>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S29>/Enable'

  if (b_varargout_1) {
    FRE2019_tasks_drive_B.In1_m = b_varargout_2;
  }

  // End of MATLABSystem: '<S9>/SourceBlock'
  // End of Outputs for SubSystem: '<S9>/Enabled Subsystem'
  // End of Outputs for SubSystem: '<Root>/Subscribe4'

  // Outputs for Enabled SubSystem: '<Root>/in row' incorporates:
  //   EnablePort: '<S17>/Enable'

  if (FRE2019_tasks_drive_B.In1_m.Data) {
    // Switch: '<S17>/Prevent div 1' incorporates:
    //   Constant: '<S17>/const2'

    if (FRE2019_tasks_drive_B.In1_d.Data >=
        FRE2019_tasks_drive_P.safety_threshold) {
      FRE2019_tasks_drive_B.Gain1 = FRE2019_tasks_drive_B.In1_k.Data;
    } else {
      FRE2019_tasks_drive_B.Gain1 = -FRE2019_tasks_drive_P.scan_box_width / 2.0
        - 0.1;
    }

    // End of Switch: '<S17>/Prevent div 1'

    // Switch: '<S17>/Prevent div 2' incorporates:
    //   Constant: '<S17>/const3'

    if (FRE2019_tasks_drive_B.In1_p.Data >=
        FRE2019_tasks_drive_P.safety_threshold) {
      rtb_Preventdiv2 = FRE2019_tasks_drive_B.In1_i.Data;
    } else {
      rtb_Preventdiv2 = FRE2019_tasks_drive_P.scan_box_width / 2.0 + 0.1;
    }

    // End of Switch: '<S17>/Prevent div 2'

    // Trigonometry: '<S17>/Trigonometric Function2' incorporates:
    //   Constant: '<S17>/const1'
    //   Constant: '<S17>/scan_box_height//2'
    //   Product: '<S17>/Divide'
    //   Sum: '<S17>/Subtract'
    //   Sum: '<S17>/Subtract1'

    FRE2019_tasks_drive_B.TrigonometricFunction2 = rt_atan2d_snf_cordic11
      (rtb_Preventdiv2 - (rtb_Preventdiv2 - FRE2019_tasks_drive_B.Gain1) /
       FRE2019_tasks_drive_P.const1_Value_o,
       FRE2019_tasks_drive_P.scan_box_height / 2.0);

    // Product: '<S17>/Product' incorporates:
    //   Abs: '<S17>/Abs'
    //   Constant: '<S17>/Constant'
    //   Gain: '<S17>/cmd_vel_x_max'
    //   Gain: '<S17>/gain'
    //   Gain: '<S17>/secure_slow'
    //   Sum: '<S17>/Add'
    //   Sum: '<S17>/Subtract2'
    //   Trigonometry: '<S17>/Trigonometric Function'

    FRE2019_tasks_drive_B.Merge[0] = (FRE2019_tasks_drive_P.Constant_Value_dd -
      fabs(FRE2019_tasks_drive_B.Gain1 + rtb_Preventdiv2) *
      FRE2019_tasks_drive_P.gain_Gain_i) *
      (FRE2019_tasks_drive_P.cmd_vel_x_max_Gain_l * cos
       (FRE2019_tasks_drive_B.TrigonometricFunction2) *
       FRE2019_tasks_drive_P.secure_slow_Gain_l);

    // Gain: '<S17>/secure_slow1' incorporates:
    //   Gain: '<S17>/cmd_vel_yaw_max'
    //   Trigonometry: '<S17>/Trigonometric Function1'

    FRE2019_tasks_drive_B.Merge[1] =
      FRE2019_tasks_drive_P.cmd_vel_yaw_max_Gain_j * sin
      (FRE2019_tasks_drive_B.TrigonometricFunction2) *
      FRE2019_tasks_drive_P.secure_slow1_Gain_m;
  }

  // End of Outputs for SubSystem: '<Root>/in row'

  // Outputs for Atomic SubSystem: '<Root>/Subscribe2'
  // MATLABSystem: '<S7>/SourceBlock' incorporates:
  //   Inport: '<S27>/In1'

  b_varargout_1 = Sub_FRE2019_tasks_drive_126.getLatestMessage(&b_varargout_2);

  // Outputs for Enabled SubSystem: '<S7>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S27>/Enable'

  if (b_varargout_1) {
    FRE2019_tasks_drive_B.In1_j = b_varargout_2;
  }

  // End of MATLABSystem: '<S7>/SourceBlock'
  // End of Outputs for SubSystem: '<S7>/Enabled Subsystem'
  // End of Outputs for SubSystem: '<Root>/Subscribe2'

  // Outputs for Enabled SubSystem: '<Root>/headlands' incorporates:
  //   EnablePort: '<S16>/Enable'

  if (FRE2019_tasks_drive_B.In1_j.Data) {
    // Switch: '<S16>/Prevent div 1' incorporates:
    //   Constant: '<S16>/const2'

    if (FRE2019_tasks_drive_B.In1_d.Data >=
        FRE2019_tasks_drive_P.safety_threshold) {
      FRE2019_tasks_drive_B.TrigonometricFunction2 =
        FRE2019_tasks_drive_B.In1_k.Data;
    } else {
      FRE2019_tasks_drive_B.TrigonometricFunction2 =
        -FRE2019_tasks_drive_P.scan_box_width_headland / 2.0 - 0.1;
    }

    // End of Switch: '<S16>/Prevent div 1'

    // Switch: '<S16>/Prevent div 2' incorporates:
    //   Constant: '<S16>/const3'

    if (FRE2019_tasks_drive_B.In1_p.Data >=
        FRE2019_tasks_drive_P.safety_threshold) {
      rtb_Preventdiv2 = FRE2019_tasks_drive_B.In1_i.Data;
    } else {
      rtb_Preventdiv2 = FRE2019_tasks_drive_P.scan_box_width_headland / 2.0 +
        0.3;
    }

    // End of Switch: '<S16>/Prevent div 2'

    // Abs: '<S16>/Abs' incorporates:
    //   Sum: '<S16>/Subtract2'

    FRE2019_tasks_drive_B.Gain1 = fabs
      (FRE2019_tasks_drive_B.TrigonometricFunction2 + rtb_Preventdiv2);

    // Trigonometry: '<S16>/Trigonometric Function2' incorporates:
    //   Constant: '<S16>/const1'
    //   Constant: '<S16>/scan_box_height//2'
    //   Product: '<S16>/Divide'
    //   Sum: '<S16>/Subtract'
    //   Sum: '<S16>/Subtract1'

    FRE2019_tasks_drive_B.TrigonometricFunction2 = rt_atan2d_snf_cordic11
      (rtb_Preventdiv2 - (rtb_Preventdiv2 -
                          FRE2019_tasks_drive_B.TrigonometricFunction2) /
       FRE2019_tasks_drive_P.const1_Value,
       FRE2019_tasks_drive_P.scan_box_height_headland / 2.0 + 0.1);

    // Product: '<S16>/Product' incorporates:
    //   Constant: '<S16>/Constant'
    //   Gain: '<S16>/cmd_vel_x_max'
    //   Gain: '<S16>/gain'
    //   Gain: '<S16>/secure_slow'
    //   Sum: '<S16>/Add'
    //   Trigonometry: '<S16>/Trigonometric Function'

    FRE2019_tasks_drive_B.Merge[0] = FRE2019_tasks_drive_P.cmd_vel_x_max_Gain *
      cos(FRE2019_tasks_drive_B.TrigonometricFunction2) *
      FRE2019_tasks_drive_P.secure_slow_Gain *
      (FRE2019_tasks_drive_P.Constant_Value_g - FRE2019_tasks_drive_P.gain_Gain *
       FRE2019_tasks_drive_B.Gain1);

    // Gain: '<S16>/secure_slow1' incorporates:
    //   Gain: '<S16>/cmd_vel_yaw_max'
    //   Trigonometry: '<S16>/Trigonometric Function1'

    FRE2019_tasks_drive_B.Merge[1] = FRE2019_tasks_drive_P.cmd_vel_yaw_max_Gain *
      sin(FRE2019_tasks_drive_B.TrigonometricFunction2) *
      FRE2019_tasks_drive_P.secure_slow1_Gain;
  }

  // End of Outputs for SubSystem: '<Root>/headlands'

  // Outputs for Atomic SubSystem: '<Root>/Subscribe6'
  // MATLABSystem: '<S11>/SourceBlock' incorporates:
  //   Inport: '<S31>/In1'

  b_varargout_1 = Sub_FRE2019_tasks_drive_136.getLatestMessage(&b_varargout_2);

  // Outputs for Enabled SubSystem: '<S11>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S31>/Enable'

  if (b_varargout_1) {
    FRE2019_tasks_drive_B.In1_l = b_varargout_2;
  }

  // End of MATLABSystem: '<S11>/SourceBlock'
  // End of Outputs for SubSystem: '<S11>/Enabled Subsystem'
  // End of Outputs for SubSystem: '<Root>/Subscribe6'

  // Outputs for Enabled SubSystem: '<Root>/turn left' incorporates:
  //   EnablePort: '<S21>/Enable'

  if (FRE2019_tasks_drive_B.In1_l.Data) {
    // Gain: '<S36>/Gain1' incorporates:
    //   Constant: '<S21>/Drehwinkel'

    FRE2019_tasks_drive_B.Gain1 = FRE2019_tasks_drive_P.Gain1_Gain *
      FRE2019_tasks_drive_P.Drehwinkel_Value;

    // Product: '<S21>/Divide' incorporates:
    //   Constant: '<Root>/Drehwinkel'
    //   Constant: '<S21>/Kurvenradius'
    //   Product: '<S21>/Product'

    FRE2019_tasks_drive_B.Merge[0] = FRE2019_tasks_drive_P.Kurvenradius_Value *
      FRE2019_tasks_drive_B.Gain1 / FRE2019_tasks_drive_P.Drehwinkel_Value_j;

    // Product: '<S21>/Divide1' incorporates:
    //   Constant: '<Root>/Drehwinkel'

    FRE2019_tasks_drive_B.Merge[1] = FRE2019_tasks_drive_B.Gain1 /
      FRE2019_tasks_drive_P.Drehwinkel_Value_j;
  }

  // End of Outputs for SubSystem: '<Root>/turn left'

  // Outputs for Atomic SubSystem: '<Root>/Subscribe8'
  // MATLABSystem: '<S13>/SourceBlock' incorporates:
  //   Inport: '<S33>/In1'

  b_varargout_1 = Sub_FRE2019_tasks_drive_139.getLatestMessage(&b_varargout_2);

  // Outputs for Enabled SubSystem: '<S13>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S33>/Enable'

  if (b_varargout_1) {
    FRE2019_tasks_drive_B.In1_kg = b_varargout_2;
  }

  // End of MATLABSystem: '<S13>/SourceBlock'
  // End of Outputs for SubSystem: '<S13>/Enabled Subsystem'
  // End of Outputs for SubSystem: '<Root>/Subscribe8'

  // Outputs for Enabled SubSystem: '<Root>/turn right' incorporates:
  //   EnablePort: '<S22>/Enable'

  if (FRE2019_tasks_drive_B.In1_kg.Data) {
    // Gain: '<S37>/Gain1' incorporates:
    //   Constant: '<S22>/Drehwinkel'

    FRE2019_tasks_drive_B.Gain1 = FRE2019_tasks_drive_P.Gain1_Gain_e *
      FRE2019_tasks_drive_P.Drehwinkel_Value_e;

    // Product: '<S22>/Divide' incorporates:
    //   Constant: '<Root>/Drehwinkel1'
    //   Constant: '<S22>/Kurvenradius'
    //   Product: '<S22>/Product'

    FRE2019_tasks_drive_B.Merge[0] = FRE2019_tasks_drive_P.Kurvenradius_Value_e *
      FRE2019_tasks_drive_B.Gain1 / FRE2019_tasks_drive_P.Drehwinkel1_Value;

    // Gain: '<S22>/Gain' incorporates:
    //   Constant: '<Root>/Drehwinkel1'
    //   Product: '<S22>/Divide1'

    FRE2019_tasks_drive_B.Merge[1] = FRE2019_tasks_drive_B.Gain1 /
      FRE2019_tasks_drive_P.Drehwinkel1_Value * FRE2019_tasks_drive_P.Gain_Gain;
  }

  // End of Outputs for SubSystem: '<Root>/turn right'

  // Outputs for Atomic SubSystem: '<Root>/Subscribe10'
  // MATLABSystem: '<S4>/SourceBlock' incorporates:
  //   Inport: '<S24>/In1'

  b_varargout_1 = Sub_FRE2019_tasks_drive_142.getLatestMessage(&b_varargout_2);

  // Outputs for Enabled SubSystem: '<S4>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S24>/Enable'

  if (b_varargout_1) {
    FRE2019_tasks_drive_B.In1_jp = b_varargout_2;
  }

  // End of MATLABSystem: '<S4>/SourceBlock'
  // End of Outputs for SubSystem: '<S4>/Enabled Subsystem'
  // End of Outputs for SubSystem: '<Root>/Subscribe10'

  // Outputs for Enabled SubSystem: '<Root>/straight on' incorporates:
  //   EnablePort: '<S20>/Enable'

  if (FRE2019_tasks_drive_B.In1_jp.Data) {
    // Constant: '<S20>/Rotations- geschwindigkeit'
    FRE2019_tasks_drive_B.Merge[1] =
      FRE2019_tasks_drive_P.Rotationsgeschwindigkeit_Valu_m;

    // Constant: '<S20>/Translations- geschwindigkeit'
    FRE2019_tasks_drive_B.Merge[0] =
      FRE2019_tasks_drive_P.Translationsgeschwindigkeit_Val;
  }

  // End of Outputs for SubSystem: '<Root>/straight on'

  // Outputs for Atomic SubSystem: '<Root>/Subscribe12'
  // MATLABSystem: '<S6>/SourceBlock' incorporates:
  //   Inport: '<S26>/In1'

  b_varargout_1 = Sub_FRE2019_tasks_drive_226.getLatestMessage(&b_varargout_2);

  // Outputs for Enabled SubSystem: '<S6>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S26>/Enable'

  if (b_varargout_1) {
    FRE2019_tasks_drive_B.In1_mb = b_varargout_2;
  }

  // End of MATLABSystem: '<S6>/SourceBlock'
  // End of Outputs for SubSystem: '<S6>/Enabled Subsystem'
  // End of Outputs for SubSystem: '<Root>/Subscribe12'

  // Outputs for Enabled SubSystem: '<Root>/accelerate' incorporates:
  //   EnablePort: '<S15>/Enable'

  if (FRE2019_tasks_drive_B.In1_mb.Data) {
    if (!FRE2019_tasks_drive_DW.accelerate_MODE) {
      FRE2019_tasks_drive_DW.accelerate_MODE = true;
    }
  } else {
    if (FRE2019_tasks_drive_DW.accelerate_MODE) {
      FRE2019_tasks_drive_DW.accelerate_MODE = false;
    }
  }

  if (FRE2019_tasks_drive_DW.accelerate_MODE) {
    // Step: '<S35>/Step'
    FRE2019_tasks_drive_B.Gain1 = FRE2019_tasks_drive_M->Timing.t[0];
    if (FRE2019_tasks_drive_B.Gain1 < FRE2019_tasks_drive_P.Ramp_start) {
      FRE2019_tasks_drive_B.Gain1 = FRE2019_tasks_drive_P.Step_Y0;
    } else {
      FRE2019_tasks_drive_B.Gain1 = FRE2019_tasks_drive_P.Ramp_slope;
    }

    // End of Step: '<S35>/Step'

    // Sum: '<S35>/Output' incorporates:
    //   Clock: '<S35>/Clock'
    //   Constant: '<S35>/Constant'
    //   Constant: '<S35>/Constant1'
    //   Product: '<S35>/Product'
    //   Sum: '<S35>/Sum'

    FRE2019_tasks_drive_B.Gain1 = (FRE2019_tasks_drive_M->Timing.t[0] -
      FRE2019_tasks_drive_P.Ramp_start) * FRE2019_tasks_drive_B.Gain1 +
      FRE2019_tasks_drive_P.Ramp_InitialOutput;

    // Saturate: '<S15>/Saturation'
    if (FRE2019_tasks_drive_B.Gain1 > FRE2019_tasks_drive_P.Saturation_UpperSat)
    {
      FRE2019_tasks_drive_B.Merge[0] = FRE2019_tasks_drive_P.Saturation_UpperSat;
    } else if (FRE2019_tasks_drive_B.Gain1 <
               FRE2019_tasks_drive_P.Saturation_LowerSat) {
      FRE2019_tasks_drive_B.Merge[0] = FRE2019_tasks_drive_P.Saturation_LowerSat;
    } else {
      FRE2019_tasks_drive_B.Merge[0] = FRE2019_tasks_drive_B.Gain1;
    }

    // End of Saturate: '<S15>/Saturation'

    // Constant: '<S15>/Rotations- geschwindigkeit'
    FRE2019_tasks_drive_B.Merge[1] =
      FRE2019_tasks_drive_P.Rotationsgeschwindigkeit_Value;
  }

  // End of Outputs for SubSystem: '<Root>/accelerate'

  // Outputs for Atomic SubSystem: '<Root>/Subscribe1'
  // MATLABSystem: '<S3>/SourceBlock' incorporates:
  //   Inport: '<S23>/In1'

  b_varargout_1 = Sub_FRE2019_tasks_drive_123.getLatestMessage
    (&FRE2019_tasks_drive_B.BusAssignment);

  // Outputs for Enabled SubSystem: '<S3>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S23>/Enable'

  if (b_varargout_1) {
    FRE2019_tasks_drive_B.In1 = FRE2019_tasks_drive_B.BusAssignment;
  }

  // End of MATLABSystem: '<S3>/SourceBlock'
  // End of Outputs for SubSystem: '<S3>/Enabled Subsystem'
  // End of Outputs for SubSystem: '<Root>/Subscribe1'

  // Outputs for Atomic SubSystem: '<Root>/Subscribe11'
  // MATLABSystem: '<S5>/SourceBlock' incorporates:
  //   Inport: '<S25>/In1'

  b_varargout_1 = Sub_FRE2019_tasks_drive_145.getLatestMessage(&b_varargout_2);

  // Outputs for Enabled SubSystem: '<S5>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S25>/Enable'

  if (b_varargout_1) {
    FRE2019_tasks_drive_B.In1_pq = b_varargout_2;
  }

  // End of MATLABSystem: '<S5>/SourceBlock'
  // End of Outputs for SubSystem: '<S5>/Enabled Subsystem'
  // End of Outputs for SubSystem: '<Root>/Subscribe11'

  // Outputs for Enabled SubSystem: '<Root>/manual drive' incorporates:
  //   EnablePort: '<S19>/Enable'

  if (FRE2019_tasks_drive_B.In1_pq.Data) {
    // Inport: '<S19>/lin.x'
    FRE2019_tasks_drive_B.Merge[0] = FRE2019_tasks_drive_B.In1.Linear.X;

    // Inport: '<S19>/ang.z '
    FRE2019_tasks_drive_B.Merge[1] = FRE2019_tasks_drive_B.In1.Angular.Z;
  }

  // End of Outputs for SubSystem: '<Root>/manual drive'

  // BusAssignment: '<Root>/Bus Assignment' incorporates:
  //   Constant: '<S1>/Constant'

  FRE2019_tasks_drive_B.BusAssignment = FRE2019_tasks_drive_P.Constant_Value_d;
  FRE2019_tasks_drive_B.BusAssignment.Linear.X = FRE2019_tasks_drive_B.Merge[0];
  FRE2019_tasks_drive_B.BusAssignment.Angular.Z = FRE2019_tasks_drive_B.Merge[1];

  // Outputs for Atomic SubSystem: '<Root>/Publish'
  // MATLABSystem: '<S2>/SinkBlock'
  Pub_FRE2019_tasks_drive_5.publish(&FRE2019_tasks_drive_B.BusAssignment);

  // End of Outputs for SubSystem: '<Root>/Publish'

  // Update absolute time for base rate
  // The "clockTick0" counts the number of times the code of this task has
  //  been executed. The absolute time is the multiplication of "clockTick0"
  //  and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
  //  overflow during the application lifespan selected.

  FRE2019_tasks_drive_M->Timing.t[0] =
    (++FRE2019_tasks_drive_M->Timing.clockTick0) *
    FRE2019_tasks_drive_M->Timing.stepSize0;

  {
    // Update absolute timer for sample time: [0.05s, 0.0s]
    // The "clockTick1" counts the number of times the code of this task has
    //  been executed. The resolution of this integer timer is 0.05, which is the step size
    //  of the task. Size of "clockTick1" ensures timer will not overflow during the
    //  application lifespan selected.

    FRE2019_tasks_drive_M->Timing.clockTick1++;
  }
}

// Model initialize function
void FRE2019_tasks_drive_initialize(void)
{
  // Registration code

  // initialize real-time model
  (void) memset((void *)FRE2019_tasks_drive_M, 0,
                sizeof(RT_MODEL_FRE2019_tasks_drive_T));

  {
    // Setup solver object
    rtsiSetSimTimeStepPtr(&FRE2019_tasks_drive_M->solverInfo,
                          &FRE2019_tasks_drive_M->Timing.simTimeStep);
    rtsiSetTPtr(&FRE2019_tasks_drive_M->solverInfo, &rtmGetTPtr
                (FRE2019_tasks_drive_M));
    rtsiSetStepSizePtr(&FRE2019_tasks_drive_M->solverInfo,
                       &FRE2019_tasks_drive_M->Timing.stepSize0);
    rtsiSetErrorStatusPtr(&FRE2019_tasks_drive_M->solverInfo,
                          (&rtmGetErrorStatus(FRE2019_tasks_drive_M)));
    rtsiSetRTModelPtr(&FRE2019_tasks_drive_M->solverInfo, FRE2019_tasks_drive_M);
  }

  rtsiSetSimTimeStep(&FRE2019_tasks_drive_M->solverInfo, MAJOR_TIME_STEP);
  rtsiSetSolverName(&FRE2019_tasks_drive_M->solverInfo,"FixedStepDiscrete");
  rtmSetTPtr(FRE2019_tasks_drive_M, &FRE2019_tasks_drive_M->Timing.tArray[0]);
  FRE2019_tasks_drive_M->Timing.stepSize0 = 0.05;

  // block I/O
  (void) memset(((void *) &FRE2019_tasks_drive_B), 0,
                sizeof(B_FRE2019_tasks_drive_T));

  // states (dwork)
  (void) memset((void *)&FRE2019_tasks_drive_DW, 0,
                sizeof(DW_FRE2019_tasks_drive_T));

  {
    static const char_T tmp[8] = { '/', 'c', 'm', 'd', '_', 'v', 'e', 'l' };

    static const char_T tmp_0[18] = { '/', 'l', 'o', 'g', 'i', 'c', '/', 'm',
      'a', 'n', 'u', 'a', 'l', '_', 'm', 'o', 'd', 'e' };

    static const char_T tmp_1[15] = { '/', 't', 'e', 'l', 'e', 'o', 'p', '/',
      'c', 'm', 'd', '_', 'v', 'e', 'l' };

    static const char_T tmp_2[17] = { '/', 'l', 'o', 'g', 'i', 'c', '/', 'a',
      'c', 'c', 'e', 'l', 'e', 'r', 'a', 't', 'e' };

    static const char_T tmp_3[18] = { '/', 'l', 'o', 'g', 'i', 'c', '/', 's',
      't', 'r', 'a', 'i', 'g', 'h', 't', '_', 'o', 'n' };

    static const char_T tmp_4[17] = { '/', 'l', 'o', 'g', 'i', 'c', '/', 'r',
      'i', 'g', 'h', 't', '_', 't', 'u', 'r', 'n' };

    static const char_T tmp_5[16] = { '/', 'l', 'o', 'g', 'i', 'c', '/', 'l',
      'e', 'f', 't', '_', 't', 'u', 'r', 'n' };

    static const char_T tmp_6[18] = { '/', 'l', 'o', 'g', 'i', 'c', '/', 'i',
      'n', '_', 'h', 'e', 'a', 'd', 'l', 'a', 'n', 'd' };

    static const char_T tmp_7[21] = { '/', 'l', 'o', 'g', 'i', 'c', '/', 'i',
      'n', 'b', 'e', 't', 'w', 'e', 'e', 'n', '_', 'r', 'o', 'w', 's' };

    static const char_T tmp_8[16] = { '/', 'r', 'o', 'w', '/', 'l', 'e', 'f',
      't', '_', 's', 'a', 'f', 'e', 't', 'y' };

    static const char_T tmp_9[9] = { '/', 'r', 'o', 'w', '/', 'l', 'e', 'f', 't'
    };

    static const char_T tmp_a[17] = { '/', 'r', 'o', 'w', '/', 'r', 'i', 'g',
      'h', 't', '_', 's', 'a', 'f', 'e', 't', 'y' };

    static const char_T tmp_b[10] = { '/', 'r', 'o', 'w', '/', 'r', 'i', 'g',
      'h', 't' };

    char_T tmp_c[9];
    char_T tmp_d[16];
    char_T tmp_e[10];
    char_T tmp_f[11];
    int32_T i;

    // Start for Atomic SubSystem: '<Root>/Subscribe3'
    // Start for MATLABSystem: '<S8>/SourceBlock'
    FRE2019_tasks_drive_DW.obj_f.matlabCodegenIsDeleted = true;
    FRE2019_tasks_drive_DW.obj_f.isInitialized = 0;
    FRE2019_tasks_drive_DW.obj_f.matlabCodegenIsDeleted = false;
    FRE2019_tasks_drive_DW.obj_f.isSetupComplete = false;
    FRE2019_tasks_drive_DW.obj_f.isInitialized = 1;
    for (i = 0; i < 10; i++) {
      tmp_f[i] = tmp_b[i];
    }

    tmp_f[10] = '\x00';
    Sub_FRE2019_tasks_drive_112.createSubscriber(tmp_f, 1);
    FRE2019_tasks_drive_DW.obj_f.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S8>/SourceBlock'
    // End of Start for SubSystem: '<Root>/Subscribe3'

    // Start for Atomic SubSystem: '<Root>/Subscribe9'
    // Start for MATLABSystem: '<S14>/SourceBlock'
    FRE2019_tasks_drive_DW.obj_e.matlabCodegenIsDeleted = true;
    FRE2019_tasks_drive_DW.obj_e.isInitialized = 0;
    FRE2019_tasks_drive_DW.obj_e.matlabCodegenIsDeleted = false;
    FRE2019_tasks_drive_DW.obj_e.isSetupComplete = false;
    FRE2019_tasks_drive_DW.obj_e.isInitialized = 1;
    for (i = 0; i < 17; i++) {
      FRE2019_tasks_drive_B.cv2[i] = tmp_a[i];
    }

    FRE2019_tasks_drive_B.cv2[17] = '\x00';
    Sub_FRE2019_tasks_drive_119.createSubscriber(FRE2019_tasks_drive_B.cv2, 1);
    FRE2019_tasks_drive_DW.obj_e.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S14>/SourceBlock'
    // End of Start for SubSystem: '<Root>/Subscribe9'

    // Start for Atomic SubSystem: '<Root>/Subscribe5'
    // Start for MATLABSystem: '<S10>/SourceBlock'
    FRE2019_tasks_drive_DW.obj_h.matlabCodegenIsDeleted = true;
    FRE2019_tasks_drive_DW.obj_h.isInitialized = 0;
    FRE2019_tasks_drive_DW.obj_h.matlabCodegenIsDeleted = false;
    FRE2019_tasks_drive_DW.obj_h.isSetupComplete = false;
    FRE2019_tasks_drive_DW.obj_h.isInitialized = 1;
    for (i = 0; i < 9; i++) {
      tmp_e[i] = tmp_9[i];
    }

    tmp_e[9] = '\x00';
    Sub_FRE2019_tasks_drive_113.createSubscriber(tmp_e, 1);
    FRE2019_tasks_drive_DW.obj_h.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S10>/SourceBlock'
    // End of Start for SubSystem: '<Root>/Subscribe5'

    // Start for Atomic SubSystem: '<Root>/Subscribe7'
    // Start for MATLABSystem: '<S12>/SourceBlock'
    FRE2019_tasks_drive_DW.obj_o.matlabCodegenIsDeleted = true;
    FRE2019_tasks_drive_DW.obj_o.isInitialized = 0;
    FRE2019_tasks_drive_DW.obj_o.matlabCodegenIsDeleted = false;
    FRE2019_tasks_drive_DW.obj_o.isSetupComplete = false;
    FRE2019_tasks_drive_DW.obj_o.isInitialized = 1;
    for (i = 0; i < 16; i++) {
      FRE2019_tasks_drive_B.cv3[i] = tmp_8[i];
    }

    FRE2019_tasks_drive_B.cv3[16] = '\x00';
    Sub_FRE2019_tasks_drive_118.createSubscriber(FRE2019_tasks_drive_B.cv3, 1);
    FRE2019_tasks_drive_DW.obj_o.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S12>/SourceBlock'
    // End of Start for SubSystem: '<Root>/Subscribe7'

    // Start for Atomic SubSystem: '<Root>/Subscribe4'
    // Start for MATLABSystem: '<S9>/SourceBlock'
    FRE2019_tasks_drive_DW.obj_l.matlabCodegenIsDeleted = true;
    FRE2019_tasks_drive_DW.obj_l.isInitialized = 0;
    FRE2019_tasks_drive_DW.obj_l.matlabCodegenIsDeleted = false;
    FRE2019_tasks_drive_DW.obj_l.isSetupComplete = false;
    FRE2019_tasks_drive_DW.obj_l.isInitialized = 1;
    for (i = 0; i < 21; i++) {
      FRE2019_tasks_drive_B.cv0[i] = tmp_7[i];
    }

    FRE2019_tasks_drive_B.cv0[21] = '\x00';
    Sub_FRE2019_tasks_drive_133.createSubscriber(FRE2019_tasks_drive_B.cv0, 1);
    FRE2019_tasks_drive_DW.obj_l.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S9>/SourceBlock'
    // End of Start for SubSystem: '<Root>/Subscribe4'

    // Start for Atomic SubSystem: '<Root>/Subscribe2'
    // Start for MATLABSystem: '<S7>/SourceBlock'
    FRE2019_tasks_drive_DW.obj_n.matlabCodegenIsDeleted = true;
    FRE2019_tasks_drive_DW.obj_n.isInitialized = 0;
    FRE2019_tasks_drive_DW.obj_n.matlabCodegenIsDeleted = false;
    FRE2019_tasks_drive_DW.obj_n.isSetupComplete = false;
    FRE2019_tasks_drive_DW.obj_n.isInitialized = 1;
    for (i = 0; i < 18; i++) {
      FRE2019_tasks_drive_B.cv1[i] = tmp_6[i];
    }

    FRE2019_tasks_drive_B.cv1[18] = '\x00';
    Sub_FRE2019_tasks_drive_126.createSubscriber(FRE2019_tasks_drive_B.cv1, 1);
    FRE2019_tasks_drive_DW.obj_n.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S7>/SourceBlock'
    // End of Start for SubSystem: '<Root>/Subscribe2'

    // Start for Atomic SubSystem: '<Root>/Subscribe6'
    // Start for MATLABSystem: '<S11>/SourceBlock'
    FRE2019_tasks_drive_DW.obj_ez.matlabCodegenIsDeleted = true;
    FRE2019_tasks_drive_DW.obj_ez.isInitialized = 0;
    FRE2019_tasks_drive_DW.obj_ez.matlabCodegenIsDeleted = false;
    FRE2019_tasks_drive_DW.obj_ez.isSetupComplete = false;
    FRE2019_tasks_drive_DW.obj_ez.isInitialized = 1;
    for (i = 0; i < 16; i++) {
      FRE2019_tasks_drive_B.cv3[i] = tmp_5[i];
    }

    FRE2019_tasks_drive_B.cv3[16] = '\x00';
    Sub_FRE2019_tasks_drive_136.createSubscriber(FRE2019_tasks_drive_B.cv3, 1);
    FRE2019_tasks_drive_DW.obj_ez.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S11>/SourceBlock'
    // End of Start for SubSystem: '<Root>/Subscribe6'

    // Start for Atomic SubSystem: '<Root>/Subscribe8'
    // Start for MATLABSystem: '<S13>/SourceBlock'
    FRE2019_tasks_drive_DW.obj_c.matlabCodegenIsDeleted = true;
    FRE2019_tasks_drive_DW.obj_c.isInitialized = 0;
    FRE2019_tasks_drive_DW.obj_c.matlabCodegenIsDeleted = false;
    FRE2019_tasks_drive_DW.obj_c.isSetupComplete = false;
    FRE2019_tasks_drive_DW.obj_c.isInitialized = 1;
    for (i = 0; i < 17; i++) {
      FRE2019_tasks_drive_B.cv2[i] = tmp_4[i];
    }

    FRE2019_tasks_drive_B.cv2[17] = '\x00';
    Sub_FRE2019_tasks_drive_139.createSubscriber(FRE2019_tasks_drive_B.cv2, 1);
    FRE2019_tasks_drive_DW.obj_c.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S13>/SourceBlock'
    // End of Start for SubSystem: '<Root>/Subscribe8'

    // Start for Atomic SubSystem: '<Root>/Subscribe10'
    // Start for MATLABSystem: '<S4>/SourceBlock'
    FRE2019_tasks_drive_DW.obj_j.matlabCodegenIsDeleted = true;
    FRE2019_tasks_drive_DW.obj_j.isInitialized = 0;
    FRE2019_tasks_drive_DW.obj_j.matlabCodegenIsDeleted = false;
    FRE2019_tasks_drive_DW.obj_j.isSetupComplete = false;
    FRE2019_tasks_drive_DW.obj_j.isInitialized = 1;
    for (i = 0; i < 18; i++) {
      FRE2019_tasks_drive_B.cv1[i] = tmp_3[i];
    }

    FRE2019_tasks_drive_B.cv1[18] = '\x00';
    Sub_FRE2019_tasks_drive_142.createSubscriber(FRE2019_tasks_drive_B.cv1, 1);
    FRE2019_tasks_drive_DW.obj_j.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S4>/SourceBlock'
    // End of Start for SubSystem: '<Root>/Subscribe10'

    // Start for Atomic SubSystem: '<Root>/Subscribe12'
    // Start for MATLABSystem: '<S6>/SourceBlock'
    FRE2019_tasks_drive_DW.obj_i.matlabCodegenIsDeleted = true;
    FRE2019_tasks_drive_DW.obj_i.isInitialized = 0;
    FRE2019_tasks_drive_DW.obj_i.matlabCodegenIsDeleted = false;
    FRE2019_tasks_drive_DW.obj_i.isSetupComplete = false;
    FRE2019_tasks_drive_DW.obj_i.isInitialized = 1;
    for (i = 0; i < 17; i++) {
      FRE2019_tasks_drive_B.cv2[i] = tmp_2[i];
    }

    FRE2019_tasks_drive_B.cv2[17] = '\x00';
    Sub_FRE2019_tasks_drive_226.createSubscriber(FRE2019_tasks_drive_B.cv2, 1);
    FRE2019_tasks_drive_DW.obj_i.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S6>/SourceBlock'
    // End of Start for SubSystem: '<Root>/Subscribe12'

    // Start for Atomic SubSystem: '<Root>/Subscribe1'
    // Start for MATLABSystem: '<S3>/SourceBlock'
    FRE2019_tasks_drive_DW.obj_b.matlabCodegenIsDeleted = true;
    FRE2019_tasks_drive_DW.obj_b.isInitialized = 0;
    FRE2019_tasks_drive_DW.obj_b.matlabCodegenIsDeleted = false;
    FRE2019_tasks_drive_DW.obj_b.isSetupComplete = false;
    FRE2019_tasks_drive_DW.obj_b.isInitialized = 1;
    for (i = 0; i < 15; i++) {
      tmp_d[i] = tmp_1[i];
    }

    tmp_d[15] = '\x00';
    Sub_FRE2019_tasks_drive_123.createSubscriber(tmp_d, 1);
    FRE2019_tasks_drive_DW.obj_b.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S3>/SourceBlock'
    // End of Start for SubSystem: '<Root>/Subscribe1'

    // Start for Atomic SubSystem: '<Root>/Subscribe11'
    // Start for MATLABSystem: '<S5>/SourceBlock'
    FRE2019_tasks_drive_DW.obj_p.matlabCodegenIsDeleted = true;
    FRE2019_tasks_drive_DW.obj_p.isInitialized = 0;
    FRE2019_tasks_drive_DW.obj_p.matlabCodegenIsDeleted = false;
    FRE2019_tasks_drive_DW.obj_p.isSetupComplete = false;
    FRE2019_tasks_drive_DW.obj_p.isInitialized = 1;
    for (i = 0; i < 18; i++) {
      FRE2019_tasks_drive_B.cv1[i] = tmp_0[i];
    }

    FRE2019_tasks_drive_B.cv1[18] = '\x00';
    Sub_FRE2019_tasks_drive_145.createSubscriber(FRE2019_tasks_drive_B.cv1, 1);
    FRE2019_tasks_drive_DW.obj_p.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S5>/SourceBlock'
    // End of Start for SubSystem: '<Root>/Subscribe11'

    // Start for Atomic SubSystem: '<Root>/Publish'
    // Start for MATLABSystem: '<S2>/SinkBlock'
    FRE2019_tasks_drive_DW.obj.matlabCodegenIsDeleted = true;
    FRE2019_tasks_drive_DW.obj.isInitialized = 0;
    FRE2019_tasks_drive_DW.obj.matlabCodegenIsDeleted = false;
    FRE2019_tasks_drive_DW.obj.isSetupComplete = false;
    FRE2019_tasks_drive_DW.obj.isInitialized = 1;
    for (i = 0; i < 8; i++) {
      tmp_c[i] = tmp[i];
    }

    tmp_c[8] = '\x00';
    Pub_FRE2019_tasks_drive_5.createPublisher(tmp_c, 1);
    FRE2019_tasks_drive_DW.obj.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S2>/SinkBlock'
    // End of Start for SubSystem: '<Root>/Publish'

    // SystemInitialize for Atomic SubSystem: '<Root>/Subscribe3'
    // SystemInitialize for Enabled SubSystem: '<S8>/Enabled Subsystem'
    // SystemInitialize for Outport: '<S28>/Out1'
    FRE2019_tasks_drive_B.In1_k = FRE2019_tasks_drive_P.Out1_Y0_g;

    // End of SystemInitialize for SubSystem: '<S8>/Enabled Subsystem'
    // End of SystemInitialize for SubSystem: '<Root>/Subscribe3'

    // SystemInitialize for Atomic SubSystem: '<Root>/Subscribe9'
    // SystemInitialize for Enabled SubSystem: '<S14>/Enabled Subsystem'
    // SystemInitialize for Outport: '<S34>/Out1'
    FRE2019_tasks_drive_B.In1_d = FRE2019_tasks_drive_P.Out1_Y0_ex;

    // End of SystemInitialize for SubSystem: '<S14>/Enabled Subsystem'
    // End of SystemInitialize for SubSystem: '<Root>/Subscribe9'

    // SystemInitialize for Atomic SubSystem: '<Root>/Subscribe5'
    // SystemInitialize for Enabled SubSystem: '<S10>/Enabled Subsystem'
    // SystemInitialize for Outport: '<S30>/Out1'
    FRE2019_tasks_drive_B.In1_i = FRE2019_tasks_drive_P.Out1_Y0_n;

    // End of SystemInitialize for SubSystem: '<S10>/Enabled Subsystem'
    // End of SystemInitialize for SubSystem: '<Root>/Subscribe5'

    // SystemInitialize for Atomic SubSystem: '<Root>/Subscribe7'
    // SystemInitialize for Enabled SubSystem: '<S12>/Enabled Subsystem'
    // SystemInitialize for Outport: '<S32>/Out1'
    FRE2019_tasks_drive_B.In1_p = FRE2019_tasks_drive_P.Out1_Y0_h;

    // End of SystemInitialize for SubSystem: '<S12>/Enabled Subsystem'
    // End of SystemInitialize for SubSystem: '<Root>/Subscribe7'

    // SystemInitialize for Atomic SubSystem: '<Root>/Subscribe4'
    // SystemInitialize for Enabled SubSystem: '<S9>/Enabled Subsystem'
    // SystemInitialize for Outport: '<S29>/Out1'
    FRE2019_tasks_drive_B.In1_m = FRE2019_tasks_drive_P.Out1_Y0_f;

    // End of SystemInitialize for SubSystem: '<S9>/Enabled Subsystem'
    // End of SystemInitialize for SubSystem: '<Root>/Subscribe4'

    // SystemInitialize for Atomic SubSystem: '<Root>/Subscribe2'
    // SystemInitialize for Enabled SubSystem: '<S7>/Enabled Subsystem'
    // SystemInitialize for Outport: '<S27>/Out1'
    FRE2019_tasks_drive_B.In1_j = FRE2019_tasks_drive_P.Out1_Y0_e;

    // End of SystemInitialize for SubSystem: '<S7>/Enabled Subsystem'
    // End of SystemInitialize for SubSystem: '<Root>/Subscribe2'

    // SystemInitialize for Atomic SubSystem: '<Root>/Subscribe6'
    // SystemInitialize for Enabled SubSystem: '<S11>/Enabled Subsystem'
    // SystemInitialize for Outport: '<S31>/Out1'
    FRE2019_tasks_drive_B.In1_l = FRE2019_tasks_drive_P.Out1_Y0_d;

    // End of SystemInitialize for SubSystem: '<S11>/Enabled Subsystem'
    // End of SystemInitialize for SubSystem: '<Root>/Subscribe6'

    // SystemInitialize for Atomic SubSystem: '<Root>/Subscribe8'
    // SystemInitialize for Enabled SubSystem: '<S13>/Enabled Subsystem'
    // SystemInitialize for Outport: '<S33>/Out1'
    FRE2019_tasks_drive_B.In1_kg = FRE2019_tasks_drive_P.Out1_Y0_k5;

    // End of SystemInitialize for SubSystem: '<S13>/Enabled Subsystem'
    // End of SystemInitialize for SubSystem: '<Root>/Subscribe8'

    // SystemInitialize for Atomic SubSystem: '<Root>/Subscribe10'
    // SystemInitialize for Enabled SubSystem: '<S4>/Enabled Subsystem'
    // SystemInitialize for Outport: '<S24>/Out1'
    FRE2019_tasks_drive_B.In1_jp = FRE2019_tasks_drive_P.Out1_Y0_a;

    // End of SystemInitialize for SubSystem: '<S4>/Enabled Subsystem'
    // End of SystemInitialize for SubSystem: '<Root>/Subscribe10'

    // SystemInitialize for Atomic SubSystem: '<Root>/Subscribe12'
    // SystemInitialize for Enabled SubSystem: '<S6>/Enabled Subsystem'
    // SystemInitialize for Outport: '<S26>/Out1'
    FRE2019_tasks_drive_B.In1_mb = FRE2019_tasks_drive_P.Out1_Y0_k;

    // End of SystemInitialize for SubSystem: '<S6>/Enabled Subsystem'
    // End of SystemInitialize for SubSystem: '<Root>/Subscribe12'

    // SystemInitialize for Atomic SubSystem: '<Root>/Subscribe1'
    // SystemInitialize for Enabled SubSystem: '<S3>/Enabled Subsystem'
    // SystemInitialize for Outport: '<S23>/Out1'
    FRE2019_tasks_drive_B.In1 = FRE2019_tasks_drive_P.Out1_Y0;

    // End of SystemInitialize for SubSystem: '<S3>/Enabled Subsystem'
    // End of SystemInitialize for SubSystem: '<Root>/Subscribe1'

    // SystemInitialize for Atomic SubSystem: '<Root>/Subscribe11'
    // SystemInitialize for Enabled SubSystem: '<S5>/Enabled Subsystem'
    // SystemInitialize for Outport: '<S25>/Out1'
    FRE2019_tasks_drive_B.In1_pq = FRE2019_tasks_drive_P.Out1_Y0_ac;

    // End of SystemInitialize for SubSystem: '<S5>/Enabled Subsystem'
    // End of SystemInitialize for SubSystem: '<Root>/Subscribe11'

    // SystemInitialize for Merge: '<Root>/Merge'
    FRE2019_tasks_drive_B.Merge[0] = FRE2019_tasks_drive_P.Merge_InitialOutput;
    FRE2019_tasks_drive_B.Merge[1] = FRE2019_tasks_drive_P.Merge_InitialOutput;
  }
}

// Model terminate function
void FRE2019_tasks_drive_terminate(void)
{
  // Terminate for Atomic SubSystem: '<Root>/Subscribe3'
  // Terminate for MATLABSystem: '<S8>/SourceBlock'
  matlabCodegenHandle_matlabCod_f(&FRE2019_tasks_drive_DW.obj_f);

  // End of Terminate for SubSystem: '<Root>/Subscribe3'

  // Terminate for Atomic SubSystem: '<Root>/Subscribe9'
  // Terminate for MATLABSystem: '<S14>/SourceBlock'
  matlabCodegenHandle_matlabCod_f(&FRE2019_tasks_drive_DW.obj_e);

  // End of Terminate for SubSystem: '<Root>/Subscribe9'

  // Terminate for Atomic SubSystem: '<Root>/Subscribe5'
  // Terminate for MATLABSystem: '<S10>/SourceBlock'
  matlabCodegenHandle_matlabCod_f(&FRE2019_tasks_drive_DW.obj_h);

  // End of Terminate for SubSystem: '<Root>/Subscribe5'

  // Terminate for Atomic SubSystem: '<Root>/Subscribe7'
  // Terminate for MATLABSystem: '<S12>/SourceBlock'
  matlabCodegenHandle_matlabCod_f(&FRE2019_tasks_drive_DW.obj_o);

  // End of Terminate for SubSystem: '<Root>/Subscribe7'

  // Terminate for Atomic SubSystem: '<Root>/Subscribe4'
  // Terminate for MATLABSystem: '<S9>/SourceBlock'
  matlabCodegenHandle_matlabCod_f(&FRE2019_tasks_drive_DW.obj_l);

  // End of Terminate for SubSystem: '<Root>/Subscribe4'

  // Terminate for Atomic SubSystem: '<Root>/Subscribe2'
  // Terminate for MATLABSystem: '<S7>/SourceBlock'
  matlabCodegenHandle_matlabCod_f(&FRE2019_tasks_drive_DW.obj_n);

  // End of Terminate for SubSystem: '<Root>/Subscribe2'

  // Terminate for Atomic SubSystem: '<Root>/Subscribe6'
  // Terminate for MATLABSystem: '<S11>/SourceBlock'
  matlabCodegenHandle_matlabCod_f(&FRE2019_tasks_drive_DW.obj_ez);

  // End of Terminate for SubSystem: '<Root>/Subscribe6'

  // Terminate for Atomic SubSystem: '<Root>/Subscribe8'
  // Terminate for MATLABSystem: '<S13>/SourceBlock'
  matlabCodegenHandle_matlabCod_f(&FRE2019_tasks_drive_DW.obj_c);

  // End of Terminate for SubSystem: '<Root>/Subscribe8'

  // Terminate for Atomic SubSystem: '<Root>/Subscribe10'
  // Terminate for MATLABSystem: '<S4>/SourceBlock'
  matlabCodegenHandle_matlabCod_f(&FRE2019_tasks_drive_DW.obj_j);

  // End of Terminate for SubSystem: '<Root>/Subscribe10'

  // Terminate for Atomic SubSystem: '<Root>/Subscribe12'
  // Terminate for MATLABSystem: '<S6>/SourceBlock'
  matlabCodegenHandle_matlabCod_f(&FRE2019_tasks_drive_DW.obj_i);

  // End of Terminate for SubSystem: '<Root>/Subscribe12'

  // Terminate for Atomic SubSystem: '<Root>/Subscribe1'
  // Terminate for MATLABSystem: '<S3>/SourceBlock'
  matlabCodegenHandle_matlabCod_f(&FRE2019_tasks_drive_DW.obj_b);

  // End of Terminate for SubSystem: '<Root>/Subscribe1'

  // Terminate for Atomic SubSystem: '<Root>/Subscribe11'
  // Terminate for MATLABSystem: '<S5>/SourceBlock'
  matlabCodegenHandle_matlabCod_f(&FRE2019_tasks_drive_DW.obj_p);

  // End of Terminate for SubSystem: '<Root>/Subscribe11'

  // Terminate for Atomic SubSystem: '<Root>/Publish'
  // Terminate for MATLABSystem: '<S2>/SinkBlock'
  matlabCodegenHandle_matlabCodeg(&FRE2019_tasks_drive_DW.obj);

  // End of Terminate for SubSystem: '<Root>/Publish'
}

//
// File trailer for generated code.
//
// [EOF]
//

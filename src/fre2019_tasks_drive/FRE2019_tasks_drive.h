//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: FRE2019_tasks_drive.h
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
#ifndef RTW_HEADER_FRE2019_tasks_drive_h_
#define RTW_HEADER_FRE2019_tasks_drive_h_
#include <math.h>
#include <string.h>
#include <stddef.h>
#ifndef FRE2019_tasks_drive_COMMON_INCLUDES_
# define FRE2019_tasks_drive_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "slros_initialize.h"
#endif                                 // FRE2019_tasks_drive_COMMON_INCLUDES_

#include "FRE2019_tasks_drive_types.h"

// Macros for accessing real-time model data structure
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetT
# define rtmGetT(rtm)                  (rtmGetTPtr((rtm))[0])
#endif

#ifndef rtmGetTPtr
# define rtmGetTPtr(rtm)               ((rtm)->Timing.t)
#endif

// Block signals (default storage)
typedef struct {
  SL_Bus_FRE2019_tasks_drive_geometry_msgs_Twist In1;// '<S23>/In1'
  SL_Bus_FRE2019_tasks_drive_geometry_msgs_Twist BusAssignment;// '<Root>/Bus Assignment' 
  char_T cv0[22];
  char_T cv1[19];
  char_T cv2[18];
  char_T cv3[17];
  real_T Merge[2];                     // '<Root>/Merge'
  real_T Gain1;                        // '<S37>/Gain1'
  real_T TrigonometricFunction2;       // '<S16>/Trigonometric Function2'
  SL_Bus_FRE2019_tasks_drive_std_msgs_Float64 In1_d;// '<S34>/In1'
  SL_Bus_FRE2019_tasks_drive_std_msgs_Float64 In1_p;// '<S32>/In1'
  SL_Bus_FRE2019_tasks_drive_std_msgs_Float64 In1_i;// '<S30>/In1'
  SL_Bus_FRE2019_tasks_drive_std_msgs_Float64 In1_k;// '<S28>/In1'
  SL_Bus_FRE2019_tasks_drive_std_msgs_Bool In1_kg;// '<S33>/In1'
  SL_Bus_FRE2019_tasks_drive_std_msgs_Bool In1_l;// '<S31>/In1'
  SL_Bus_FRE2019_tasks_drive_std_msgs_Bool In1_m;// '<S29>/In1'
  SL_Bus_FRE2019_tasks_drive_std_msgs_Bool In1_j;// '<S27>/In1'
  SL_Bus_FRE2019_tasks_drive_std_msgs_Bool In1_mb;// '<S26>/In1'
  SL_Bus_FRE2019_tasks_drive_std_msgs_Bool In1_pq;// '<S25>/In1'
  SL_Bus_FRE2019_tasks_drive_std_msgs_Bool In1_jp;// '<S24>/In1'
  SL_Bus_FRE2019_tasks_drive_std_msgs_Float64 b_varargout_2;
} B_FRE2019_tasks_drive_T;

// Block states (default storage) for system '<Root>'
typedef struct {
  robotics_slros_internal_block_T obj; // '<S2>/SinkBlock'
  robotics_slros_internal_blo_f_T obj_e;// '<S14>/SourceBlock'
  robotics_slros_internal_blo_f_T obj_c;// '<S13>/SourceBlock'
  robotics_slros_internal_blo_f_T obj_o;// '<S12>/SourceBlock'
  robotics_slros_internal_blo_f_T obj_ez;// '<S11>/SourceBlock'
  robotics_slros_internal_blo_f_T obj_h;// '<S10>/SourceBlock'
  robotics_slros_internal_blo_f_T obj_l;// '<S9>/SourceBlock'
  robotics_slros_internal_blo_f_T obj_f;// '<S8>/SourceBlock'
  robotics_slros_internal_blo_f_T obj_n;// '<S7>/SourceBlock'
  robotics_slros_internal_blo_f_T obj_i;// '<S6>/SourceBlock'
  robotics_slros_internal_blo_f_T obj_p;// '<S5>/SourceBlock'
  robotics_slros_internal_blo_f_T obj_j;// '<S4>/SourceBlock'
  robotics_slros_internal_blo_f_T obj_b;// '<S3>/SourceBlock'
  boolean_T accelerate_MODE;           // '<Root>/accelerate'
} DW_FRE2019_tasks_drive_T;

// Parameters (default storage)
struct P_FRE2019_tasks_drive_T_ {
  real_T safety_threshold;             // Variable: safety_threshold
                                       //  Referenced by:
                                       //    '<S16>/Prevent div 1'
                                       //    '<S16>/Prevent div 2'
                                       //    '<S17>/Prevent div 1'
                                       //    '<S17>/Prevent div 2'

  real_T scan_box_height;              // Variable: scan_box_height
                                       //  Referenced by: '<S17>/scan_box_height//2'

  real_T scan_box_height_headland;     // Variable: scan_box_height_headland
                                       //  Referenced by: '<S16>/scan_box_height//2'

  real_T scan_box_width;               // Variable: scan_box_width
                                       //  Referenced by:
                                       //    '<S17>/const2'
                                       //    '<S17>/const3'

  real_T scan_box_width_headland;      // Variable: scan_box_width_headland
                                       //  Referenced by:
                                       //    '<S16>/const2'
                                       //    '<S16>/const3'

  real_T Ramp_InitialOutput;           // Mask Parameter: Ramp_InitialOutput
                                       //  Referenced by: '<S35>/Constant1'

  real_T Ramp_slope;                   // Mask Parameter: Ramp_slope
                                       //  Referenced by: '<S35>/Step'

  real_T Ramp_start;                   // Mask Parameter: Ramp_start
                                       //  Referenced by:
                                       //    '<S35>/Constant'
                                       //    '<S35>/Step'

  SL_Bus_FRE2019_tasks_drive_geometry_msgs_Twist Out1_Y0;// Computed Parameter: Out1_Y0
                                                         //  Referenced by: '<S23>/Out1'

  SL_Bus_FRE2019_tasks_drive_geometry_msgs_Twist Constant_Value;// Computed Parameter: Constant_Value
                                                                //  Referenced by: '<S3>/Constant'

  SL_Bus_FRE2019_tasks_drive_geometry_msgs_Twist Constant_Value_d;// Computed Parameter: Constant_Value_d
                                                                  //  Referenced by: '<S1>/Constant'

  SL_Bus_FRE2019_tasks_drive_std_msgs_Bool Out1_Y0_a;// Computed Parameter: Out1_Y0_a
                                                     //  Referenced by: '<S24>/Out1'

  SL_Bus_FRE2019_tasks_drive_std_msgs_Bool Constant_Value_e;// Computed Parameter: Constant_Value_e
                                                            //  Referenced by: '<S4>/Constant'

  SL_Bus_FRE2019_tasks_drive_std_msgs_Bool Out1_Y0_ac;// Computed Parameter: Out1_Y0_ac
                                                      //  Referenced by: '<S25>/Out1'

  SL_Bus_FRE2019_tasks_drive_std_msgs_Bool Constant_Value_p;// Computed Parameter: Constant_Value_p
                                                            //  Referenced by: '<S5>/Constant'

  SL_Bus_FRE2019_tasks_drive_std_msgs_Bool Out1_Y0_k;// Computed Parameter: Out1_Y0_k
                                                     //  Referenced by: '<S26>/Out1'

  SL_Bus_FRE2019_tasks_drive_std_msgs_Bool Constant_Value_e1;// Computed Parameter: Constant_Value_e1
                                                             //  Referenced by: '<S6>/Constant'

  SL_Bus_FRE2019_tasks_drive_std_msgs_Bool Out1_Y0_e;// Computed Parameter: Out1_Y0_e
                                                     //  Referenced by: '<S27>/Out1'

  SL_Bus_FRE2019_tasks_drive_std_msgs_Bool Constant_Value_pr;// Computed Parameter: Constant_Value_pr
                                                             //  Referenced by: '<S7>/Constant'

  SL_Bus_FRE2019_tasks_drive_std_msgs_Bool Out1_Y0_f;// Computed Parameter: Out1_Y0_f
                                                     //  Referenced by: '<S29>/Out1'

  SL_Bus_FRE2019_tasks_drive_std_msgs_Bool Constant_Value_l;// Computed Parameter: Constant_Value_l
                                                            //  Referenced by: '<S9>/Constant'

  SL_Bus_FRE2019_tasks_drive_std_msgs_Bool Out1_Y0_d;// Computed Parameter: Out1_Y0_d
                                                     //  Referenced by: '<S31>/Out1'

  SL_Bus_FRE2019_tasks_drive_std_msgs_Bool Constant_Value_j;// Computed Parameter: Constant_Value_j
                                                            //  Referenced by: '<S11>/Constant'

  SL_Bus_FRE2019_tasks_drive_std_msgs_Bool Out1_Y0_k5;// Computed Parameter: Out1_Y0_k5
                                                      //  Referenced by: '<S33>/Out1'

  SL_Bus_FRE2019_tasks_drive_std_msgs_Bool Constant_Value_h;// Computed Parameter: Constant_Value_h
                                                            //  Referenced by: '<S13>/Constant'

  SL_Bus_FRE2019_tasks_drive_std_msgs_Float64 Out1_Y0_g;// Computed Parameter: Out1_Y0_g
                                                        //  Referenced by: '<S28>/Out1'

  SL_Bus_FRE2019_tasks_drive_std_msgs_Float64 Constant_Value_i;// Computed Parameter: Constant_Value_i
                                                               //  Referenced by: '<S8>/Constant'

  SL_Bus_FRE2019_tasks_drive_std_msgs_Float64 Out1_Y0_n;// Computed Parameter: Out1_Y0_n
                                                        //  Referenced by: '<S30>/Out1'

  SL_Bus_FRE2019_tasks_drive_std_msgs_Float64 Constant_Value_ep;// Computed Parameter: Constant_Value_ep
                                                                //  Referenced by: '<S10>/Constant'

  SL_Bus_FRE2019_tasks_drive_std_msgs_Float64 Out1_Y0_h;// Computed Parameter: Out1_Y0_h
                                                        //  Referenced by: '<S32>/Out1'

  SL_Bus_FRE2019_tasks_drive_std_msgs_Float64 Constant_Value_b;// Computed Parameter: Constant_Value_b
                                                               //  Referenced by: '<S12>/Constant'

  SL_Bus_FRE2019_tasks_drive_std_msgs_Float64 Out1_Y0_ex;// Computed Parameter: Out1_Y0_ex
                                                         //  Referenced by: '<S34>/Out1'

  SL_Bus_FRE2019_tasks_drive_std_msgs_Float64 Constant_Value_o;// Computed Parameter: Constant_Value_o
                                                               //  Referenced by: '<S14>/Constant'

  real_T Step_Y0;                      // Expression: 0
                                       //  Referenced by: '<S35>/Step'

  real_T Saturation_UpperSat;          // Expression: 0.5
                                       //  Referenced by: '<S15>/Saturation'

  real_T Saturation_LowerSat;          // Expression: 0
                                       //  Referenced by: '<S15>/Saturation'

  real_T Rotationsgeschwindigkeit_Value;// Expression: 0
                                        //  Referenced by: '<S15>/Rotations- geschwindigkeit'

  real_T gain_Gain;                    // Expression: 1
                                       //  Referenced by: '<S16>/gain'

  real_T Constant_Value_g;             // Expression: 1
                                       //  Referenced by: '<S16>/Constant'

  real_T const1_Value;                 // Expression: 2
                                       //  Referenced by: '<S16>/const1'

  real_T cmd_vel_x_max_Gain;           // Expression: 1
                                       //  Referenced by: '<S16>/cmd_vel_x_max'

  real_T secure_slow_Gain;             // Expression: 0.3
                                       //  Referenced by: '<S16>/secure_slow'

  real_T cmd_vel_yaw_max_Gain;         // Expression: pi
                                       //  Referenced by: '<S16>/cmd_vel_yaw_max'

  real_T secure_slow1_Gain;            // Expression: 0.3
                                       //  Referenced by: '<S16>/secure_slow1'

  real_T gain_Gain_i;                  // Expression: 1
                                       //  Referenced by: '<S17>/gain'

  real_T Constant_Value_dd;            // Expression: 1
                                       //  Referenced by: '<S17>/Constant'

  real_T const1_Value_o;               // Expression: 2
                                       //  Referenced by: '<S17>/const1'

  real_T cmd_vel_x_max_Gain_l;         // Expression: 1
                                       //  Referenced by: '<S17>/cmd_vel_x_max'

  real_T secure_slow_Gain_l;           // Expression: 0.3
                                       //  Referenced by: '<S17>/secure_slow'

  real_T cmd_vel_yaw_max_Gain_j;       // Expression: pi
                                       //  Referenced by: '<S17>/cmd_vel_yaw_max'

  real_T secure_slow1_Gain_m;          // Expression: 0.68
                                       //  Referenced by: '<S17>/secure_slow1'

  real_T Rotationsgeschwindigkeit_Valu_m;// Expression: 0
                                         //  Referenced by: '<S20>/Rotations- geschwindigkeit'

  real_T Translationsgeschwindigkeit_Val;// Expression: 0.5
                                         //  Referenced by: '<S20>/Translations- geschwindigkeit'

  real_T Drehwinkel_Value;             // Expression: 90
                                       //  Referenced by: '<S21>/Drehwinkel'

  real_T Gain1_Gain;                   // Expression: pi/180
                                       //  Referenced by: '<S36>/Gain1'

  real_T Kurvenradius_Value;           // Expression: 0.35
                                       //  Referenced by: '<S21>/Kurvenradius'

  real_T Drehwinkel_Value_e;           // Expression: 90
                                       //  Referenced by: '<S22>/Drehwinkel'

  real_T Gain1_Gain_e;                 // Expression: pi/180
                                       //  Referenced by: '<S37>/Gain1'

  real_T Kurvenradius_Value_e;         // Expression: 0.35
                                       //  Referenced by: '<S22>/Kurvenradius'

  real_T Gain_Gain;                    // Expression: -1
                                       //  Referenced by: '<S22>/Gain'

  real_T Drehwinkel_Value_j;           // Expression: 3
                                       //  Referenced by: '<Root>/Drehwinkel'

  real_T Drehwinkel1_Value;            // Expression: 3
                                       //  Referenced by: '<Root>/Drehwinkel1'

  real_T Merge_InitialOutput;          // Computed Parameter: Merge_InitialOutput
                                       //  Referenced by: '<Root>/Merge'

};

// Real-time Model Data Structure
struct tag_RTM_FRE2019_tasks_drive_T {
  const char_T *errorStatus;
  RTWSolverInfo solverInfo;

  //
  //  Timing:
  //  The following substructure contains information regarding
  //  the timing information for the model.

  struct {
    uint32_T clockTick0;
    time_T stepSize0;
    uint32_T clockTick1;
    SimTimeStep simTimeStep;
    time_T *t;
    time_T tArray[2];
  } Timing;
};

// Block parameters (default storage)
#ifdef __cplusplus

extern "C" {

#endif

  extern P_FRE2019_tasks_drive_T FRE2019_tasks_drive_P;

#ifdef __cplusplus

}
#endif

// Block signals (default storage)
extern B_FRE2019_tasks_drive_T FRE2019_tasks_drive_B;

// Block states (default storage)
extern DW_FRE2019_tasks_drive_T FRE2019_tasks_drive_DW;

#ifdef __cplusplus

extern "C" {

#endif

  // Model entry point functions
  extern void FRE2019_tasks_drive_initialize(void);
  extern void FRE2019_tasks_drive_step(void);
  extern void FRE2019_tasks_drive_terminate(void);

#ifdef __cplusplus

}
#endif

// Real-time Model object
#ifdef __cplusplus

extern "C" {

#endif

  extern RT_MODEL_FRE2019_tasks_drive_T *const FRE2019_tasks_drive_M;

#ifdef __cplusplus

}
#endif

//-
//  These blocks were eliminated from the model due to optimizations:
//
//  Block '<S15>/Step' : Unused code path elimination


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
//  '<Root>' : 'FRE2019_tasks_drive'
//  '<S1>'   : 'FRE2019_tasks_drive/Blank Message'
//  '<S2>'   : 'FRE2019_tasks_drive/Publish'
//  '<S3>'   : 'FRE2019_tasks_drive/Subscribe1'
//  '<S4>'   : 'FRE2019_tasks_drive/Subscribe10'
//  '<S5>'   : 'FRE2019_tasks_drive/Subscribe11'
//  '<S6>'   : 'FRE2019_tasks_drive/Subscribe12'
//  '<S7>'   : 'FRE2019_tasks_drive/Subscribe2'
//  '<S8>'   : 'FRE2019_tasks_drive/Subscribe3'
//  '<S9>'   : 'FRE2019_tasks_drive/Subscribe4'
//  '<S10>'  : 'FRE2019_tasks_drive/Subscribe5'
//  '<S11>'  : 'FRE2019_tasks_drive/Subscribe6'
//  '<S12>'  : 'FRE2019_tasks_drive/Subscribe7'
//  '<S13>'  : 'FRE2019_tasks_drive/Subscribe8'
//  '<S14>'  : 'FRE2019_tasks_drive/Subscribe9'
//  '<S15>'  : 'FRE2019_tasks_drive/accelerate'
//  '<S16>'  : 'FRE2019_tasks_drive/headlands'
//  '<S17>'  : 'FRE2019_tasks_drive/in row'
//  '<S18>'  : 'FRE2019_tasks_drive/in_row'
//  '<S19>'  : 'FRE2019_tasks_drive/manual drive'
//  '<S20>'  : 'FRE2019_tasks_drive/straight on'
//  '<S21>'  : 'FRE2019_tasks_drive/turn left'
//  '<S22>'  : 'FRE2019_tasks_drive/turn right'
//  '<S23>'  : 'FRE2019_tasks_drive/Subscribe1/Enabled Subsystem'
//  '<S24>'  : 'FRE2019_tasks_drive/Subscribe10/Enabled Subsystem'
//  '<S25>'  : 'FRE2019_tasks_drive/Subscribe11/Enabled Subsystem'
//  '<S26>'  : 'FRE2019_tasks_drive/Subscribe12/Enabled Subsystem'
//  '<S27>'  : 'FRE2019_tasks_drive/Subscribe2/Enabled Subsystem'
//  '<S28>'  : 'FRE2019_tasks_drive/Subscribe3/Enabled Subsystem'
//  '<S29>'  : 'FRE2019_tasks_drive/Subscribe4/Enabled Subsystem'
//  '<S30>'  : 'FRE2019_tasks_drive/Subscribe5/Enabled Subsystem'
//  '<S31>'  : 'FRE2019_tasks_drive/Subscribe6/Enabled Subsystem'
//  '<S32>'  : 'FRE2019_tasks_drive/Subscribe7/Enabled Subsystem'
//  '<S33>'  : 'FRE2019_tasks_drive/Subscribe8/Enabled Subsystem'
//  '<S34>'  : 'FRE2019_tasks_drive/Subscribe9/Enabled Subsystem'
//  '<S35>'  : 'FRE2019_tasks_drive/accelerate/Ramp'
//  '<S36>'  : 'FRE2019_tasks_drive/turn left/Degrees to Radians'
//  '<S37>'  : 'FRE2019_tasks_drive/turn right/Degrees to Radians'

#endif                                 // RTW_HEADER_FRE2019_tasks_drive_h_

//
// File trailer for generated code.
//
// [EOF]
//

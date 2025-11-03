//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: FRE2019_tasks_logic.h
//
// Code generated for Simulink model 'FRE2019_tasks_logic'.
//
// Model version                  : 1.44
// Simulink Coder version         : 9.0 (R2018b) 24-May-2018
// C/C++ source code generated on : Thu Jun 20 10:21:15 2019
//
// Target selection: ert.tlc
// Embedded hardware selection: Generic->Unspecified (assume 32-bit Generic)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#ifndef RTW_HEADER_FRE2019_tasks_logic_h_
#define RTW_HEADER_FRE2019_tasks_logic_h_
#include <math.h>
#include <stddef.h>
#include <string.h>
#ifndef FRE2019_tasks_logic_COMMON_INCLUDES_
# define FRE2019_tasks_logic_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "slros_initialize.h"
#endif                                 // FRE2019_tasks_logic_COMMON_INCLUDES_

#include "FRE2019_tasks_logic_types.h"

// Macros for accessing real-time model data structure
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

// Block signals (default storage)
typedef struct {
  SL_Bus_FRE2019_tasks_logic_sensor_msgs_Joy In1;// '<S19>/In1'
  SL_Bus_FRE2019_tasks_logic_sensor_msgs_Joy b_varargout_2;
  int32_T direction[64];
  char_T cv0[26];
  char_T cv1[23];
  char_T cv2[22];
  SL_Bus_FRE2019_tasks_logic_std_msgs_Float64 In1_d;// '<S21>/In1'
  SL_Bus_FRE2019_tasks_logic_std_msgs_Float64 In1_f;// '<S20>/In1'
  SL_Bus_FRE2019_tasks_logic_std_msgs_Bool In1_m;// '<S18>/In1'
  boolean_T Headland;                  // '<Root>/Chart'
  boolean_T inReihe;                   // '<Root>/Chart'
  boolean_T leftTurn;                  // '<Root>/Chart'
  boolean_T rightTurn;                 // '<Root>/Chart'
  boolean_T straightOn;                // '<Root>/Chart'
  boolean_T manual;                    // '<Root>/Chart'
} B_FRE2019_tasks_logic_T;

// Block states (default storage) for system '<Root>'
typedef struct {
  robotics_slros_internal_block_T obj; // '<S9>/SinkBlock'
  robotics_slros_internal_block_T obj_e;// '<S8>/SinkBlock'
  robotics_slros_internal_block_T obj_h;// '<S7>/SinkBlock'
  robotics_slros_internal_block_T obj_a;// '<S6>/SinkBlock'
  robotics_slros_internal_block_T obj_p;// '<S5>/SinkBlock'
  robotics_slros_internal_block_T obj_g;// '<S4>/SinkBlock'
  robotics_slros_internal_blo_j_T obj_j;// '<S15>/SourceBlock'
  robotics_slros_internal_blo_j_T obj_b;// '<S14>/SourceBlock'
  robotics_slros_internal_blo_j_T obj_i;// '<S13>/SourceBlock'
  robotics_slros_internal_blo_j_T obj_is;// '<S12>/SourceBlock'
  robotics_slros_internal_blo_j_T obj_i4;// '<S11>/SourceBlock'
  robotics_slros_internal_blo_j_T obj_f;// '<S10>/SourceBlock'
  real_T i;                            // '<Root>/Chart'
  int32_T direction;                   // '<Root>/Chart'
  uint32_T temporalCounter_i1;         // '<Root>/Chart'
  uint8_T is_active_c3_FRE2019_tasks_logi;// '<Root>/Chart'
  uint8_T is_c3_FRE2019_tasks_logic;   // '<Root>/Chart'
  uint8_T is_Automatic;                // '<Root>/Chart'
} DW_FRE2019_tasks_logic_T;

// Parameters (default storage)
struct P_FRE2019_tasks_logic_T_ {
  SL_Bus_FRE2019_tasks_logic_sensor_msgs_Joy Out1_Y0;// Computed Parameter: Out1_Y0
                                                     //  Referenced by: '<S19>/Out1'

  SL_Bus_FRE2019_tasks_logic_sensor_msgs_Joy Constant_Value;// Computed Parameter: Constant_Value
                                                            //  Referenced by: '<S13>/Constant'

  SL_Bus_FRE2019_tasks_logic_std_msgs_Bool Out1_Y0_k;// Computed Parameter: Out1_Y0_k
                                                     //  Referenced by: '<S18>/Out1'

  SL_Bus_FRE2019_tasks_logic_std_msgs_Bool Constant_Value_e;// Computed Parameter: Constant_Value_e
                                                            //  Referenced by: '<S12>/Constant'

  SL_Bus_FRE2019_tasks_logic_std_msgs_Bool Constant_Value_j;// Computed Parameter: Constant_Value_j
                                                            //  Referenced by: '<S1>/Constant'

  SL_Bus_FRE2019_tasks_logic_std_msgs_Float64 Out1_Y0_e;// Computed Parameter: Out1_Y0_e
                                                        //  Referenced by: '<S16>/Out1'

  SL_Bus_FRE2019_tasks_logic_std_msgs_Float64 Constant_Value_k;// Computed Parameter: Constant_Value_k
                                                               //  Referenced by: '<S10>/Constant'

  SL_Bus_FRE2019_tasks_logic_std_msgs_Float64 Out1_Y0_g;// Computed Parameter: Out1_Y0_g
                                                        //  Referenced by: '<S17>/Out1'

  SL_Bus_FRE2019_tasks_logic_std_msgs_Float64 Constant_Value_f;// Computed Parameter: Constant_Value_f
                                                               //  Referenced by: '<S11>/Constant'

  SL_Bus_FRE2019_tasks_logic_std_msgs_Float64 Out1_Y0_n;// Computed Parameter: Out1_Y0_n
                                                        //  Referenced by: '<S20>/Out1'

  SL_Bus_FRE2019_tasks_logic_std_msgs_Float64 Constant_Value_l;// Computed Parameter: Constant_Value_l
                                                               //  Referenced by: '<S14>/Constant'

  SL_Bus_FRE2019_tasks_logic_std_msgs_Float64 Out1_Y0_b;// Computed Parameter: Out1_Y0_b
                                                        //  Referenced by: '<S21>/Out1'

  SL_Bus_FRE2019_tasks_logic_std_msgs_Float64 Constant_Value_i;// Computed Parameter: Constant_Value_i
                                                               //  Referenced by: '<S15>/Constant'

  real_T safety_trashhold_Value;       // Expression: 9
                                       //  Referenced by: '<Root>/safety_trashhold'

  real_T turn_time_Value;              // Expression: 1.6
                                       //  Referenced by: '<Root>/turn_time'

  real_T row_end_time_Value;           // Expression: 0.6
                                       //  Referenced by: '<Root>/row_end_time'

};

// Real-time Model Data Structure
struct tag_RTM_FRE2019_tasks_logic_T {
  const char_T *errorStatus;
};

// Block parameters (default storage)
#ifdef __cplusplus

extern "C" {

#endif

  extern P_FRE2019_tasks_logic_T FRE2019_tasks_logic_P;

#ifdef __cplusplus

}
#endif

// Block signals (default storage)
extern B_FRE2019_tasks_logic_T FRE2019_tasks_logic_B;

// Block states (default storage)
extern DW_FRE2019_tasks_logic_T FRE2019_tasks_logic_DW;

#ifdef __cplusplus

extern "C" {

#endif

  // Model entry point functions
  extern void FRE2019_tasks_logic_initialize(void);
  extern void FRE2019_tasks_logic_step(void);
  extern void FRE2019_tasks_logic_terminate(void);

#ifdef __cplusplus

}
#endif

// Real-time Model object
#ifdef __cplusplus

extern "C" {

#endif

  extern RT_MODEL_FRE2019_tasks_logic_T *const FRE2019_tasks_logic_M;

#ifdef __cplusplus

}
#endif

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
//  '<Root>' : 'FRE2019_tasks_logic'
//  '<S1>'   : 'FRE2019_tasks_logic/Blank Message'
//  '<S2>'   : 'FRE2019_tasks_logic/Chart'
//  '<S3>'   : 'FRE2019_tasks_logic/MATLAB Function'
//  '<S4>'   : 'FRE2019_tasks_logic/Publish'
//  '<S5>'   : 'FRE2019_tasks_logic/Publish1'
//  '<S6>'   : 'FRE2019_tasks_logic/Publish2'
//  '<S7>'   : 'FRE2019_tasks_logic/Publish3'
//  '<S8>'   : 'FRE2019_tasks_logic/Publish4'
//  '<S9>'   : 'FRE2019_tasks_logic/Publish5'
//  '<S10>'  : 'FRE2019_tasks_logic/Subscribe10'
//  '<S11>'  : 'FRE2019_tasks_logic/Subscribe11'
//  '<S12>'  : 'FRE2019_tasks_logic/Subscribe2'
//  '<S13>'  : 'FRE2019_tasks_logic/Subscribe4'
//  '<S14>'  : 'FRE2019_tasks_logic/Subscribe7'
//  '<S15>'  : 'FRE2019_tasks_logic/Subscribe9'
//  '<S16>'  : 'FRE2019_tasks_logic/Subscribe10/Enabled Subsystem'
//  '<S17>'  : 'FRE2019_tasks_logic/Subscribe11/Enabled Subsystem'
//  '<S18>'  : 'FRE2019_tasks_logic/Subscribe2/Enabled Subsystem'
//  '<S19>'  : 'FRE2019_tasks_logic/Subscribe4/Enabled Subsystem'
//  '<S20>'  : 'FRE2019_tasks_logic/Subscribe7/Enabled Subsystem'
//  '<S21>'  : 'FRE2019_tasks_logic/Subscribe9/Enabled Subsystem'

#endif                                 // RTW_HEADER_FRE2019_tasks_logic_h_

//
// File trailer for generated code.
//
// [EOF]
//

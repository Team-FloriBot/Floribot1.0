//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: FRE2019_row_detection.h
//
// Code generated for Simulink model 'FRE2019_row_detection'.
//
// Model version                  : 1.15
// Simulink Coder version         : 9.0 (R2018b) 24-May-2018
// C/C++ source code generated on : Thu Jun 20 10:19:10 2019
//
// Target selection: ert.tlc
// Embedded hardware selection: Generic->Unspecified (assume 32-bit Generic)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#ifndef RTW_HEADER_FRE2019_row_detection_h_
#define RTW_HEADER_FRE2019_row_detection_h_
#include <math.h>
#include <string.h>
#include <stddef.h>
#ifndef FRE2019_row_detection_COMMON_INCLUDES_
# define FRE2019_row_detection_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "slros_initialize.h"
#endif                                 // FRE2019_row_detection_COMMON_INCLUDES_ 

#include "FRE2019_row_detection_types.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"

// Macros for accessing real-time model data structure
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

// Block signals (default storage)
typedef struct {
  SL_Bus_FRE2019_row_detection_sensor_msgs_LaserScan In1;// '<S17>/In1'
  SL_Bus_FRE2019_row_detection_sensor_msgs_LaserScan b_varargout_2;
  real_T DataTypeConversion[720];      // '<S8>/Data Type Conversion'
  real_T Histogram1[360];              // '<S14>/Histogram1'
  real_T Product1[360];                // '<S14>/Product1'
  real_T ImpAsg_InsertedFor_scan_y_o[360];// '<S11>/right side of the right box' 
  real_T Histogram[14];                // '<S14>/Histogram'
  char_T cv0[23];
  char_T cv1[22];
  char_T cv2[18];
  SL_Bus_FRE2019_row_detection_std_msgs_Float64 BusAssignment3;// '<Root>/Bus Assignment3' 
  SL_Bus_FRE2019_row_detection_std_msgs_Float64 BusAssignment1;// '<Root>/Bus Assignment1' 
  SL_Bus_FRE2019_row_detection_std_msgs_Float64 BusAssignment;// '<Root>/Bus Assignment' 
  SL_Bus_FRE2019_row_detection_std_msgs_Float64 BusAssignment4;// '<Root>/Bus Assignment4' 
} B_FRE2019_row_detection_T;

// Block states (default storage) for system '<Root>'
typedef struct {
  robotics_slros_internal_block_T obj; // '<S7>/SinkBlock'
  robotics_slros_internal_block_T obj_e;// '<S6>/SinkBlock'
  robotics_slros_internal_block_T obj_d;// '<S5>/SinkBlock'
  robotics_slros_internal_block_T obj_l;// '<S4>/SinkBlock'
  robotics_slros_internal_block_T obj_j;// '<S3>/SinkBlock'
  robotics_slros_internal_block_T obj_o;// '<S2>/SinkBlock'
  robotics_slros_internal_blo_j_T obj_f;// '<S9>/SourceBlock'
  int32_T FindNonzeroElements_DIMS1;   // '<S13>/Find Nonzero Elements'
  int32_T Selector_DIMS1;              // '<S13>/Selector'
  int32_T FindNonzeroElements1_DIMS1;  // '<S12>/Find Nonzero Elements1'
  int32_T Selector3_DIMS1;             // '<S12>/Selector3'
} DW_FRE2019_row_detection_T;

// Parameters for system: '<S8>/Box check left side'
struct P_CoreSubsys_FRE2019_row_dete_T_ {
  real_T bottomsideoftherightbox1_Thresh;// Expression: 0.1
                                         //  Referenced by: '<S10>/bottom side of the right box1'

  real_T zero_Value;                   // Expression: 0
                                       //  Referenced by: '<S10>/zero'

};

// Parameters for system: '<S8>/Box check right side'
struct P_CoreSubsys_FRE2019_row_de_g_T_ {
  real_T bottomsideoftherightbox1_Thresh;// Expression: 0.1
                                         //  Referenced by: '<S11>/bottom side of the right box1'

  real_T zero_Value;                   // Expression: 0
                                       //  Referenced by: '<S11>/zero'

};

// Parameters (default storage)
struct P_FRE2019_row_detection_T_ {
  real_T angle_increment;              // Variable: angle_increment
                                       //  Referenced by:
                                       //    '<S12>/max. Points1'
                                       //    '<S13>/max. Points'

  real_T angle_max;                    // Variable: angle_max
                                       //  Referenced by:
                                       //    '<S12>/max. Points1'
                                       //    '<S13>/max. Points'

  real_T angle_min;                    // Variable: angle_min
                                       //  Referenced by:
                                       //    '<S12>/max. Points1'
                                       //    '<S13>/max. Points'

  real_T scan_box_height;              // Variable: scan_box_height
                                       //  Referenced by:
                                       //    '<S10>/right side of the left box'
                                       //    '<S11>/right side of the right box'

  real_T scan_box_width;               // Variable: scan_box_width
                                       //  Referenced by:
                                       //    '<S10>/bottom side of the left box'
                                       //    '<S11>/bottom side of the right box'

  real_T Histogram_umax;               // Mask Parameter: Histogram_umax
                                       //  Referenced by: '<S14>/Histogram'

  real_T Histogram1_umax;              // Mask Parameter: Histogram1_umax
                                       //  Referenced by: '<S14>/Histogram1'

  real_T Histogram_umin;               // Mask Parameter: Histogram_umin
                                       //  Referenced by: '<S14>/Histogram'

  real_T Histogram1_umin;              // Mask Parameter: Histogram1_umin
                                       //  Referenced by: '<S14>/Histogram1'

  SL_Bus_FRE2019_row_detection_sensor_msgs_LaserScan Out1_Y0;// Computed Parameter: Out1_Y0
                                                             //  Referenced by: '<S17>/Out1'

  SL_Bus_FRE2019_row_detection_sensor_msgs_LaserScan Constant_Value;// Computed Parameter: Constant_Value
                                                                    //  Referenced by: '<S9>/Constant'

  SL_Bus_FRE2019_row_detection_std_msgs_Float64 Constant_Value_e;// Computed Parameter: Constant_Value_e
                                                                 //  Referenced by: '<S1>/Constant'

  real_T Const2_Value;                 // Expression: 1
                                       //  Referenced by: '<S12>/Const2'

  real_T Const1_Value;                 // Expression: 1
                                       //  Referenced by: '<S13>/Const1'

  real_T scan_angles_Value[720];       // Expression: [angle_min:angle_increment:angle_max+angle_increment]
                                       //  Referenced by: '<S8>/scan_angles'

  real_T Gain_Gain;                    // Expression: 100
                                       //  Referenced by: '<S13>/Gain'

  real_T Gain1_Gain;                   // Expression: 100
                                       //  Referenced by: '<S12>/Gain1'

  real_T SimulationPace_P1;            // Expression: SimulationPace
                                       //  Referenced by: '<Root>/Simulation Pace'

  real_T SimulationPace_P2;            // Expression: SleepMode
                                       //  Referenced by: '<Root>/Simulation Pace'

  real_T SimulationPace_P3;            // Expression: OutputPaceError
                                       //  Referenced by: '<Root>/Simulation Pace'

  real_T SimulationPace_P4;            // Expression: SampleTime
                                       //  Referenced by: '<Root>/Simulation Pace'

  P_CoreSubsys_FRE2019_row_de_g_T CoreSubsys_p;// '<S8>/Box check right side'
  P_CoreSubsys_FRE2019_row_dete_T CoreSubsys;// '<S8>/Box check left side'
};

// Real-time Model Data Structure
struct tag_RTM_FRE2019_row_detection_T {
  const char_T *errorStatus;
};

// Block parameters (default storage)
#ifdef __cplusplus

extern "C" {

#endif

  extern P_FRE2019_row_detection_T FRE2019_row_detection_P;

#ifdef __cplusplus

}
#endif

// Block signals (default storage)
extern B_FRE2019_row_detection_T FRE2019_row_detection_B;

// Block states (default storage)
extern DW_FRE2019_row_detection_T FRE2019_row_detection_DW;

#ifdef __cplusplus

extern "C" {

#endif

  // Model entry point functions
  extern void FRE2019_row_detection_initialize(void);
  extern void FRE2019_row_detection_step(void);
  extern void FRE2019_row_detection_terminate(void);

#ifdef __cplusplus

}
#endif

// Real-time Model object
#ifdef __cplusplus

extern "C" {

#endif

  extern RT_MODEL_FRE2019_row_detectio_T *const FRE2019_row_detection_M;

#ifdef __cplusplus

}
#endif

//-
//  These blocks were eliminated from the model due to optimizations:
//
//  Block '<S14>/Display Histogram Right' : Unused code path elimination
//  Block '<S14>/Display Histogram Right1' : Unused code path elimination
//  Block '<S14>/Display Histrogram Left' : Unused code path elimination
//  Block '<S14>/Display Sum Left' : Unused code path elimination
//  Block '<S14>/Display Sum Right' : Unused code path elimination


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
//  '<Root>' : 'FRE2019_row_detection'
//  '<S1>'   : 'FRE2019_row_detection/Blank Message'
//  '<S2>'   : 'FRE2019_row_detection/Publish'
//  '<S3>'   : 'FRE2019_row_detection/Publish1'
//  '<S4>'   : 'FRE2019_row_detection/Publish2'
//  '<S5>'   : 'FRE2019_row_detection/Publish3'
//  '<S6>'   : 'FRE2019_row_detection/Publish4'
//  '<S7>'   : 'FRE2019_row_detection/Publish5'
//  '<S8>'   : 'FRE2019_row_detection/Rows'
//  '<S9>'   : 'FRE2019_row_detection/Subscribe'
//  '<S10>'  : 'FRE2019_row_detection/Rows/Box check left side'
//  '<S11>'  : 'FRE2019_row_detection/Rows/Box check right side'
//  '<S12>'  : 'FRE2019_row_detection/Rows/Calculate average of left side'
//  '<S13>'  : 'FRE2019_row_detection/Rows/Calculate average of right side'
//  '<S14>'  : 'FRE2019_row_detection/Rows/Histogram analysis'
//  '<S15>'  : 'FRE2019_row_detection/Rows/Box check left side/Polar to Cartesian'
//  '<S16>'  : 'FRE2019_row_detection/Rows/Box check right side/Polar to Cartesian'
//  '<S17>'  : 'FRE2019_row_detection/Subscribe/Enabled Subsystem'

#endif                                 // RTW_HEADER_FRE2019_row_detection_h_

//
// File trailer for generated code.
//
// [EOF]
//

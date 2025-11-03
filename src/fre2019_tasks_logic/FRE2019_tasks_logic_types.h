//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: FRE2019_tasks_logic_types.h
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
#ifndef RTW_HEADER_FRE2019_tasks_logic_types_h_
#define RTW_HEADER_FRE2019_tasks_logic_types_h_
#include "rtwtypes.h"
#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_FRE2019_tasks_logic_std_msgs_Bool_
#define DEFINED_TYPEDEF_FOR_SL_Bus_FRE2019_tasks_logic_std_msgs_Bool_

// MsgType=std_msgs/Bool
typedef struct {
  boolean_T Data;
} SL_Bus_FRE2019_tasks_logic_std_msgs_Bool;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_FRE2019_tasks_logic_std_msgs_Float64_
#define DEFINED_TYPEDEF_FOR_SL_Bus_FRE2019_tasks_logic_std_msgs_Float64_

// MsgType=std_msgs/Float64
typedef struct {
  real_T Data;
} SL_Bus_FRE2019_tasks_logic_std_msgs_Float64;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_ROSVariableLengthArrayInfo_
#define DEFINED_TYPEDEF_FOR_SL_Bus_ROSVariableLengthArrayInfo_

typedef struct {
  uint32_T CurrentLength;
  uint32_T ReceivedLength;
} SL_Bus_ROSVariableLengthArrayInfo;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_FRE2019_tasks_logic_ros_time_Time_
#define DEFINED_TYPEDEF_FOR_SL_Bus_FRE2019_tasks_logic_ros_time_Time_

// MsgType=ros_time/Time
typedef struct {
  real_T Sec;
  real_T Nsec;
} SL_Bus_FRE2019_tasks_logic_ros_time_Time;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_FRE2019_tasks_logic_std_msgs_Header_
#define DEFINED_TYPEDEF_FOR_SL_Bus_FRE2019_tasks_logic_std_msgs_Header_

// MsgType=std_msgs/Header
typedef struct {
  uint32_T Seq;

  // PrimitiveROSType=string:IsVarLen=1:VarLenCategory=data:VarLenElem=FrameId_SL_Info:TruncateAction=warn 
  uint8_T FrameId[128];

  // IsVarLen=1:VarLenCategory=length:VarLenElem=FrameId
  SL_Bus_ROSVariableLengthArrayInfo FrameId_SL_Info;

  // MsgType=ros_time/Time
  SL_Bus_FRE2019_tasks_logic_ros_time_Time Stamp;
} SL_Bus_FRE2019_tasks_logic_std_msgs_Header;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_FRE2019_tasks_logic_sensor_msgs_Joy_
#define DEFINED_TYPEDEF_FOR_SL_Bus_FRE2019_tasks_logic_sensor_msgs_Joy_

// MsgType=sensor_msgs/Joy
typedef struct {
  // IsVarLen=1:VarLenCategory=data:VarLenElem=Axes_SL_Info:TruncateAction=warn
  real32_T Axes[128];

  // IsVarLen=1:VarLenCategory=length:VarLenElem=Axes
  SL_Bus_ROSVariableLengthArrayInfo Axes_SL_Info;

  // IsVarLen=1:VarLenCategory=data:VarLenElem=Buttons_SL_Info:TruncateAction=warn 
  int32_T Buttons[128];

  // IsVarLen=1:VarLenCategory=length:VarLenElem=Buttons
  SL_Bus_ROSVariableLengthArrayInfo Buttons_SL_Info;

  // MsgType=std_msgs/Header
  SL_Bus_FRE2019_tasks_logic_std_msgs_Header Header;
} SL_Bus_FRE2019_tasks_logic_sensor_msgs_Joy;

#endif

#ifndef typedef_robotics_slros_internal_block_T
#define typedef_robotics_slros_internal_block_T

typedef struct {
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
} robotics_slros_internal_block_T;

#endif                                 //typedef_robotics_slros_internal_block_T

#ifndef typedef_robotics_slros_internal_blo_j_T
#define typedef_robotics_slros_internal_blo_j_T

typedef struct {
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
} robotics_slros_internal_blo_j_T;

#endif                                 //typedef_robotics_slros_internal_blo_j_T

// Parameters (default storage)
typedef struct P_FRE2019_tasks_logic_T_ P_FRE2019_tasks_logic_T;

// Forward declaration for rtModel
typedef struct tag_RTM_FRE2019_tasks_logic_T RT_MODEL_FRE2019_tasks_logic_T;

#endif                                 // RTW_HEADER_FRE2019_tasks_logic_types_h_ 

//
// File trailer for generated code.
//
// [EOF]
//

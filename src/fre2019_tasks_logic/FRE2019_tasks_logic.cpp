//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: FRE2019_tasks_logic.cpp
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
#include "FRE2019_tasks_logic.h"
#include "FRE2019_tasks_logic_private.h"

// Named constants for Chart: '<Root>/Chart'
#define FRE2019_task_IN_NO_ACTIVE_CHILD ((uint8_T)0U)
#define FRE2019_task_IN_StartFirstMeter ((uint8_T)2U)
#define FRE2019_tasks_logi_IN_Automatic ((uint8_T)1U)
#define FRE2019_tasks_logi_IN_TurnRight ((uint8_T)4U)
#define FRE2019_tasks_logi_IN_WaitRight ((uint8_T)6U)
#define FRE2019_tasks_logic_IN_InRow   ((uint8_T)1U)
#define FRE2019_tasks_logic_IN_Manual  ((uint8_T)2U)
#define FRE2019_tasks_logic_IN_Stop    ((uint8_T)3U)
#define FRE2019_tasks_logic_IN_TurnLeft ((uint8_T)3U)
#define FRE2019_tasks_logic_IN_WaitLeft ((uint8_T)5U)

// Block signals (default storage)
B_FRE2019_tasks_logic_T FRE2019_tasks_logic_B;

// Block states (default storage)
DW_FRE2019_tasks_logic_T FRE2019_tasks_logic_DW;

// Real-time model
RT_MODEL_FRE2019_tasks_logic_T FRE2019_tasks_logic_M_;
RT_MODEL_FRE2019_tasks_logic_T *const FRE2019_tasks_logic_M =
  &FRE2019_tasks_logic_M_;

// Forward declaration for local functions
static void FRE2019_exit_internal_Automatic(void);
static void FRE2019_tasks_logic_Automatic(const int32_T direction[64]);
static void matlabCodegenHandle_matl_jtplpr(robotics_slros_internal_blo_j_T *obj);
static void matlabCodegenHandle_matlabCodeg(robotics_slros_internal_block_T *obj);

// Function for Chart: '<Root>/Chart'
static void FRE2019_exit_internal_Automatic(void)
{
  switch (FRE2019_tasks_logic_DW.is_Automatic) {
   case FRE2019_task_IN_StartFirstMeter:
    FRE2019_tasks_logic_B.straightOn = false;
    FRE2019_tasks_logic_DW.i = 1.0;
    FRE2019_tasks_logic_DW.is_Automatic = FRE2019_task_IN_NO_ACTIVE_CHILD;
    break;

   case FRE2019_tasks_logic_IN_TurnLeft:
    FRE2019_tasks_logic_B.leftTurn = false;
    FRE2019_tasks_logic_DW.i++;
    FRE2019_tasks_logic_B.Headland = false;
    FRE2019_tasks_logic_DW.is_Automatic = FRE2019_task_IN_NO_ACTIVE_CHILD;
    break;

   case FRE2019_tasks_logi_IN_TurnRight:
    FRE2019_tasks_logic_B.rightTurn = false;
    FRE2019_tasks_logic_DW.i++;
    FRE2019_tasks_logic_B.Headland = false;
    FRE2019_tasks_logic_DW.is_Automatic = FRE2019_task_IN_NO_ACTIVE_CHILD;
    break;

   default:
    FRE2019_tasks_logic_DW.is_Automatic = FRE2019_task_IN_NO_ACTIVE_CHILD;
    break;
  }
}

// Function for Chart: '<Root>/Chart'
static void FRE2019_tasks_logic_Automatic(const int32_T direction[64])
{
  int32_T tmp;
  tmp = direction[(int32_T)FRE2019_tasks_logic_DW.i - 1];
  if (tmp == 0) {
    FRE2019_exit_internal_Automatic();
    FRE2019_tasks_logic_DW.is_c3_FRE2019_tasks_logic =
      FRE2019_tasks_logic_IN_Stop;
    FRE2019_tasks_logic_B.inReihe = false;
    FRE2019_tasks_logic_B.rightTurn = false;
    FRE2019_tasks_logic_B.leftTurn = false;
    FRE2019_tasks_logic_B.straightOn = false;
    FRE2019_tasks_logic_B.manual = true;
  } else if (!FRE2019_tasks_logic_B.In1_m.Data) {
    FRE2019_exit_internal_Automatic();
    FRE2019_tasks_logic_DW.is_c3_FRE2019_tasks_logic =
      FRE2019_tasks_logic_IN_Manual;
    FRE2019_tasks_logic_B.manual = true;
  } else {
    switch (FRE2019_tasks_logic_DW.is_Automatic) {
     case FRE2019_tasks_logic_IN_InRow:
      FRE2019_tasks_logic_B.inReihe = true;

      // Constant: '<Root>/safety_trashhold'
      if ((FRE2019_tasks_logic_B.In1_f.Data <
           FRE2019_tasks_logic_P.safety_trashhold_Value) &&
          (FRE2019_tasks_logic_B.In1_d.Data <
           FRE2019_tasks_logic_P.safety_trashhold_Value) &&
          (FRE2019_tasks_logic_DW.direction == 1)) {
        FRE2019_tasks_logic_DW.is_Automatic = FRE2019_tasks_logic_IN_WaitLeft;
        FRE2019_tasks_logic_DW.temporalCounter_i1 = 0U;
      } else {
        if ((FRE2019_tasks_logic_B.In1_f.Data <
             FRE2019_tasks_logic_P.safety_trashhold_Value) &&
            (FRE2019_tasks_logic_B.In1_d.Data <
             FRE2019_tasks_logic_P.safety_trashhold_Value) &&
            (FRE2019_tasks_logic_DW.direction == 2)) {
          FRE2019_tasks_logic_DW.is_Automatic = FRE2019_tasks_logi_IN_WaitRight;
          FRE2019_tasks_logic_DW.temporalCounter_i1 = 0U;
        }
      }
      break;

     case FRE2019_task_IN_StartFirstMeter:
      if (FRE2019_tasks_logic_DW.temporalCounter_i1 >= 1U) {
        FRE2019_tasks_logic_B.straightOn = false;
        FRE2019_tasks_logic_DW.i = 1.0;
        FRE2019_tasks_logic_DW.is_Automatic = FRE2019_tasks_logic_IN_InRow;
        FRE2019_tasks_logic_DW.direction = direction[(int32_T)
          FRE2019_tasks_logic_DW.i - 1];
        FRE2019_tasks_logic_B.inReihe = true;
      }
      break;

     case FRE2019_tasks_logic_IN_TurnLeft:
      FRE2019_tasks_logic_B.inReihe = false;

      // Constant: '<Root>/safety_trashhold'
      if ((FRE2019_tasks_logic_B.In1_f.Data >=
           FRE2019_tasks_logic_P.safety_trashhold_Value) &&
          (FRE2019_tasks_logic_B.In1_d.Data >=
           FRE2019_tasks_logic_P.safety_trashhold_Value) &&
          (FRE2019_tasks_logic_DW.temporalCounter_i1 >= 30U)) {
        FRE2019_tasks_logic_B.leftTurn = false;
        FRE2019_tasks_logic_DW.i++;
        FRE2019_tasks_logic_B.Headland = false;
        FRE2019_tasks_logic_DW.is_Automatic = FRE2019_tasks_logic_IN_InRow;
        FRE2019_tasks_logic_DW.direction = direction[(int32_T)
          FRE2019_tasks_logic_DW.i - 1];
        FRE2019_tasks_logic_B.inReihe = true;
      }
      break;

     case FRE2019_tasks_logi_IN_TurnRight:
      FRE2019_tasks_logic_B.inReihe = false;

      // Constant: '<Root>/safety_trashhold'
      if ((FRE2019_tasks_logic_B.In1_f.Data >=
           FRE2019_tasks_logic_P.safety_trashhold_Value) &&
          (FRE2019_tasks_logic_B.In1_d.Data >=
           FRE2019_tasks_logic_P.safety_trashhold_Value) &&
          (FRE2019_tasks_logic_DW.temporalCounter_i1 >= 30U)) {
        FRE2019_tasks_logic_B.rightTurn = false;
        FRE2019_tasks_logic_DW.i++;
        FRE2019_tasks_logic_B.Headland = false;
        FRE2019_tasks_logic_DW.is_Automatic = FRE2019_tasks_logic_IN_InRow;
        FRE2019_tasks_logic_DW.direction = direction[(int32_T)
          FRE2019_tasks_logic_DW.i - 1];
        FRE2019_tasks_logic_B.inReihe = true;
      }
      break;

     case FRE2019_tasks_logic_IN_WaitLeft:
      // Constant: '<Root>/row_end_time'
      if (FRE2019_tasks_logic_DW.temporalCounter_i1 >= (uint32_T)ceil
          (FRE2019_tasks_logic_P.row_end_time_Value * 20.0)) {
        // Constant: '<Root>/safety_trashhold'
        if ((FRE2019_tasks_logic_B.In1_f.Data >=
             FRE2019_tasks_logic_P.safety_trashhold_Value) ||
            (FRE2019_tasks_logic_B.In1_d.Data >=
             FRE2019_tasks_logic_P.safety_trashhold_Value)) {
          FRE2019_tasks_logic_DW.is_Automatic = FRE2019_tasks_logic_IN_InRow;
          FRE2019_tasks_logic_DW.direction = direction[(int32_T)
            FRE2019_tasks_logic_DW.i - 1];
          FRE2019_tasks_logic_B.inReihe = true;
        } else {
          if (FRE2019_tasks_logic_DW.direction == 1) {
            FRE2019_tasks_logic_DW.is_Automatic =
              FRE2019_tasks_logic_IN_TurnLeft;
            FRE2019_tasks_logic_DW.temporalCounter_i1 = 0U;
            FRE2019_tasks_logic_B.inReihe = false;
            FRE2019_tasks_logic_B.leftTurn = true;
          }
        }
      }
      break;

     default:
      // Constant: '<Root>/row_end_time' incorporates:
      //   Constant: '<Root>/safety_trashhold'

      if (FRE2019_tasks_logic_DW.temporalCounter_i1 >= (uint32_T)ceil
          (FRE2019_tasks_logic_P.row_end_time_Value * 20.0)) {
        if (FRE2019_tasks_logic_DW.direction == 2) {
          FRE2019_tasks_logic_DW.is_Automatic = FRE2019_tasks_logi_IN_TurnRight;
          FRE2019_tasks_logic_DW.temporalCounter_i1 = 0U;
          FRE2019_tasks_logic_B.inReihe = false;
          FRE2019_tasks_logic_B.rightTurn = true;
        } else {
          if ((FRE2019_tasks_logic_B.In1_f.Data >=
               FRE2019_tasks_logic_P.safety_trashhold_Value) ||
              (FRE2019_tasks_logic_B.In1_d.Data >=
               FRE2019_tasks_logic_P.safety_trashhold_Value)) {
            FRE2019_tasks_logic_DW.is_Automatic = FRE2019_tasks_logic_IN_InRow;
            FRE2019_tasks_logic_DW.direction = tmp;
            FRE2019_tasks_logic_B.inReihe = true;
          }
        }
      }
      break;
    }
  }
}

static void matlabCodegenHandle_matl_jtplpr(robotics_slros_internal_blo_j_T *obj)
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
void FRE2019_tasks_logic_step(void)
{
  boolean_T b_varargout_1;
  SL_Bus_FRE2019_tasks_logic_std_msgs_Float64 b_varargout_2;
  SL_Bus_FRE2019_tasks_logic_std_msgs_Bool b_varargout_2_0;
  SL_Bus_FRE2019_tasks_logic_std_msgs_Bool rtb_BusAssignment4;
  SL_Bus_FRE2019_tasks_logic_std_msgs_Bool rtb_BusAssignment5;
  SL_Bus_FRE2019_tasks_logic_std_msgs_Bool rtb_BusAssignment3;
  SL_Bus_FRE2019_tasks_logic_std_msgs_Bool rtb_BusAssignment2;
  SL_Bus_FRE2019_tasks_logic_std_msgs_Bool rtb_BusAssignment1;
  SL_Bus_FRE2019_tasks_logic_std_msgs_Bool rtb_BusAssignment;
  int32_T i;

  // Outputs for Atomic SubSystem: '<Root>/Subscribe4'
  // MATLABSystem: '<S13>/SourceBlock' incorporates:
  //   Inport: '<S19>/In1'

  b_varargout_1 = Sub_FRE2019_tasks_logic_228.getLatestMessage
    (&FRE2019_tasks_logic_B.b_varargout_2);

  // Outputs for Enabled SubSystem: '<S13>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S19>/Enable'

  if (b_varargout_1) {
    FRE2019_tasks_logic_B.In1 = FRE2019_tasks_logic_B.b_varargout_2;
  }

  // End of MATLABSystem: '<S13>/SourceBlock'
  // End of Outputs for SubSystem: '<S13>/Enabled Subsystem'
  // End of Outputs for SubSystem: '<Root>/Subscribe4'

  // MATLAB Function: '<Root>/MATLAB Function'
  for (i = 0; i < 64; i++) {
    FRE2019_tasks_logic_B.direction[i] = FRE2019_tasks_logic_B.In1.Buttons[(i <<
      1) + 1];
  }

  // End of MATLAB Function: '<Root>/MATLAB Function'

  // Outputs for Atomic SubSystem: '<Root>/Subscribe9'
  // MATLABSystem: '<S15>/SourceBlock' incorporates:
  //   Inport: '<S21>/In1'

  b_varargout_1 = Sub_FRE2019_tasks_logic_345.getLatestMessage(&b_varargout_2);

  // Outputs for Enabled SubSystem: '<S15>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S21>/Enable'

  if (b_varargout_1) {
    FRE2019_tasks_logic_B.In1_d = b_varargout_2;
  }

  // End of MATLABSystem: '<S15>/SourceBlock'
  // End of Outputs for SubSystem: '<S15>/Enabled Subsystem'
  // End of Outputs for SubSystem: '<Root>/Subscribe9'

  // Outputs for Atomic SubSystem: '<Root>/Subscribe7'
  // MATLABSystem: '<S14>/SourceBlock' incorporates:
  //   Inport: '<S20>/In1'

  b_varargout_1 = Sub_FRE2019_tasks_logic_343.getLatestMessage(&b_varargout_2);

  // Outputs for Enabled SubSystem: '<S14>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S20>/Enable'

  if (b_varargout_1) {
    FRE2019_tasks_logic_B.In1_f = b_varargout_2;
  }

  // End of MATLABSystem: '<S14>/SourceBlock'
  // End of Outputs for SubSystem: '<S14>/Enabled Subsystem'
  // End of Outputs for SubSystem: '<Root>/Subscribe7'

  // Outputs for Atomic SubSystem: '<Root>/Subscribe10'
  // MATLABSystem: '<S10>/SourceBlock'
  Sub_FRE2019_tasks_logic_346.getLatestMessage(&b_varargout_2);

  // End of Outputs for SubSystem: '<Root>/Subscribe10'

  // Outputs for Atomic SubSystem: '<Root>/Subscribe11'
  // MATLABSystem: '<S11>/SourceBlock'
  Sub_FRE2019_tasks_logic_347.getLatestMessage(&b_varargout_2);

  // End of Outputs for SubSystem: '<Root>/Subscribe11'

  // Outputs for Atomic SubSystem: '<Root>/Subscribe2'
  // MATLABSystem: '<S12>/SourceBlock' incorporates:
  //   Inport: '<S18>/In1'

  b_varargout_1 = Sub_FRE2019_tasks_logic_226.getLatestMessage(&b_varargout_2_0);

  // Outputs for Enabled SubSystem: '<S12>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S18>/Enable'

  if (b_varargout_1) {
    FRE2019_tasks_logic_B.In1_m = b_varargout_2_0;
  }

  // End of MATLABSystem: '<S12>/SourceBlock'
  // End of Outputs for SubSystem: '<S12>/Enabled Subsystem'
  // End of Outputs for SubSystem: '<Root>/Subscribe2'

  // Chart: '<Root>/Chart'
  if (FRE2019_tasks_logic_DW.temporalCounter_i1 < MAX_uint32_T) {
    FRE2019_tasks_logic_DW.temporalCounter_i1++;
  }

  if (FRE2019_tasks_logic_DW.is_active_c3_FRE2019_tasks_logi == 0U) {
    FRE2019_tasks_logic_DW.is_active_c3_FRE2019_tasks_logi = 1U;
    FRE2019_tasks_logic_DW.i = 1.0;
    FRE2019_tasks_logic_DW.is_c3_FRE2019_tasks_logic =
      FRE2019_tasks_logic_IN_Manual;
    FRE2019_tasks_logic_B.manual = true;
  } else {
    switch (FRE2019_tasks_logic_DW.is_c3_FRE2019_tasks_logic) {
     case FRE2019_tasks_logi_IN_Automatic:
      FRE2019_tasks_logic_Automatic(FRE2019_tasks_logic_B.direction);
      break;

     case FRE2019_tasks_logic_IN_Manual:
      if (FRE2019_tasks_logic_B.In1_m.Data) {
        FRE2019_tasks_logic_B.manual = false;
        FRE2019_tasks_logic_DW.is_c3_FRE2019_tasks_logic =
          FRE2019_tasks_logi_IN_Automatic;
        FRE2019_tasks_logic_DW.is_Automatic = FRE2019_task_IN_StartFirstMeter;
        FRE2019_tasks_logic_DW.temporalCounter_i1 = 0U;
        FRE2019_tasks_logic_B.straightOn = true;
      }
      break;

     default:
      FRE2019_tasks_logic_B.inReihe = false;
      if (!FRE2019_tasks_logic_B.In1_m.Data) {
        FRE2019_tasks_logic_DW.is_c3_FRE2019_tasks_logic =
          FRE2019_tasks_logic_IN_Manual;
        FRE2019_tasks_logic_B.manual = true;
      }
      break;
    }
  }

  // End of Chart: '<Root>/Chart'

  // BusAssignment: '<Root>/Bus Assignment'
  rtb_BusAssignment.Data = FRE2019_tasks_logic_B.Headland;

  // Outputs for Atomic SubSystem: '<Root>/Publish'
  // MATLABSystem: '<S4>/SinkBlock'
  Pub_FRE2019_tasks_logic_368.publish(&rtb_BusAssignment);

  // End of Outputs for SubSystem: '<Root>/Publish'

  // BusAssignment: '<Root>/Bus Assignment1'
  rtb_BusAssignment1.Data = FRE2019_tasks_logic_B.inReihe;

  // Outputs for Atomic SubSystem: '<Root>/Publish1'
  // MATLABSystem: '<S5>/SinkBlock'
  Pub_FRE2019_tasks_logic_369.publish(&rtb_BusAssignment1);

  // End of Outputs for SubSystem: '<Root>/Publish1'

  // BusAssignment: '<Root>/Bus Assignment2'
  rtb_BusAssignment2.Data = FRE2019_tasks_logic_B.leftTurn;

  // Outputs for Atomic SubSystem: '<Root>/Publish2'
  // MATLABSystem: '<S6>/SinkBlock'
  Pub_FRE2019_tasks_logic_370.publish(&rtb_BusAssignment2);

  // End of Outputs for SubSystem: '<Root>/Publish2'

  // BusAssignment: '<Root>/Bus Assignment3'
  rtb_BusAssignment3.Data = FRE2019_tasks_logic_B.rightTurn;

  // Outputs for Atomic SubSystem: '<Root>/Publish3'
  // MATLABSystem: '<S7>/SinkBlock'
  Pub_FRE2019_tasks_logic_371.publish(&rtb_BusAssignment3);

  // End of Outputs for SubSystem: '<Root>/Publish3'

  // BusAssignment: '<Root>/Bus Assignment5'
  rtb_BusAssignment5.Data = FRE2019_tasks_logic_B.manual;

  // Outputs for Atomic SubSystem: '<Root>/Publish4'
  // MATLABSystem: '<S8>/SinkBlock'
  Pub_FRE2019_tasks_logic_372.publish(&rtb_BusAssignment5);

  // End of Outputs for SubSystem: '<Root>/Publish4'

  // BusAssignment: '<Root>/Bus Assignment4'
  rtb_BusAssignment4.Data = FRE2019_tasks_logic_B.straightOn;

  // Outputs for Atomic SubSystem: '<Root>/Publish5'
  // MATLABSystem: '<S9>/SinkBlock'
  Pub_FRE2019_tasks_logic_373.publish(&rtb_BusAssignment4);

  // End of Outputs for SubSystem: '<Root>/Publish5'
}

// Model initialize function
void FRE2019_tasks_logic_initialize(void)
{
  // Registration code

  // initialize error status
  rtmSetErrorStatus(FRE2019_tasks_logic_M, (NULL));

  // block I/O
  (void) memset(((void *) &FRE2019_tasks_logic_B), 0,
                sizeof(B_FRE2019_tasks_logic_T));

  // states (dwork)
  (void) memset((void *)&FRE2019_tasks_logic_DW, 0,
                sizeof(DW_FRE2019_tasks_logic_T));

  {
    static const char_T tmp[18] = { '/', 'l', 'o', 'g', 'i', 'c', '/', 's', 't',
      'r', 'a', 'i', 'g', 'h', 't', '_', 'o', 'n' };

    static const char_T tmp_0[18] = { '/', 'l', 'o', 'g', 'i', 'c', '/', 'm',
      'a', 'n', 'u', 'a', 'l', '_', 'm', 'o', 'd', 'e' };

    static const char_T tmp_1[17] = { '/', 'l', 'o', 'g', 'i', 'c', '/', 'r',
      'i', 'g', 'h', 't', '_', 't', 'u', 'r', 'n' };

    static const char_T tmp_2[16] = { '/', 'l', 'o', 'g', 'i', 'c', '/', 'l',
      'e', 'f', 't', '_', 't', 'u', 'r', 'n' };

    static const char_T tmp_3[21] = { '/', 'l', 'o', 'g', 'i', 'c', '/', 'i',
      'n', 'b', 'e', 't', 'w', 'e', 'e', 'n', '_', 'r', 'o', 'w', 's' };

    static const char_T tmp_4[18] = { '/', 'l', 'o', 'g', 'i', 'c', '/', 'i',
      'n', '_', 'h', 'e', 'a', 'd', 'l', 'a', 'n', 'd' };

    static const char_T tmp_5[22] = { '/', 't', 'e', 'l', 'e', 'o', 'p', '/',
      'a', 'u', 't', 'o', 'm', 'a', 't', 'i', 'c', '_', 'm', 'o', 'd', 'e' };

    static const char_T tmp_6[21] = { '/', 'r', 'o', 'w', '/', 'r', 'o', 'w',
      's', '_', 'p', 'a', 's', 's', 'e', 'd', '_', 'l', 'e', 'f', 't' };

    static const char_T tmp_7[22] = { '/', 'r', 'o', 'w', '/', 'r', 'o', 'w',
      's', '_', 'p', 'a', 's', 's', 'e', 'd', '_', 'r', 'i', 'g', 'h', 't' };

    static const char_T tmp_8[16] = { '/', 'r', 'o', 'w', '/', 'l', 'e', 'f',
      't', '_', 's', 'a', 'f', 'e', 't', 'y' };

    static const char_T tmp_9[17] = { '/', 'r', 'o', 'w', '/', 'r', 'i', 'g',
      'h', 't', '_', 's', 'a', 'f', 'e', 't', 'y' };

    static const char_T tmp_a[25] = { '/', 't', 'e', 'l', 'e', 'o', 'p', '/',
      'm', 'o', 'v', 'e', 'm', 'e', 'n', 't', '_', 's', 'e', 'q', 'u', 'e', 'n',
      'c', 'e' };

    char_T tmp_b[19];
    char_T tmp_c[17];
    char_T tmp_d[18];
    int32_T i;

    // Start for Atomic SubSystem: '<Root>/Subscribe4'
    // Start for MATLABSystem: '<S13>/SourceBlock'
    FRE2019_tasks_logic_DW.obj_i.matlabCodegenIsDeleted = true;
    FRE2019_tasks_logic_DW.obj_i.isInitialized = 0;
    FRE2019_tasks_logic_DW.obj_i.matlabCodegenIsDeleted = false;
    FRE2019_tasks_logic_DW.obj_i.isSetupComplete = false;
    FRE2019_tasks_logic_DW.obj_i.isInitialized = 1;
    for (i = 0; i < 25; i++) {
      FRE2019_tasks_logic_B.cv0[i] = tmp_a[i];
    }

    FRE2019_tasks_logic_B.cv0[25] = '\x00';
    Sub_FRE2019_tasks_logic_228.createSubscriber(FRE2019_tasks_logic_B.cv0, 1);
    FRE2019_tasks_logic_DW.obj_i.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S13>/SourceBlock'
    // End of Start for SubSystem: '<Root>/Subscribe4'

    // Start for Atomic SubSystem: '<Root>/Subscribe9'
    // Start for MATLABSystem: '<S15>/SourceBlock'
    FRE2019_tasks_logic_DW.obj_j.matlabCodegenIsDeleted = true;
    FRE2019_tasks_logic_DW.obj_j.isInitialized = 0;
    FRE2019_tasks_logic_DW.obj_j.matlabCodegenIsDeleted = false;
    FRE2019_tasks_logic_DW.obj_j.isSetupComplete = false;
    FRE2019_tasks_logic_DW.obj_j.isInitialized = 1;
    for (i = 0; i < 17; i++) {
      tmp_d[i] = tmp_9[i];
    }

    tmp_d[17] = '\x00';
    Sub_FRE2019_tasks_logic_345.createSubscriber(tmp_d, 1);
    FRE2019_tasks_logic_DW.obj_j.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S15>/SourceBlock'
    // End of Start for SubSystem: '<Root>/Subscribe9'

    // Start for Atomic SubSystem: '<Root>/Subscribe7'
    // Start for MATLABSystem: '<S14>/SourceBlock'
    FRE2019_tasks_logic_DW.obj_b.matlabCodegenIsDeleted = true;
    FRE2019_tasks_logic_DW.obj_b.isInitialized = 0;
    FRE2019_tasks_logic_DW.obj_b.matlabCodegenIsDeleted = false;
    FRE2019_tasks_logic_DW.obj_b.isSetupComplete = false;
    FRE2019_tasks_logic_DW.obj_b.isInitialized = 1;
    for (i = 0; i < 16; i++) {
      tmp_c[i] = tmp_8[i];
    }

    tmp_c[16] = '\x00';
    Sub_FRE2019_tasks_logic_343.createSubscriber(tmp_c, 1);
    FRE2019_tasks_logic_DW.obj_b.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S14>/SourceBlock'
    // End of Start for SubSystem: '<Root>/Subscribe7'

    // Start for Atomic SubSystem: '<Root>/Subscribe10'
    // Start for MATLABSystem: '<S10>/SourceBlock'
    FRE2019_tasks_logic_DW.obj_f.matlabCodegenIsDeleted = true;
    FRE2019_tasks_logic_DW.obj_f.isInitialized = 0;
    FRE2019_tasks_logic_DW.obj_f.matlabCodegenIsDeleted = false;
    FRE2019_tasks_logic_DW.obj_f.isSetupComplete = false;
    FRE2019_tasks_logic_DW.obj_f.isInitialized = 1;
    for (i = 0; i < 22; i++) {
      FRE2019_tasks_logic_B.cv1[i] = tmp_7[i];
    }

    FRE2019_tasks_logic_B.cv1[22] = '\x00';
    Sub_FRE2019_tasks_logic_346.createSubscriber(FRE2019_tasks_logic_B.cv1, 1);
    FRE2019_tasks_logic_DW.obj_f.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S10>/SourceBlock'
    // End of Start for SubSystem: '<Root>/Subscribe10'

    // Start for Atomic SubSystem: '<Root>/Subscribe11'
    // Start for MATLABSystem: '<S11>/SourceBlock'
    FRE2019_tasks_logic_DW.obj_i4.matlabCodegenIsDeleted = true;
    FRE2019_tasks_logic_DW.obj_i4.isInitialized = 0;
    FRE2019_tasks_logic_DW.obj_i4.matlabCodegenIsDeleted = false;
    FRE2019_tasks_logic_DW.obj_i4.isSetupComplete = false;
    FRE2019_tasks_logic_DW.obj_i4.isInitialized = 1;
    for (i = 0; i < 21; i++) {
      FRE2019_tasks_logic_B.cv2[i] = tmp_6[i];
    }

    FRE2019_tasks_logic_B.cv2[21] = '\x00';
    Sub_FRE2019_tasks_logic_347.createSubscriber(FRE2019_tasks_logic_B.cv2, 1);
    FRE2019_tasks_logic_DW.obj_i4.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S11>/SourceBlock'
    // End of Start for SubSystem: '<Root>/Subscribe11'

    // Start for Atomic SubSystem: '<Root>/Subscribe2'
    // Start for MATLABSystem: '<S12>/SourceBlock'
    FRE2019_tasks_logic_DW.obj_is.matlabCodegenIsDeleted = true;
    FRE2019_tasks_logic_DW.obj_is.isInitialized = 0;
    FRE2019_tasks_logic_DW.obj_is.matlabCodegenIsDeleted = false;
    FRE2019_tasks_logic_DW.obj_is.isSetupComplete = false;
    FRE2019_tasks_logic_DW.obj_is.isInitialized = 1;
    for (i = 0; i < 22; i++) {
      FRE2019_tasks_logic_B.cv1[i] = tmp_5[i];
    }

    FRE2019_tasks_logic_B.cv1[22] = '\x00';
    Sub_FRE2019_tasks_logic_226.createSubscriber(FRE2019_tasks_logic_B.cv1, 1);
    FRE2019_tasks_logic_DW.obj_is.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S12>/SourceBlock'
    // End of Start for SubSystem: '<Root>/Subscribe2'

    // Start for Atomic SubSystem: '<Root>/Publish'
    // Start for MATLABSystem: '<S4>/SinkBlock'
    FRE2019_tasks_logic_DW.obj_g.matlabCodegenIsDeleted = true;
    FRE2019_tasks_logic_DW.obj_g.isInitialized = 0;
    FRE2019_tasks_logic_DW.obj_g.matlabCodegenIsDeleted = false;
    FRE2019_tasks_logic_DW.obj_g.isSetupComplete = false;
    FRE2019_tasks_logic_DW.obj_g.isInitialized = 1;
    for (i = 0; i < 18; i++) {
      tmp_b[i] = tmp_4[i];
    }

    tmp_b[18] = '\x00';
    Pub_FRE2019_tasks_logic_368.createPublisher(tmp_b, 1);
    FRE2019_tasks_logic_DW.obj_g.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S4>/SinkBlock'
    // End of Start for SubSystem: '<Root>/Publish'

    // Start for Atomic SubSystem: '<Root>/Publish1'
    // Start for MATLABSystem: '<S5>/SinkBlock'
    FRE2019_tasks_logic_DW.obj_p.matlabCodegenIsDeleted = true;
    FRE2019_tasks_logic_DW.obj_p.isInitialized = 0;
    FRE2019_tasks_logic_DW.obj_p.matlabCodegenIsDeleted = false;
    FRE2019_tasks_logic_DW.obj_p.isSetupComplete = false;
    FRE2019_tasks_logic_DW.obj_p.isInitialized = 1;
    for (i = 0; i < 21; i++) {
      FRE2019_tasks_logic_B.cv2[i] = tmp_3[i];
    }

    FRE2019_tasks_logic_B.cv2[21] = '\x00';
    Pub_FRE2019_tasks_logic_369.createPublisher(FRE2019_tasks_logic_B.cv2, 1);
    FRE2019_tasks_logic_DW.obj_p.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S5>/SinkBlock'
    // End of Start for SubSystem: '<Root>/Publish1'

    // Start for Atomic SubSystem: '<Root>/Publish2'
    // Start for MATLABSystem: '<S6>/SinkBlock'
    FRE2019_tasks_logic_DW.obj_a.matlabCodegenIsDeleted = true;
    FRE2019_tasks_logic_DW.obj_a.isInitialized = 0;
    FRE2019_tasks_logic_DW.obj_a.matlabCodegenIsDeleted = false;
    FRE2019_tasks_logic_DW.obj_a.isSetupComplete = false;
    FRE2019_tasks_logic_DW.obj_a.isInitialized = 1;
    for (i = 0; i < 16; i++) {
      tmp_c[i] = tmp_2[i];
    }

    tmp_c[16] = '\x00';
    Pub_FRE2019_tasks_logic_370.createPublisher(tmp_c, 1);
    FRE2019_tasks_logic_DW.obj_a.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S6>/SinkBlock'
    // End of Start for SubSystem: '<Root>/Publish2'

    // Start for Atomic SubSystem: '<Root>/Publish3'
    // Start for MATLABSystem: '<S7>/SinkBlock'
    FRE2019_tasks_logic_DW.obj_h.matlabCodegenIsDeleted = true;
    FRE2019_tasks_logic_DW.obj_h.isInitialized = 0;
    FRE2019_tasks_logic_DW.obj_h.matlabCodegenIsDeleted = false;
    FRE2019_tasks_logic_DW.obj_h.isSetupComplete = false;
    FRE2019_tasks_logic_DW.obj_h.isInitialized = 1;
    for (i = 0; i < 17; i++) {
      tmp_d[i] = tmp_1[i];
    }

    tmp_d[17] = '\x00';
    Pub_FRE2019_tasks_logic_371.createPublisher(tmp_d, 1);
    FRE2019_tasks_logic_DW.obj_h.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S7>/SinkBlock'
    // End of Start for SubSystem: '<Root>/Publish3'

    // Start for Atomic SubSystem: '<Root>/Publish4'
    // Start for MATLABSystem: '<S8>/SinkBlock'
    FRE2019_tasks_logic_DW.obj_e.matlabCodegenIsDeleted = true;
    FRE2019_tasks_logic_DW.obj_e.isInitialized = 0;
    FRE2019_tasks_logic_DW.obj_e.matlabCodegenIsDeleted = false;
    FRE2019_tasks_logic_DW.obj_e.isSetupComplete = false;
    FRE2019_tasks_logic_DW.obj_e.isInitialized = 1;
    for (i = 0; i < 18; i++) {
      tmp_b[i] = tmp_0[i];
    }

    tmp_b[18] = '\x00';
    Pub_FRE2019_tasks_logic_372.createPublisher(tmp_b, 1);
    FRE2019_tasks_logic_DW.obj_e.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S8>/SinkBlock'
    // End of Start for SubSystem: '<Root>/Publish4'

    // Start for Atomic SubSystem: '<Root>/Publish5'
    // Start for MATLABSystem: '<S9>/SinkBlock'
    FRE2019_tasks_logic_DW.obj.matlabCodegenIsDeleted = true;
    FRE2019_tasks_logic_DW.obj.isInitialized = 0;
    FRE2019_tasks_logic_DW.obj.matlabCodegenIsDeleted = false;
    FRE2019_tasks_logic_DW.obj.isSetupComplete = false;
    FRE2019_tasks_logic_DW.obj.isInitialized = 1;
    for (i = 0; i < 18; i++) {
      tmp_b[i] = tmp[i];
    }

    tmp_b[18] = '\x00';
    Pub_FRE2019_tasks_logic_373.createPublisher(tmp_b, 1);
    FRE2019_tasks_logic_DW.obj.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S9>/SinkBlock'
    // End of Start for SubSystem: '<Root>/Publish5'

    // SystemInitialize for Atomic SubSystem: '<Root>/Subscribe4'
    // SystemInitialize for Enabled SubSystem: '<S13>/Enabled Subsystem'
    // SystemInitialize for Outport: '<S19>/Out1'
    FRE2019_tasks_logic_B.In1 = FRE2019_tasks_logic_P.Out1_Y0;

    // End of SystemInitialize for SubSystem: '<S13>/Enabled Subsystem'
    // End of SystemInitialize for SubSystem: '<Root>/Subscribe4'

    // SystemInitialize for Atomic SubSystem: '<Root>/Subscribe9'
    // SystemInitialize for Enabled SubSystem: '<S15>/Enabled Subsystem'
    // SystemInitialize for Outport: '<S21>/Out1'
    FRE2019_tasks_logic_B.In1_d = FRE2019_tasks_logic_P.Out1_Y0_b;

    // End of SystemInitialize for SubSystem: '<S15>/Enabled Subsystem'
    // End of SystemInitialize for SubSystem: '<Root>/Subscribe9'

    // SystemInitialize for Atomic SubSystem: '<Root>/Subscribe7'
    // SystemInitialize for Enabled SubSystem: '<S14>/Enabled Subsystem'
    // SystemInitialize for Outport: '<S20>/Out1'
    FRE2019_tasks_logic_B.In1_f = FRE2019_tasks_logic_P.Out1_Y0_n;

    // End of SystemInitialize for SubSystem: '<S14>/Enabled Subsystem'
    // End of SystemInitialize for SubSystem: '<Root>/Subscribe7'

    // SystemInitialize for Atomic SubSystem: '<Root>/Subscribe2'
    // SystemInitialize for Enabled SubSystem: '<S12>/Enabled Subsystem'
    // SystemInitialize for Outport: '<S18>/Out1'
    FRE2019_tasks_logic_B.In1_m = FRE2019_tasks_logic_P.Out1_Y0_k;

    // End of SystemInitialize for SubSystem: '<S12>/Enabled Subsystem'
    // End of SystemInitialize for SubSystem: '<Root>/Subscribe2'

    // SystemInitialize for Chart: '<Root>/Chart'
    FRE2019_tasks_logic_DW.is_Automatic = FRE2019_task_IN_NO_ACTIVE_CHILD;
    FRE2019_tasks_logic_DW.temporalCounter_i1 = 0U;
    FRE2019_tasks_logic_DW.is_active_c3_FRE2019_tasks_logi = 0U;
    FRE2019_tasks_logic_DW.is_c3_FRE2019_tasks_logic =
      FRE2019_task_IN_NO_ACTIVE_CHILD;
  }
}

// Model terminate function
void FRE2019_tasks_logic_terminate(void)
{
  // Terminate for Atomic SubSystem: '<Root>/Subscribe4'
  // Terminate for MATLABSystem: '<S13>/SourceBlock'
  matlabCodegenHandle_matl_jtplpr(&FRE2019_tasks_logic_DW.obj_i);

  // End of Terminate for SubSystem: '<Root>/Subscribe4'

  // Terminate for Atomic SubSystem: '<Root>/Subscribe9'
  // Terminate for MATLABSystem: '<S15>/SourceBlock'
  matlabCodegenHandle_matl_jtplpr(&FRE2019_tasks_logic_DW.obj_j);

  // End of Terminate for SubSystem: '<Root>/Subscribe9'

  // Terminate for Atomic SubSystem: '<Root>/Subscribe7'
  // Terminate for MATLABSystem: '<S14>/SourceBlock'
  matlabCodegenHandle_matl_jtplpr(&FRE2019_tasks_logic_DW.obj_b);

  // End of Terminate for SubSystem: '<Root>/Subscribe7'

  // Terminate for Atomic SubSystem: '<Root>/Subscribe10'
  // Terminate for MATLABSystem: '<S10>/SourceBlock'
  matlabCodegenHandle_matl_jtplpr(&FRE2019_tasks_logic_DW.obj_f);

  // End of Terminate for SubSystem: '<Root>/Subscribe10'

  // Terminate for Atomic SubSystem: '<Root>/Subscribe11'
  // Terminate for MATLABSystem: '<S11>/SourceBlock'
  matlabCodegenHandle_matl_jtplpr(&FRE2019_tasks_logic_DW.obj_i4);

  // End of Terminate for SubSystem: '<Root>/Subscribe11'

  // Terminate for Atomic SubSystem: '<Root>/Subscribe2'
  // Terminate for MATLABSystem: '<S12>/SourceBlock'
  matlabCodegenHandle_matl_jtplpr(&FRE2019_tasks_logic_DW.obj_is);

  // End of Terminate for SubSystem: '<Root>/Subscribe2'

  // Terminate for Atomic SubSystem: '<Root>/Publish'
  // Terminate for MATLABSystem: '<S4>/SinkBlock'
  matlabCodegenHandle_matlabCodeg(&FRE2019_tasks_logic_DW.obj_g);

  // End of Terminate for SubSystem: '<Root>/Publish'

  // Terminate for Atomic SubSystem: '<Root>/Publish1'
  // Terminate for MATLABSystem: '<S5>/SinkBlock'
  matlabCodegenHandle_matlabCodeg(&FRE2019_tasks_logic_DW.obj_p);

  // End of Terminate for SubSystem: '<Root>/Publish1'

  // Terminate for Atomic SubSystem: '<Root>/Publish2'
  // Terminate for MATLABSystem: '<S6>/SinkBlock'
  matlabCodegenHandle_matlabCodeg(&FRE2019_tasks_logic_DW.obj_a);

  // End of Terminate for SubSystem: '<Root>/Publish2'

  // Terminate for Atomic SubSystem: '<Root>/Publish3'
  // Terminate for MATLABSystem: '<S7>/SinkBlock'
  matlabCodegenHandle_matlabCodeg(&FRE2019_tasks_logic_DW.obj_h);

  // End of Terminate for SubSystem: '<Root>/Publish3'

  // Terminate for Atomic SubSystem: '<Root>/Publish4'
  // Terminate for MATLABSystem: '<S8>/SinkBlock'
  matlabCodegenHandle_matlabCodeg(&FRE2019_tasks_logic_DW.obj_e);

  // End of Terminate for SubSystem: '<Root>/Publish4'

  // Terminate for Atomic SubSystem: '<Root>/Publish5'
  // Terminate for MATLABSystem: '<S9>/SinkBlock'
  matlabCodegenHandle_matlabCodeg(&FRE2019_tasks_logic_DW.obj);

  // End of Terminate for SubSystem: '<Root>/Publish5'
}

//
// File trailer for generated code.
//
// [EOF]
//

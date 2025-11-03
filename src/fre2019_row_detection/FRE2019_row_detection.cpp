//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: FRE2019_row_detection.cpp
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
#include "FRE2019_row_detection.h"
#include "FRE2019_row_detection_private.h"

// Block signals (default storage)
B_FRE2019_row_detection_T FRE2019_row_detection_B;

// Block states (default storage)
DW_FRE2019_row_detection_T FRE2019_row_detection_DW;

// Real-time model
RT_MODEL_FRE2019_row_detectio_T FRE2019_row_detection_M_;
RT_MODEL_FRE2019_row_detectio_T *const FRE2019_row_detection_M =
  &FRE2019_row_detection_M_;

// Forward declaration for local functions
static void matlabCodegenHandle_matl_jvtmpz(robotics_slros_internal_blo_j_T *obj);
static void matlabCodegenHandle_matlabCodeg(robotics_slros_internal_block_T *obj);
static void matlabCodegenHandle_matl_jvtmpz(robotics_slros_internal_blo_j_T *obj)
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
void FRE2019_row_detection_step(void)
{
  boolean_T b_varargout_1;
  SL_Bus_FRE2019_row_detection_std_msgs_Float64 rtb_BusAssignment5;
  SL_Bus_FRE2019_row_detection_std_msgs_Float64 rtb_BusAssignment2;
  real_T rtb_Abs2;
  real_T rtb_Gain1;
  real_T rtb_Preventdiv1;
  int32_T ForEach_itr_i;
  int32_T i;
  int32_T u0;

  // Outputs for Atomic SubSystem: '<Root>/Subscribe'
  // MATLABSystem: '<S9>/SourceBlock' incorporates:
  //   Inport: '<S17>/In1'

  b_varargout_1 = Sub_FRE2019_row_detection_99.getLatestMessage
    (&FRE2019_row_detection_B.b_varargout_2);

  // Outputs for Enabled SubSystem: '<S9>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S17>/Enable'

  if (b_varargout_1) {
    FRE2019_row_detection_B.In1 = FRE2019_row_detection_B.b_varargout_2;
  }

  // End of MATLABSystem: '<S9>/SourceBlock'
  // End of Outputs for SubSystem: '<S9>/Enabled Subsystem'
  // End of Outputs for SubSystem: '<Root>/Subscribe'

  // DataTypeConversion: '<S8>/Data Type Conversion'
  for (i = 0; i < 720; i++) {
    FRE2019_row_detection_B.DataTypeConversion[i] =
      FRE2019_row_detection_B.In1.Ranges[i];
  }

  // End of DataTypeConversion: '<S8>/Data Type Conversion'

  // Outputs for Iterator SubSystem: '<S8>/Box check right side' incorporates:
  //   ForEach: '<S11>/For Each'

  for (i = 0; i < 360; i++) {
    // Switch: '<S11>/right side of the right box' incorporates:
    //   Constant: '<S11>/zero'
    //   Constant: '<S8>/scan_angles'
    //   Fcn: '<S16>/r->x'
    //   ForEachSliceSelector: '<S11>/ImpSel_InsertedFor_scan_phi_in_at_outport_0'
    //   ForEachSliceSelector: '<S11>/ImpSel_InsertedFor_scan_r_in_at_outport_0'

    if (FRE2019_row_detection_B.DataTypeConversion[i] * cos
        (FRE2019_row_detection_P.scan_angles_Value[i]) >=
        FRE2019_row_detection_P.scan_box_height) {
      rtb_Abs2 = FRE2019_row_detection_P.CoreSubsys_p.zero_Value;
    } else {
      // Fcn: '<S16>/theta->y'
      rtb_Abs2 = FRE2019_row_detection_B.DataTypeConversion[i] * sin
        (FRE2019_row_detection_P.scan_angles_Value[i]);

      // Switch: '<S11>/bottom side of the right box' incorporates:
      //   Abs: '<S11>/Abs1'
      //   Constant: '<S11>/zero'

      if (fabs(rtb_Abs2) >= FRE2019_row_detection_P.scan_box_width / 2.0 + 0.3)
      {
        rtb_Abs2 = FRE2019_row_detection_P.CoreSubsys_p.zero_Value;
      }

      // End of Switch: '<S11>/bottom side of the right box'

      // Switch: '<S11>/bottom side of the right box1' incorporates:
      //   Abs: '<S11>/Abs2'
      //   Constant: '<S11>/zero'

      if (!(fabs(rtb_Abs2) >=
            FRE2019_row_detection_P.CoreSubsys_p.bottomsideoftherightbox1_Thresh))
      {
        rtb_Abs2 = FRE2019_row_detection_P.CoreSubsys_p.zero_Value;
      }

      // End of Switch: '<S11>/bottom side of the right box1'
    }

    // End of Switch: '<S11>/right side of the right box'

    // ForEachSliceAssignment: '<S11>/ImpAsg_InsertedFor_scan_y_out_at_inport_0' 
    FRE2019_row_detection_B.ImpAsg_InsertedFor_scan_y_o[i] = rtb_Abs2;
  }

  // End of Outputs for SubSystem: '<S8>/Box check right side'

  // Find: '<S13>/Find Nonzero Elements'
  FRE2019_row_detection_DW.FindNonzeroElements_DIMS1 = 0;
  i = 0;

  // Outputs for Iterator SubSystem: '<S8>/Box check left side' incorporates:
  //   ForEach: '<S10>/For Each'

  for (ForEach_itr_i = 0; ForEach_itr_i < 360; ForEach_itr_i++) {
    if (FRE2019_row_detection_B.ImpAsg_InsertedFor_scan_y_o[i] != 0.0) {
      FRE2019_row_detection_DW.FindNonzeroElements_DIMS1++;
    }

    i++;

    // ForEachSliceSelector: '<S10>/ImpSel_InsertedFor_scan_phi_in_at_outport_0' incorporates:
    //   Constant: '<S8>/scan_angles'

    rtb_Abs2 = FRE2019_row_detection_P.scan_angles_Value[ForEach_itr_i + 360];

    // ForEachSliceSelector: '<S10>/ImpSel_InsertedFor_scan_r_in_at_outport_0'
    rtb_Preventdiv1 = FRE2019_row_detection_B.DataTypeConversion[ForEach_itr_i +
      360];

    // Switch: '<S10>/right side of the left box' incorporates:
    //   Constant: '<S10>/zero'
    //   Constant: '<S8>/scan_angles'
    //   Fcn: '<S15>/r->x'
    //   ForEachSliceSelector: '<S10>/ImpSel_InsertedFor_scan_phi_in_at_outport_0'
    //   ForEachSliceSelector: '<S10>/ImpSel_InsertedFor_scan_r_in_at_outport_0'

    if (rtb_Preventdiv1 * cos(rtb_Abs2) >=
        FRE2019_row_detection_P.scan_box_height) {
      rtb_Abs2 = FRE2019_row_detection_P.CoreSubsys.zero_Value;
    } else {
      // Fcn: '<S15>/theta->y'
      rtb_Abs2 = rtb_Preventdiv1 * sin(rtb_Abs2);

      // Switch: '<S10>/bottom side of the left box' incorporates:
      //   Abs: '<S10>/Abs1'
      //   Constant: '<S10>/zero'

      if (fabs(rtb_Abs2) >= FRE2019_row_detection_P.scan_box_width / 2.0 + 0.3)
      {
        rtb_Abs2 = FRE2019_row_detection_P.CoreSubsys.zero_Value;
      }

      // End of Switch: '<S10>/bottom side of the left box'

      // Switch: '<S10>/bottom side of the right box1' incorporates:
      //   Abs: '<S10>/Abs2'
      //   Constant: '<S10>/zero'

      if (!(fabs(rtb_Abs2) >=
            FRE2019_row_detection_P.CoreSubsys.bottomsideoftherightbox1_Thresh))
      {
        rtb_Abs2 = FRE2019_row_detection_P.CoreSubsys.zero_Value;
      }

      // End of Switch: '<S10>/bottom side of the right box1'
    }

    // End of Switch: '<S10>/right side of the left box'

    // ForEachSliceAssignment: '<S10>/ImpAsg_InsertedFor_scan_y_out_at_inport_0' 
    FRE2019_row_detection_B.Histogram1[ForEach_itr_i] = rtb_Abs2;
  }

  // End of Find: '<S13>/Find Nonzero Elements'
  // End of Outputs for SubSystem: '<S8>/Box check left side'

  // Selector: '<S13>/Selector'
  FRE2019_row_detection_DW.Selector_DIMS1 =
    FRE2019_row_detection_DW.FindNonzeroElements_DIMS1;

  // Find: '<S12>/Find Nonzero Elements1'
  FRE2019_row_detection_DW.FindNonzeroElements1_DIMS1 = 0;
  i = 0;
  for (ForEach_itr_i = 0; ForEach_itr_i < 360; ForEach_itr_i++) {
    if (FRE2019_row_detection_B.Histogram1[i] != 0.0) {
      FRE2019_row_detection_DW.FindNonzeroElements1_DIMS1++;
    }

    i++;
  }

  // End of Find: '<S12>/Find Nonzero Elements1'

  // Selector: '<S12>/Selector3'
  FRE2019_row_detection_DW.Selector3_DIMS1 =
    FRE2019_row_detection_DW.FindNonzeroElements1_DIMS1;

  // Switch: '<S12>/Prevent div 1' incorporates:
  //   Constant: '<S12>/Const2'
  //   Width: '<S12>/Width1'

  if (FRE2019_row_detection_DW.Selector3_DIMS1 != 0) {
    rtb_Preventdiv1 = FRE2019_row_detection_DW.Selector3_DIMS1;
  } else {
    rtb_Preventdiv1 = FRE2019_row_detection_P.Const2_Value;
  }

  // End of Switch: '<S12>/Prevent div 1'

  // Sum: '<S12>/Sum of Elements1'
  rtb_Abs2 = -0.0;
  for (i = 0; i < 360; i++) {
    rtb_Abs2 += FRE2019_row_detection_B.Histogram1[i];
  }

  // BusAssignment: '<Root>/Bus Assignment2' incorporates:
  //   Product: '<S12>/Divide2'
  //   Sum: '<S12>/Sum of Elements1'

  rtb_BusAssignment2.Data = rtb_Abs2 / rtb_Preventdiv1;

  // Outputs for Atomic SubSystem: '<Root>/Publish2'
  // MATLABSystem: '<S4>/SinkBlock'
  Pub_FRE2019_row_detection_106.publish(&rtb_BusAssignment2);

  // End of Outputs for SubSystem: '<Root>/Publish2'

  // Outputs for Atomic SubSystem: '<S8>/Histogram analysis'
  for (i = 0; i < 360; i++) {
    // Product: '<S14>/Product' incorporates:
    //   Constant: '<S8>/scan_angles'
    //   Trigonometry: '<S14>/Trigonometric Function'

    FRE2019_row_detection_B.Histogram1[i] =
      FRE2019_row_detection_B.DataTypeConversion[i] * cos
      (FRE2019_row_detection_P.scan_angles_Value[i]);

    // Product: '<S14>/Product1' incorporates:
    //   Constant: '<S8>/scan_angles'
    //   Trigonometry: '<S14>/Trigonometric Function1'

    FRE2019_row_detection_B.Product1[i] =
      FRE2019_row_detection_B.DataTypeConversion[i + 360] * cos
      (FRE2019_row_detection_P.scan_angles_Value[i + 360]);
  }

  // S-Function (sdsphist2): '<S14>/Histogram'
  memset(&FRE2019_row_detection_B.Histogram[0], 0, 14U * sizeof(real_T));
  i = 0;
  for (ForEach_itr_i = 0; ForEach_itr_i < 360; ForEach_itr_i++) {
    if (!rtIsNaN(FRE2019_row_detection_B.Histogram1[i])) {
      if (FRE2019_row_detection_B.Histogram1[i] <=
          FRE2019_row_detection_P.Histogram_umin) {
        u0 = 0;
      } else if (FRE2019_row_detection_B.Histogram1[i] >
                 FRE2019_row_detection_P.Histogram_umax) {
        u0 = 13;
      } else {
        u0 = (int32_T)ceil(14.0 / (FRE2019_row_detection_P.Histogram_umax -
          FRE2019_row_detection_P.Histogram_umin) *
                           (FRE2019_row_detection_B.Histogram1[i] -
                            FRE2019_row_detection_P.Histogram_umin) - 1.0);
        if (u0 >= 13) {
          u0 = 13;
        }
      }

      FRE2019_row_detection_B.Histogram[u0]++;
    }

    i++;
  }

  // End of S-Function (sdsphist2): '<S14>/Histogram'

  // S-Function (sdsphist2): '<S14>/Histogram1'
  memset(&FRE2019_row_detection_B.Histogram1[0], 0, 14U * sizeof(real_T));
  i = 0;
  for (ForEach_itr_i = 0; ForEach_itr_i < 360; ForEach_itr_i++) {
    if (!rtIsNaN(FRE2019_row_detection_B.Product1[i])) {
      if (FRE2019_row_detection_B.Product1[i] <=
          FRE2019_row_detection_P.Histogram1_umin) {
        u0 = 0;
      } else if (FRE2019_row_detection_B.Product1[i] >
                 FRE2019_row_detection_P.Histogram1_umax) {
        u0 = 13;
      } else {
        u0 = (int32_T)ceil(14.0 / (FRE2019_row_detection_P.Histogram1_umax -
          FRE2019_row_detection_P.Histogram1_umin) *
                           (FRE2019_row_detection_B.Product1[i] -
                            FRE2019_row_detection_P.Histogram1_umin) - 1.0);
        if (u0 >= 13) {
          u0 = 13;
        }
      }

      FRE2019_row_detection_B.Histogram1[u0]++;
    }

    i++;
  }

  // End of S-Function (sdsphist2): '<S14>/Histogram1'

  // BusAssignment: '<Root>/Bus Assignment5' incorporates:
  //   Sum: '<S14>/Sum of Elements1'

  rtb_BusAssignment5.Data = FRE2019_row_detection_B.Histogram1[5] +
    FRE2019_row_detection_B.Histogram1[7];

  // End of Outputs for SubSystem: '<S8>/Histogram analysis'

  // Outputs for Atomic SubSystem: '<Root>/Publish4'
  // MATLABSystem: '<S6>/SinkBlock'
  Pub_FRE2019_row_detection_113.publish(&rtb_BusAssignment5);

  // End of Outputs for SubSystem: '<Root>/Publish4'

  // Outputs for Atomic SubSystem: '<S8>/Histogram analysis'
  // BusAssignment: '<Root>/Bus Assignment4' incorporates:
  //   Sum: '<S14>/Sum of Elements'

  FRE2019_row_detection_B.BusAssignment4.Data =
    FRE2019_row_detection_B.Histogram[5] + FRE2019_row_detection_B.Histogram[7];

  // End of Outputs for SubSystem: '<S8>/Histogram analysis'

  // Outputs for Atomic SubSystem: '<Root>/Publish5'
  // MATLABSystem: '<S7>/SinkBlock'
  Pub_FRE2019_row_detection_114.publish(&FRE2019_row_detection_B.BusAssignment4);

  // End of Outputs for SubSystem: '<Root>/Publish5'

  // Sum: '<S13>/Sum of Elements'
  rtb_Abs2 = -0.0;
  for (i = 0; i < 360; i++) {
    rtb_Abs2 += FRE2019_row_detection_B.ImpAsg_InsertedFor_scan_y_o[i];
  }

  // Switch: '<S13>/Prevent div 0' incorporates:
  //   Constant: '<S13>/Const1'
  //   Width: '<S13>/Width'

  if (FRE2019_row_detection_DW.Selector_DIMS1 != 0) {
    rtb_Gain1 = FRE2019_row_detection_DW.Selector_DIMS1;
  } else {
    rtb_Gain1 = FRE2019_row_detection_P.Const1_Value;
  }

  // End of Switch: '<S13>/Prevent div 0'

  // BusAssignment: '<Root>/Bus Assignment' incorporates:
  //   Product: '<S13>/Divide'
  //   Sum: '<S13>/Sum of Elements'

  FRE2019_row_detection_B.BusAssignment.Data = rtb_Abs2 / rtb_Gain1;

  // Outputs for Atomic SubSystem: '<Root>/Publish'
  // MATLABSystem: '<S2>/SinkBlock'
  Pub_FRE2019_row_detection_102.publish(&FRE2019_row_detection_B.BusAssignment);

  // End of Outputs for SubSystem: '<Root>/Publish'

  // Product: '<S13>/Divide1' incorporates:
  //   Constant: '<S12>/max. Points1'
  //   Constant: '<S13>/max. Points'
  //   Product: '<S12>/Divide3'

  rtb_Abs2 = (FRE2019_row_detection_P.angle_max -
              FRE2019_row_detection_P.angle_min) / (2.0 *
    FRE2019_row_detection_P.angle_increment) - 20.0;

  // BusAssignment: '<Root>/Bus Assignment1' incorporates:
  //   Constant: '<S13>/max. Points'
  //   Gain: '<S13>/Gain'
  //   Product: '<S13>/Divide1'

  FRE2019_row_detection_B.BusAssignment1.Data = rtb_Gain1 / rtb_Abs2 *
    FRE2019_row_detection_P.Gain_Gain;

  // Outputs for Atomic SubSystem: '<Root>/Publish1'
  // MATLABSystem: '<S3>/SinkBlock'
  Pub_FRE2019_row_detection_103.publish(&FRE2019_row_detection_B.BusAssignment1);

  // End of Outputs for SubSystem: '<Root>/Publish1'

  // BusAssignment: '<Root>/Bus Assignment3' incorporates:
  //   Gain: '<S12>/Gain1'
  //   Product: '<S12>/Divide3'

  FRE2019_row_detection_B.BusAssignment3.Data = rtb_Preventdiv1 / rtb_Abs2 *
    FRE2019_row_detection_P.Gain1_Gain;

  // Outputs for Atomic SubSystem: '<Root>/Publish3'
  // MATLABSystem: '<S5>/SinkBlock'
  Pub_FRE2019_row_detection_107.publish(&FRE2019_row_detection_B.BusAssignment3);

  // End of Outputs for SubSystem: '<Root>/Publish3'

  // S-Function (saeroclockpacer): '<Root>/Simulation Pace'
  //
  //  The Clock Pacer generates no code, it is only active in
  //  interpreted simulation.

}

// Model initialize function
void FRE2019_row_detection_initialize(void)
{
  // Registration code

  // initialize non-finites
  rt_InitInfAndNaN(sizeof(real_T));

  // initialize error status
  rtmSetErrorStatus(FRE2019_row_detection_M, (NULL));

  // block I/O
  (void) memset(((void *) &FRE2019_row_detection_B), 0,
                sizeof(B_FRE2019_row_detection_T));

  // states (dwork)
  (void) memset((void *)&FRE2019_row_detection_DW, 0,
                sizeof(DW_FRE2019_row_detection_T));

  {
    static const char_T tmp[16] = { '/', 'r', 'o', 'w', '/', 'l', 'e', 'f', 't',
      '_', 's', 'a', 'f', 'e', 't', 'y' };

    static const char_T tmp_0[17] = { '/', 'r', 'o', 'w', '/', 'r', 'i', 'g',
      'h', 't', '_', 's', 'a', 'f', 'e', 't', 'y' };

    static const char_T tmp_1[10] = { '/', 'r', 'o', 'w', '/', 'r', 'i', 'g',
      'h', 't' };

    static const char_T tmp_2[22] = { '/', 'r', 'o', 'w', '/', 'r', 'o', 'w',
      's', '_', 'p', 'a', 's', 's', 'e', 'd', '_', 'r', 'i', 'g', 'h', 't' };

    static const char_T tmp_3[21] = { '/', 'r', 'o', 'w', '/', 'r', 'o', 'w',
      's', '_', 'p', 'a', 's', 's', 'e', 'd', '_', 'l', 'e', 'f', 't' };

    static const char_T tmp_4[9] = { '/', 'r', 'o', 'w', '/', 'l', 'e', 'f', 't'
    };

    static const char_T tmp_5[5] = { '/', 's', 'c', 'a', 'n' };

    char_T tmp_6[17];
    char_T tmp_7[11];
    char_T tmp_8[10];
    char_T tmp_9[6];
    int32_T i;

    // Start for Atomic SubSystem: '<Root>/Subscribe'
    // Start for MATLABSystem: '<S9>/SourceBlock'
    FRE2019_row_detection_DW.obj_f.matlabCodegenIsDeleted = true;
    FRE2019_row_detection_DW.obj_f.isInitialized = 0;
    FRE2019_row_detection_DW.obj_f.matlabCodegenIsDeleted = false;
    FRE2019_row_detection_DW.obj_f.isSetupComplete = false;
    FRE2019_row_detection_DW.obj_f.isInitialized = 1;
    for (i = 0; i < 5; i++) {
      tmp_9[i] = tmp_5[i];
    }

    tmp_9[5] = '\x00';
    Sub_FRE2019_row_detection_99.createSubscriber(tmp_9, 1);
    FRE2019_row_detection_DW.obj_f.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S9>/SourceBlock'
    // End of Start for SubSystem: '<Root>/Subscribe'

    // Start for Atomic SubSystem: '<Root>/Publish2'
    // Start for MATLABSystem: '<S4>/SinkBlock'
    FRE2019_row_detection_DW.obj_l.matlabCodegenIsDeleted = true;
    FRE2019_row_detection_DW.obj_l.isInitialized = 0;
    FRE2019_row_detection_DW.obj_l.matlabCodegenIsDeleted = false;
    FRE2019_row_detection_DW.obj_l.isSetupComplete = false;
    FRE2019_row_detection_DW.obj_l.isInitialized = 1;
    for (i = 0; i < 9; i++) {
      tmp_8[i] = tmp_4[i];
    }

    tmp_8[9] = '\x00';
    Pub_FRE2019_row_detection_106.createPublisher(tmp_8, 1);
    FRE2019_row_detection_DW.obj_l.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S4>/SinkBlock'
    // End of Start for SubSystem: '<Root>/Publish2'

    // Start for Atomic SubSystem: '<Root>/Publish4'
    // Start for MATLABSystem: '<S6>/SinkBlock'
    FRE2019_row_detection_DW.obj_e.matlabCodegenIsDeleted = true;
    FRE2019_row_detection_DW.obj_e.isInitialized = 0;
    FRE2019_row_detection_DW.obj_e.matlabCodegenIsDeleted = false;
    FRE2019_row_detection_DW.obj_e.isSetupComplete = false;
    FRE2019_row_detection_DW.obj_e.isInitialized = 1;
    for (i = 0; i < 21; i++) {
      FRE2019_row_detection_B.cv1[i] = tmp_3[i];
    }

    FRE2019_row_detection_B.cv1[21] = '\x00';
    Pub_FRE2019_row_detection_113.createPublisher(FRE2019_row_detection_B.cv1, 1);
    FRE2019_row_detection_DW.obj_e.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S6>/SinkBlock'
    // End of Start for SubSystem: '<Root>/Publish4'

    // Start for Atomic SubSystem: '<Root>/Publish5'
    // Start for MATLABSystem: '<S7>/SinkBlock'
    FRE2019_row_detection_DW.obj.matlabCodegenIsDeleted = true;
    FRE2019_row_detection_DW.obj.isInitialized = 0;
    FRE2019_row_detection_DW.obj.matlabCodegenIsDeleted = false;
    FRE2019_row_detection_DW.obj.isSetupComplete = false;
    FRE2019_row_detection_DW.obj.isInitialized = 1;
    for (i = 0; i < 22; i++) {
      FRE2019_row_detection_B.cv0[i] = tmp_2[i];
    }

    FRE2019_row_detection_B.cv0[22] = '\x00';
    Pub_FRE2019_row_detection_114.createPublisher(FRE2019_row_detection_B.cv0, 1);
    FRE2019_row_detection_DW.obj.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S7>/SinkBlock'
    // End of Start for SubSystem: '<Root>/Publish5'

    // Start for Atomic SubSystem: '<Root>/Publish'
    // Start for MATLABSystem: '<S2>/SinkBlock'
    FRE2019_row_detection_DW.obj_o.matlabCodegenIsDeleted = true;
    FRE2019_row_detection_DW.obj_o.isInitialized = 0;
    FRE2019_row_detection_DW.obj_o.matlabCodegenIsDeleted = false;
    FRE2019_row_detection_DW.obj_o.isSetupComplete = false;
    FRE2019_row_detection_DW.obj_o.isInitialized = 1;
    for (i = 0; i < 10; i++) {
      tmp_7[i] = tmp_1[i];
    }

    tmp_7[10] = '\x00';
    Pub_FRE2019_row_detection_102.createPublisher(tmp_7, 1);
    FRE2019_row_detection_DW.obj_o.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S2>/SinkBlock'
    // End of Start for SubSystem: '<Root>/Publish'

    // Start for Atomic SubSystem: '<Root>/Publish1'
    // Start for MATLABSystem: '<S3>/SinkBlock'
    FRE2019_row_detection_DW.obj_j.matlabCodegenIsDeleted = true;
    FRE2019_row_detection_DW.obj_j.isInitialized = 0;
    FRE2019_row_detection_DW.obj_j.matlabCodegenIsDeleted = false;
    FRE2019_row_detection_DW.obj_j.isSetupComplete = false;
    FRE2019_row_detection_DW.obj_j.isInitialized = 1;
    for (i = 0; i < 17; i++) {
      FRE2019_row_detection_B.cv2[i] = tmp_0[i];
    }

    FRE2019_row_detection_B.cv2[17] = '\x00';
    Pub_FRE2019_row_detection_103.createPublisher(FRE2019_row_detection_B.cv2, 1);
    FRE2019_row_detection_DW.obj_j.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S3>/SinkBlock'
    // End of Start for SubSystem: '<Root>/Publish1'

    // Start for Atomic SubSystem: '<Root>/Publish3'
    // Start for MATLABSystem: '<S5>/SinkBlock'
    FRE2019_row_detection_DW.obj_d.matlabCodegenIsDeleted = true;
    FRE2019_row_detection_DW.obj_d.isInitialized = 0;
    FRE2019_row_detection_DW.obj_d.matlabCodegenIsDeleted = false;
    FRE2019_row_detection_DW.obj_d.isSetupComplete = false;
    FRE2019_row_detection_DW.obj_d.isInitialized = 1;
    for (i = 0; i < 16; i++) {
      tmp_6[i] = tmp[i];
    }

    tmp_6[16] = '\x00';
    Pub_FRE2019_row_detection_107.createPublisher(tmp_6, 1);
    FRE2019_row_detection_DW.obj_d.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S5>/SinkBlock'
    // End of Start for SubSystem: '<Root>/Publish3'

    // SystemInitialize for Atomic SubSystem: '<Root>/Subscribe'
    // SystemInitialize for Enabled SubSystem: '<S9>/Enabled Subsystem'
    // SystemInitialize for Outport: '<S17>/Out1'
    FRE2019_row_detection_B.In1 = FRE2019_row_detection_P.Out1_Y0;

    // End of SystemInitialize for SubSystem: '<S9>/Enabled Subsystem'
    // End of SystemInitialize for SubSystem: '<Root>/Subscribe'
  }
}

// Model terminate function
void FRE2019_row_detection_terminate(void)
{
  // Terminate for Atomic SubSystem: '<Root>/Subscribe'
  // Terminate for MATLABSystem: '<S9>/SourceBlock'
  matlabCodegenHandle_matl_jvtmpz(&FRE2019_row_detection_DW.obj_f);

  // End of Terminate for SubSystem: '<Root>/Subscribe'

  // Terminate for Atomic SubSystem: '<Root>/Publish2'
  // Terminate for MATLABSystem: '<S4>/SinkBlock'
  matlabCodegenHandle_matlabCodeg(&FRE2019_row_detection_DW.obj_l);

  // End of Terminate for SubSystem: '<Root>/Publish2'

  // Terminate for Atomic SubSystem: '<Root>/Publish4'
  // Terminate for MATLABSystem: '<S6>/SinkBlock'
  matlabCodegenHandle_matlabCodeg(&FRE2019_row_detection_DW.obj_e);

  // End of Terminate for SubSystem: '<Root>/Publish4'

  // Terminate for Atomic SubSystem: '<Root>/Publish5'
  // Terminate for MATLABSystem: '<S7>/SinkBlock'
  matlabCodegenHandle_matlabCodeg(&FRE2019_row_detection_DW.obj);

  // End of Terminate for SubSystem: '<Root>/Publish5'

  // Terminate for Atomic SubSystem: '<Root>/Publish'
  // Terminate for MATLABSystem: '<S2>/SinkBlock'
  matlabCodegenHandle_matlabCodeg(&FRE2019_row_detection_DW.obj_o);

  // End of Terminate for SubSystem: '<Root>/Publish'

  // Terminate for Atomic SubSystem: '<Root>/Publish1'
  // Terminate for MATLABSystem: '<S3>/SinkBlock'
  matlabCodegenHandle_matlabCodeg(&FRE2019_row_detection_DW.obj_j);

  // End of Terminate for SubSystem: '<Root>/Publish1'

  // Terminate for Atomic SubSystem: '<Root>/Publish3'
  // Terminate for MATLABSystem: '<S5>/SinkBlock'
  matlabCodegenHandle_matlabCodeg(&FRE2019_row_detection_DW.obj_d);

  // End of Terminate for SubSystem: '<Root>/Publish3'
}

//
// File trailer for generated code.
//
// [EOF]
//

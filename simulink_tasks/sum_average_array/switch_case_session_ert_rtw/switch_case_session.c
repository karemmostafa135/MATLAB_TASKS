/*
 * File: switch_case_session.c
 *
 * Code generated for Simulink model 'switch_case_session'.
 *
 * Model version                  : 1.26
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Sun Jan 21 21:02:09 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "switch_case_session.h"
#include "switch_case_session_private.h"

/* Block signals (default storage) */
B_switch_case_session_T switch_case_session_B;

/* Block states (default storage) */
DW_switch_case_session_T switch_case_session_DW;

/* External inputs (root inport signals with default storage) */
ExtU_switch_case_session_T switch_case_session_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_switch_case_session_T switch_case_session_Y;

/* Real-time model */
static RT_MODEL_switch_case_session_T switch_case_session_M_;
RT_MODEL_switch_case_session_T *const switch_case_session_M =
  &switch_case_session_M_;

/*
 * Output and update for action system:
 *    '<Root>/If Action Subsystem'
 *    '<Root>/If Action Subsystem3'
 */
void switch_case_s_IfActionSubsystem(B_IfActionSubsystem_switch_ca_T *localB)
{
  /* Sum: '<S9>/FixPt Sum1' incorporates:
   *  Constant: '<S2>/Constant'
   *  Constant: '<S9>/FixPt Constant'
   */
  localB->FixPtSum1 = 11.0;
}

/*
 * Output and update for action system:
 *    '<Root>/If Action Subsystem1'
 *    '<Root>/If Action Subsystem4'
 */
void switch_case__IfActionSubsystem1(B_IfActionSubsystem1_switch_c_T *localB)
{
  /* Sum: '<S10>/FixPt Sum1' incorporates:
   *  Constant: '<S10>/FixPt Constant'
   *  Constant: '<S3>/Constant'
   */
  localB->FixPtSum1 = 15.0;
}

/* Model step function */
void switch_case_session_step(void)
{
  real_T tmp;
  int32_T rtb_ForIterator;
  int32_T s1_iter;
  uint8_T rtb_Add;

  /* Outputs for Atomic SubSystem: '<S8>/Subsystem' */
  /* SwitchCase: '<S13>/Switch Case' incorporates:
   *  Inport: '<Root>/Input'
   */
  if (switch_case_session_U.Input < 0.0) {
    tmp = ceil(switch_case_session_U.Input);
  } else {
    tmp = floor(switch_case_session_U.Input);
  }

  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(tmp, 4.294967296E+9);
  }

  if ((tmp < 0.0 ? -(int32_T)(uint32_T)-tmp : (int32_T)(uint32_T)tmp) == 2) {
    /* Outputs for IfAction SubSystem: '<S13>/Switch Case Action Subsystem1' incorporates:
     *  ActionPort: '<S15>/Action Port'
     */
    /* Sum: '<S17>/FixPt Sum1' incorporates:
     *  Constant: '<S15>/Constant'
     *  Constant: '<S17>/FixPt Constant'
     */
    switch_case_session_B.FixPtSum1 = 0.0;

    /* End of Outputs for SubSystem: '<S13>/Switch Case Action Subsystem1' */
  }

  /* End of SwitchCase: '<S13>/Switch Case' */

  /* Outport: '<Root>/Output' incorporates:
   *  SignalConversion: '<S13>/Signal Conversion1'
   */
  switch_case_session_Y.Output = switch_case_session_B.FixPtSum1;

  /* End of Outputs for SubSystem: '<S8>/Subsystem' */

  /* If: '<Root>/If' incorporates:
   *  Inport: '<Root>/Input1'
   *  Inport: '<Root>/Input2'
   */
  if ((switch_case_session_U.Input1 > 0.0) && (switch_case_session_U.Input2 <
       50.0)) {
    /* Outputs for IfAction SubSystem: '<Root>/If Action Subsystem' incorporates:
     *  ActionPort: '<S2>/Action Port'
     */
    switch_case_s_IfActionSubsystem(&switch_case_session_B.IfActionSubsystem);

    /* End of Outputs for SubSystem: '<Root>/If Action Subsystem' */
  } else if (switch_case_session_U.Input2 != 30.0) {
    /* Outputs for IfAction SubSystem: '<Root>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S3>/Action Port'
     */
    switch_case__IfActionSubsystem1(&switch_case_session_B.IfActionSubsystem1);

    /* End of Outputs for SubSystem: '<Root>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<Root>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S4>/Action Port'
     */
    /* Outport: '<Root>/Output1' incorporates:
     *  Inport: '<S4>/In1'
     */
    switch_case_session_Y.Output1 = 0.0;

    /* End of Outputs for SubSystem: '<Root>/If Action Subsystem2' */
  }

  /* End of If: '<Root>/If' */

  /* Outport: '<Root>/Output2' incorporates:
   *  SignalConversion: '<Root>/Signal Conversion2'
   */
  switch_case_session_Y.Output2 =
    switch_case_session_B.IfActionSubsystem1.FixPtSum1;

  /* Outputs for IfAction SubSystem: '<Root>/If Action Subsystem4' incorporates:
   *  ActionPort: '<S6>/Action Port'
   */
  /* If: '<Root>/If1' */
  switch_case__IfActionSubsystem1(&switch_case_session_B.IfActionSubsystem4);

  /* End of Outputs for SubSystem: '<Root>/If Action Subsystem4' */

  /* Outport: '<Root>/Output4' incorporates:
   *  SignalConversion: '<Root>/Signal Conversion4'
   */
  switch_case_session_Y.Output4 =
    switch_case_session_B.IfActionSubsystem4.FixPtSum1;

  /* Outputs for Iterator SubSystem: '<Root>/For Iterator Subsystem' incorporates:
   *  ForIterator: '<S1>/For Iterator'
   */
  for (s1_iter = 0; s1_iter < 5; s1_iter++) {
    rtb_ForIterator = s1_iter;
  }

  /* End of Outputs for SubSystem: '<Root>/For Iterator Subsystem' */

  /* Sum: '<Root>/Add' incorporates:
   *  Inport: '<Root>/Input4'
   *  MultiPortSwitch: '<Root>/Index Vector'
   *  UnitDelay: '<Root>/Unit Delay'
   */
  rtb_Add = (uint8_T)((uint32_T)switch_case_session_U.Input4[rtb_ForIterator] +
                      switch_case_session_DW.UnitDelay_DSTATE);

  /* Outport: '<Root>/Output5' */
  switch_case_session_Y.Output5 = rtb_Add;

  /* Update for UnitDelay: '<Root>/Unit Delay' */
  switch_case_session_DW.UnitDelay_DSTATE = rtb_Add;
}

/* Model initialize function */
void switch_case_session_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize error status */
  rtmSetErrorStatus(switch_case_session_M, (NULL));

  /* block I/O */
  (void) memset(((void *) &switch_case_session_B), 0,
                sizeof(B_switch_case_session_T));

  /* states (dwork) */
  (void) memset((void *)&switch_case_session_DW, 0,
                sizeof(DW_switch_case_session_T));

  /* external inputs */
  (void)memset(&switch_case_session_U, 0, sizeof(ExtU_switch_case_session_T));

  /* external outputs */
  (void) memset((void *)&switch_case_session_Y, 0,
                sizeof(ExtY_switch_case_session_T));
}

/* Model terminate function */
void switch_case_session_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

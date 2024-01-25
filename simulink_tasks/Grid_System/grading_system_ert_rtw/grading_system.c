/*
 * File: grading_system.c
 *
 * Code generated for Simulink model 'grading_system'.
 *
 * Model version                  : 1.4
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Wed Jan 24 18:50:03 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "grading_system.h"
#include "grading_system_private.h"

/* Real-time model */
static RT_MODEL_grading_system_T grading_system_M_;
RT_MODEL_grading_system_T *const grading_system_M = &grading_system_M_;

/* Model step function */
void grading_system_step(void)
{
  /* (no output/update code required) */
}

/* Model initialize function */
void grading_system_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(grading_system_M, (NULL));
}

/* Model terminate function */
void grading_system_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

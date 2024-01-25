/*
 * File: Increment_Counter.c
 *
 * Code generated for Simulink model 'Increment_Counter'.
 *
 * Model version                  : 1.2
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Wed Jan 24 14:20:07 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Increment_Counter.h"
#include "Increment_Counter_private.h"

/* Real-time model */
static RT_MODEL_Increment_Counter_T Increment_Counter_M_;
RT_MODEL_Increment_Counter_T *const Increment_Counter_M = &Increment_Counter_M_;

/* Model step function */
void Increment_Counter_step(void)
{
  /* (no output/update code required) */
}

/* Model initialize function */
void Increment_Counter_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(Increment_Counter_M, (NULL));
}

/* Model terminate function */
void Increment_Counter_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

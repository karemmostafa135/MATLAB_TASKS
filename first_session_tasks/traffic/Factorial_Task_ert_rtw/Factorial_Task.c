/*
 * File: Factorial_Task.c
 *
 * Code generated for Simulink model 'Factorial_Task'.
 *
 * Model version                  : 1.11
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Tue Jan 23 10:59:25 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Factorial_Task.h"
#include "Factorial_Task_private.h"

/* External outputs (root outports fed by signals with default storage) */
ExtY_Factorial_Task_T Factorial_Task_Y;

/* Real-time model */
static RT_MODEL_Factorial_Task_T Factorial_Task_M_;
RT_MODEL_Factorial_Task_T *const Factorial_Task_M = &Factorial_Task_M_;

/* Model step function */
void Factorial_Task_step(void)
{
  int32_T s1_iter;

  /* Outputs for Iterator SubSystem: '<Root>/For Iterator Subsystem' incorporates:
   *  ForIterator: '<S1>/For Iterator'
   */
  for (s1_iter = 1; (uint32_T)s1_iter < 6U; s1_iter++) {
    /* Outport: '<Root>/Output' incorporates:
     *  Product: '<S1>/Product'
     *  UnitDelay: '<S1>/Unit Delay'
     */
    Factorial_Task_Y.Output *= s1_iter;
  }

  /* End of Outputs for SubSystem: '<Root>/For Iterator Subsystem' */
}

/* Model initialize function */
void Factorial_Task_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(Factorial_Task_M, (NULL));

  /* external outputs */
  Factorial_Task_Y.Output = 0U;
}

/* Model terminate function */
void Factorial_Task_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

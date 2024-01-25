/*
 * File: average_func.c
 *
 * Code generated for Simulink model 'average_func'.
 *
 * Model version                  : 1.6
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Sun Jan 21 18:41:09 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "average_func.h"
#include "average_func_private.h"

/* Block signals (default storage) */
B_average_func_T average_func_B;

/* External inputs (root inport signals with default storage) */
ExtU_average_func_T average_func_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_average_func_T average_func_Y;

/* Real-time model */
static RT_MODEL_average_func_T average_func_M_;
RT_MODEL_average_func_T *const average_func_M = &average_func_M_;

/*
 * Output and update for atomic system:
 *    '<S2>/MATLAB Function'
 *    '<S4>/MATLAB Function'
 */
void average_func_MATLABFunction(real_T rtu_inputArray,
  B_MATLABFunction_average_func_T *localB)
{
  /* MATLAB Function 'Subsystem1/MATLAB Function': '<S6>:1' */
  /* '<S6>:1:2' avg = mean(inputArray); */
  localB->avg = rtu_inputArray;
}

/* Model step function */
void average_func_step(void)
{
  /* MATLAB Function: '<S2>/MATLAB Function' incorporates:
   *  Inport: '<Root>/Input'
   */
  average_func_MATLABFunction(average_func_U.Input,
    &average_func_B.sf_MATLABFunction);

  /* Outport: '<Root>/Average' */
  average_func_Y.Average = average_func_B.sf_MATLABFunction.avg;

  /* Outport: '<Root>/Min' incorporates:
   *  Inport: '<Root>/Input'
   */
  average_func_Y.Min = average_func_U.Input;

  /* Outport: '<Root>/Max' incorporates:
   *  Inport: '<Root>/Input'
   */
  average_func_Y.Max = average_func_U.Input;

  /* MATLAB Function: '<S4>/MATLAB Function' */
  average_func_MATLABFunction(average_func_ConstB.SumofElements,
    &average_func_B.sf_MATLABFunction_d);

  /* Outport: '<Root>/Average1' */
  average_func_Y.Average1 = average_func_B.sf_MATLABFunction_d.avg;

  /* Outport: '<Root>/Average2' incorporates:
   *  MATLAB Function: '<S5>/MATLAB Function'
   */
  /* MATLAB Function 'Subsystem4/MATLAB Function': '<S8>:1' */
  /* '<S8>:1:2' avg = mean(inputArray); */
  average_func_Y.Average2 = 5.6;
}

/* Model initialize function */
void average_func_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(average_func_M, (NULL));

  /* block I/O */
  (void) memset(((void *) &average_func_B), 0,
                sizeof(B_average_func_T));

  /* external inputs */
  average_func_U.Input = 0.0;

  /* external outputs */
  (void) memset((void *)&average_func_Y, 0,
                sizeof(ExtY_average_func_T));

  /* ConstCode for Outport: '<Root>/Min1' */
  average_func_Y.Min1 = 1.0;

  /* ConstCode for Outport: '<Root>/Min2' */
  average_func_Y.Min2 = 10.0;
}

/* Model terminate function */
void average_func_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

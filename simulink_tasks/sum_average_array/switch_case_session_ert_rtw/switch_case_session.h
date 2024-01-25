/*
 * File: switch_case_session.h
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

#ifndef RTW_HEADER_switch_case_session_h_
#define RTW_HEADER_switch_case_session_h_
#include <math.h>
#include <string.h>
#include <stddef.h>
#ifndef switch_case_session_COMMON_INCLUDES_
#define switch_case_session_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                /* switch_case_session_COMMON_INCLUDES_ */

#include "switch_case_session_types.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block signals for system '<Root>/If Action Subsystem' */
typedef struct {
  real_T FixPtSum1;                    /* '<S9>/FixPt Sum1' */
} B_IfActionSubsystem_switch_ca_T;

/* Block signals for system '<Root>/If Action Subsystem1' */
typedef struct {
  real_T FixPtSum1;                    /* '<S10>/FixPt Sum1' */
} B_IfActionSubsystem1_switch_c_T;

/* Block signals (default storage) */
typedef struct {
  real_T FixPtSum1;                    /* '<S17>/FixPt Sum1' */
  B_IfActionSubsystem1_switch_c_T IfActionSubsystem4;/* '<Root>/If Action Subsystem4' */
  B_IfActionSubsystem_switch_ca_T IfActionSubsystem3;/* '<Root>/If Action Subsystem3' */
  B_IfActionSubsystem1_switch_c_T IfActionSubsystem1;/* '<Root>/If Action Subsystem1' */
  B_IfActionSubsystem_switch_ca_T IfActionSubsystem;/* '<Root>/If Action Subsystem' */
} B_switch_case_session_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  uint8_T UnitDelay_DSTATE;            /* '<Root>/Unit Delay' */
} DW_switch_case_session_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T Input;                        /* '<Root>/Input' */
  real_T Input1;                       /* '<Root>/Input1' */
  real_T Input2;                       /* '<Root>/Input2' */
  real_T Input3;                       /* '<Root>/Input3' */
  uint8_T Input4[5];                   /* '<Root>/Input4' */
} ExtU_switch_case_session_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T Output;                       /* '<Root>/Output' */
  real_T Output1;                      /* '<Root>/Output1' */
  real_T Output2;                      /* '<Root>/Output2' */
  real_T Output3;                      /* '<Root>/Output3' */
  real_T Output4;                      /* '<Root>/Output4' */
  uint8_T Output5;                     /* '<Root>/Output5' */
} ExtY_switch_case_session_T;

/* Real-time Model Data Structure */
struct tag_RTM_switch_case_session_T {
  const char_T * volatile errorStatus;
};

/* Block signals (default storage) */
extern B_switch_case_session_T switch_case_session_B;

/* Block states (default storage) */
extern DW_switch_case_session_T switch_case_session_DW;

/* External inputs (root inport signals with default storage) */
extern ExtU_switch_case_session_T switch_case_session_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_switch_case_session_T switch_case_session_Y;

/* Model entry point functions */
extern void switch_case_session_initialize(void);
extern void switch_case_session_step(void);
extern void switch_case_session_terminate(void);

/* Real-time Model object */
extern RT_MODEL_switch_case_session_T *const switch_case_session_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<Root>/Display' : Unused code path elimination
 * Block '<Root>/Display1' : Unused code path elimination
 * Block '<S9>/FixPt Data Type Duplicate' : Unused code path elimination
 * Block '<S9>/FixPt Data Type Propagation' : Unused code path elimination
 * Block '<S10>/FixPt Data Type Duplicate' : Unused code path elimination
 * Block '<S10>/FixPt Data Type Propagation' : Unused code path elimination
 * Block '<S11>/FixPt Data Type Duplicate' : Unused code path elimination
 * Block '<S11>/FixPt Data Type Propagation' : Unused code path elimination
 * Block '<S12>/FixPt Data Type Duplicate' : Unused code path elimination
 * Block '<S12>/FixPt Data Type Propagation' : Unused code path elimination
 * Block '<S16>/FixPt Data Type Duplicate' : Unused code path elimination
 * Block '<S16>/FixPt Data Type Propagation' : Unused code path elimination
 * Block '<S17>/FixPt Data Type Duplicate' : Unused code path elimination
 * Block '<S17>/FixPt Data Type Propagation' : Unused code path elimination
 * Block '<S9>/FixPt Gateway In' : Eliminate redundant data type conversion
 * Block '<S10>/FixPt Gateway In' : Eliminate redundant data type conversion
 * Block '<S11>/FixPt Gateway In' : Eliminate redundant data type conversion
 * Block '<S12>/FixPt Gateway In' : Eliminate redundant data type conversion
 * Block '<S16>/FixPt Gateway In' : Eliminate redundant data type conversion
 * Block '<S17>/FixPt Gateway In' : Eliminate redundant data type conversion
 */

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'switch_case_session'
 * '<S1>'   : 'switch_case_session/For Iterator Subsystem'
 * '<S2>'   : 'switch_case_session/If Action Subsystem'
 * '<S3>'   : 'switch_case_session/If Action Subsystem1'
 * '<S4>'   : 'switch_case_session/If Action Subsystem2'
 * '<S5>'   : 'switch_case_session/If Action Subsystem3'
 * '<S6>'   : 'switch_case_session/If Action Subsystem4'
 * '<S7>'   : 'switch_case_session/If Action Subsystem5'
 * '<S8>'   : 'switch_case_session/Subsystem1'
 * '<S9>'   : 'switch_case_session/If Action Subsystem/Decrement Stored Integer'
 * '<S10>'  : 'switch_case_session/If Action Subsystem1/Increment Stored Integer'
 * '<S11>'  : 'switch_case_session/If Action Subsystem3/Decrement Stored Integer'
 * '<S12>'  : 'switch_case_session/If Action Subsystem4/Increment Stored Integer'
 * '<S13>'  : 'switch_case_session/Subsystem1/Subsystem'
 * '<S14>'  : 'switch_case_session/Subsystem1/Subsystem/Switch Case Action Subsystem'
 * '<S15>'  : 'switch_case_session/Subsystem1/Subsystem/Switch Case Action Subsystem1'
 * '<S16>'  : 'switch_case_session/Subsystem1/Subsystem/Switch Case Action Subsystem/Increment Stored Integer'
 * '<S17>'  : 'switch_case_session/Subsystem1/Subsystem/Switch Case Action Subsystem1/Decrement Stored Integer'
 */
#endif                                 /* RTW_HEADER_switch_case_session_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

/*
 * File: AHRS_Voter.h
 *
 * Code generated for Simulink model 'AHRS_Voter'.
 *
 * Model version                  : 8.0
 * Simulink Coder version         : 25.1 (R2025a) 21-Nov-2024
 * C/C++ source code generated on : Tue Sep  2 20:03:25 2025
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM 10
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef AHRS_Voter_h_
#define AHRS_Voter_h_
#ifndef AHRS_Voter_COMMON_INCLUDES_
#define AHRS_Voter_COMMON_INCLUDES_
#include <stdbool.h>
#include <stdint.h>
#endif                                 /* AHRS_Voter_COMMON_INCLUDES_ */

#include "AHRS_Voter_types.h"

/* External inputs (root inport signals with default storage) */
typedef struct {
  AHRS_Bus AHRS1;                      /* '<Root>/AHRS1' */
  AHRS_Bus AHRS2;                      /* '<Root>/AHRS2' */
  AHRS_Bus AHRS3;                      /* '<Root>/AHRS3' */
} ExtU_AHRS_Voter_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  double AHRSData[5];                  /* '<Root>/AHRSData' */
} ExtY_AHRS_Voter_T;

/* External inputs (root inport signals with default storage) */
extern ExtU_AHRS_Voter_T AHRS_Voter_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_AHRS_Voter_T AHRS_Voter_Y;

/* Model entry point functions */
extern void AHRS_Voter_initialize(void);
extern void AHRS_Voter_step(void);

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
 * '<Root>' : 'AHRS_Voter'
 * '<S1>'   : 'AHRS_Voter/AvgValue'
 * '<S2>'   : 'AHRS_Voter/MidValue'
 * '<S3>'   : 'AHRS_Voter/Model Info'
 * '<S4>'   : 'AHRS_Voter/OneValue'
 * '<S5>'   : 'AHRS_Voter/ZeroValue'
 */

/*-
 * Requirements for '<Root>': AHRS_Voter

 *
 * Inherited requirements for '<Root>/AvgValue':
 *  1. HighLevelReqs.slreqx:16
 *
 * Inherited requirements for '<Root>/MidValue':
 *  1. HighLevelReqs.slreqx:15
 *
 * Inherited requirements for '<Root>/OneValue':
 *  1. HighLevelReqs.slreqx:17
 *
 * Inherited requirements for '<Root>/ZeroValue':
 *  1. HighLevelReqs.slreqx:18

 */
#endif                                 /* AHRS_Voter_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

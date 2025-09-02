/*
 * File: AHRS_Voter_types.h
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

#ifndef AHRS_Voter_types_h_
#define AHRS_Voter_types_h_
#include <stdbool.h>
#ifndef DEFINED_TYPEDEF_FOR_AHRS_Bus_
#define DEFINED_TYPEDEF_FOR_AHRS_Bus_

typedef struct {
  bool valid;
  double theta;
  double phi;
  double r;
  double q;
  double p;
} AHRS_Bus;

#endif
#endif                                 /* AHRS_Voter_types_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

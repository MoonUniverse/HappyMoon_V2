//=====================================================================================================
// MahonyAHRS.h
//=====================================================================================================
//
// Madgwick's implementation of Mayhony's AHRS algorithm.
// See: http://www.x-io.co.uk/node/8#open_source_ahrs_and_imu_algorithms
//
// Date			Author			Notes
// 29/09/2011	SOH Madgwick    Initial release
// 02/10/2011	SOH Madgwick	Optimised for reduced CPU load
//
//=====================================================================================================
#ifndef _MAHONYAHRS_H_
#define _MAHONYAHRS_H_

#include <math.h>
#include "vector3.h"
//----------------------------------------------------------------------------------------------------
// Variable declaration

// float twoKp;			// 2 * proportional gain (Kp)
// float twoKi;			// 2 * integral gain (Ki)
// float q0, q1, q2, q3;	// quaternion of sensor frame relative to auxiliary frame

//---------------------------------------------------------------------------------------------------
// Function declarations

Vector3f_angle ahrsangle;

void MahonyAHRSupdate(float gx, float gy, float gz, float ax, float ay, float az, float mx, float my, float mz);
void MahonyAHRSupdateIMU(float gx, float gy, float gz, float ax, float ay, float az);
Vector3f_angle GetCopterAngle(void);

#endif
//=====================================================================================================
// End of file
//=====================================================================================================

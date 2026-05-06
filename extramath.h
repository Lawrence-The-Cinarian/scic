#ifndef EXTRAMATH_H
#define EXTRAMATH_H
#define  PI (3.142857143)
#include <math.h>
/*
 * disin = Degree in Sine
 * dicos = Degree in Consine
 * ditan = Degree in Tangent
 * dinvs = Sine Inverse from degrees
 * dinvc = Cosine Inverse from degrees
 * dinvt = Tangent Inverse from degrees
 */

// (1) For finding Sine, Cosine, Tangent, Inverse Sine, Inverse Cosine, and Inverse Tangent
float disin(float degrees) {
  float radians = degrees * (PI/180);
  float result = sin(radians);
return result;
}

float dicos(float degrees) {
  float radians = degrees * (PI/180);
  float result = cos(radians);
return result;
}

float ditan(float degrees) {
  float radians = degrees * (PI/180);
  float result = tan(radians);
return result;
}

float dinvs(float degrees) {
  float radians = degrees * (PI/180);
  float result = asin(radians) * (180/PI);
return result;
}

float dinvc(float degrees) {
  float radians = degrees * (PI/180);
  float result = acos(radians) * (180/PI);
return result;
}

float dinvt(float degrees) {
  float radians = degrees * (PI/180);
  float result = atan(radians) * (180/PI);
return result;
}

// (2) For finding Angles and Sides of a Triangles
//     For Sine Rule: a/sin A = b/sin B = c/sin C
//     For Cosine Rule (a*a) = (b*b) + (c*c) - 2bc cos A


float sine_to_find_side(float a, float A, float B) {
A = A * (PI/180);
B = B * (PI/180);
return (a * sin(B)) / sin(A);
}


#endif

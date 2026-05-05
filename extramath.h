#ifndef EXTRAMATH_H
#define EXTRAMATH_H
#include <math.h>

#define  PI (3.142857143)

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
  float result = sin(1/radians);
return result;
}

float dinvc(float degrees) {
  float radians = degrees * (PI/180);
  float result = cos(1/radians);
return result;
}

float dinvt(float degrees) {
  float radians = degrees * (PI/180);
  float result = tan(1/radians);
return result;
}

// (2) For finding Angles and Sides of a Triangles

#endif

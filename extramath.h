#ifndef EXTRAMATH_H
#define EXTRAMATH_H
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
  float radians = degrees * (M_PI/180);
  float result = sin(radians);
return result;
}

float dicos(float degrees) {
  float radians = degrees * (M_PI/180);
  float result = cos(radians);
return result;
}

float ditan(float degrees) {
  float radians = degrees * (M_PI/180);
  float result = tan(radians);
return result;
}

float dinvs(float decimal_sine_number) {
  float result = asin(decimal_sine_number) * (180/M_PI);
return result;
}

float dinvc(float decimal_cosine_number) {
  float result = acos(decimal_cosine_number) * (180/M_PI);
return result;
}

float dinvt(float decimal_tangent_number) {
  float result = atan(decimal_tangent_number) * (180/M_PI);
return result;
}

// (2) For finding Angles and Sides of a Triangles
//     For Sine Rule: a/sin A = b/sin B = c/sin C
//     For Cosine Rule (a*a) = (b*b) + (c*c) - 2bc cos A


float sine_to_find_side(float first_side, float first_angle, float unknown_side_of_angle) {
first_angle = first_angle * (M_PI/180);
unknown_side_of_angle = unknown_side_of_angle * (M_PI/180);
return (first_side * sin(unknown_side_of_angle)) / sin(first_angle);
}

#endif

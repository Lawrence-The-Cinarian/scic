#ifndef EXTRAMATH_H
#define EXTRAMATH_H
#include <math.h>

#define  PI (3.142857143)
#define SINE_RULE (a/sin(A) = b/sin(B) = c/sin(C))
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
//     For Sine Rule: a/sin A = b/sin B = c/sin C
//     For Cosine Rule (a*a) = (b*b) + (c*c) - 2bc cos A




float sine_to_find_side(float a, float A, float B) {
A = A * (PI/180);
B = B * (PI/180);
return (a * sin(B)) / sin(A);
float sine_to_find_side(float b) {
A = A * (PI/180);
B = B * (PI/180);
return (b * sin(B)) / sin(A);
}
}

float sine_to_find_angles() {

}

float cosine_to_find_sides() {

}

float cosine_to_find_angles() {

}

#endif

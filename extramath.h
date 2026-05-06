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
double disin(double degrees) {
  double radians = degrees * (M_PI/180);
  double result = sin(radians);
return result;
}

double dicos(double degrees) {
  double radians = degrees * (M_PI/180);
  double result = cos(radians);
return result;
}

double ditan(double degrees) {
  double radians = degrees * (M_PI/180);
  double result = tan(radians);
return result;
}

double dinvs(double decimal_sine_number) {
  double result = asin(decimal_sine_number) * (180/M_PI);
return result;
}

double dinvc(double decimal_cosine_number) {
  double result = acos(decimal_cosine_number) * (180/M_PI);
return result;
}

double dinvt(double decimal_tangent_number) {
  double result = atan(decimal_tangent_number) * (180/M_PI);
return result;
}

/* (2) For finding Angles and Sides of a Triangles
 *     For Sine Rule: a/sin A = b/sin B = c/sin C
 *     For Cosine Rule (a*a) = (b*b) + (c*c) - 2bc cos A
 */

double sine_to_find_side(double first_side, double first_angle, double unknown_side_of_angle) {
first_angle = first_angle * (M_PI/180);
unknown_side_of_angle = unknown_side_of_angle * (M_PI/180);
return (first_side * sin(unknown_side_of_angle)) / sin(first_angle);
}

#endif

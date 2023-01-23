#include "s21_math.h"

long double s21_floor(double x) {
  long double floor_x = (long long int)x;
  if ((s21_fabs(x) == S21_INFINITY) || s21_isNan(x))
    floor_x = x;
  else if (s21_fabs(x - floor_x) > 0.0 && s21_fabs(x) > 0.0 && x < 0.0)
    floor_x -= 1;

  return floor_x;
}
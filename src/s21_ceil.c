#include "s21_math.h"

long double s21_ceil(double x) {
  long double floor_x = 0;

  if (s21_isNan(x)) {
    floor_x = x;
  } else if (s21_fabs(x) != S21_INFINITY) {
    floor_x = (long long int)x;
    if (s21_fabs(x - floor_x) > 0.0 && s21_fabs(x) > 0.0 && x >= 0.0)
      floor_x += 1;
  } else {
    floor_x = x;
  }
  return floor_x;
}
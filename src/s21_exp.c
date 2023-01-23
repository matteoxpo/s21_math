#include <float.h>
#include <stdio.h>

#include "s21_math.h"

long double s21_exp(double x) {
  long double siries_member = 1;
  long double series = 1.0;

  double sign = s21_signl(x);
  x = s21_fabs(x);

  for (double i = 1; siries_member > S21_VERY_SMALL_EPSILON; i++) {
    siries_member *= (x / i);
    series += siries_member;
    if (series > DBL_MAX) {
      series = S21_INFINITY;
      break;
    }
  }
  if (sign < 0) series = 1 / series;
  return series;
}

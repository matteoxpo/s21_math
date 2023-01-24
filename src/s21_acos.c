#include "s21_math.h"

long double s21_acos(double x) {
  long double res = 0;
  if (x > 1 || x < -1)
    res = S21_NAN();
  else
    res = 2 * s21_atan(s21_sqrt((1 - x) / (1 + x)));

  return res;
}

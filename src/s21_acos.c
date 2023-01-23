#include "s21_math.h"
long double s21_acos(double x) {
  if (x > 1 || x < -1) return S21_NAN();

  return 2 * s21_atan(s21_sqrt((1 - x) / (1 + x)));
}

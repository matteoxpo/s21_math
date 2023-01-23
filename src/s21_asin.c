#include "s21_math.h"

long double s21_asin(double x) {
  if (x > 1 || x < -1) return S21_NAN();
  return s21_atan(x / s21_sqrt(1 - x * x));
}

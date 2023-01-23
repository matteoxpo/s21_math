#include "s21_math.h"

long double s21_fmod(double x, double y) {
  long double result = 0;
  if (s21_fabs(y) == S21_INFINITY) {
    result = x;
  } else if (s21_fabs(x) == S21_INFINITY) {
    result = S21_NAN();
  } else if (s21_fabs(y) != 0.0) {
    result = x - y * (long long)(x / y);
  } else {
    result = S21_NAN();
  }

  return result;
}
long double s21_fdiv(double x, double y) { return y * (long long)(x / y); }
#include "s21_math.h"

long double s21_log(double x) {
  long double result;
  if (s21_fabs(x) < S21_EPSILON) {
    result = -S21_INFINITY;
  } else if (x > S21_EPSILON) {
    result = 0;
    double n = (x - 1) / (x + 1);
    double buf = 0;
    for (int i = 0; (buf = s21_pow(n, i) / i) > S21_EPSILON; i += 2) {
      result += buf;
    }
  }
  return result;
}

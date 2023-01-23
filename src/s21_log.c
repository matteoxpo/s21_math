#include "s21_math.h"

long double s21_log(double x) {
  double result = 0;
  int ex_pow = 0;

  if (x == S21_INFINITY || s21_isNan(x)) {
    result = x;
  } else if (x == -S21_INFINITY) {
    result = S21_NAN();
  } else if (x > S21_EPSILON) {
    result = 0;
    double compare = 0;
    for (; x >= S21_E; x /= S21_E, ex_pow++) continue;

    for (int i = 0; i < 200; i++) {
      compare = result;
      result = compare + 2 * (x - s21_exp(compare)) / (x + s21_exp(compare));
    }

  } else if (s21_fabs(x) < S21_EPSILON) {
    result = -S21_INFINITY;

  } else if (x < 0.0) {
    result = S21_NAN();
  }
  return result + ex_pow;
}
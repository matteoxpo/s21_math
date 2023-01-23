#include "s21_math.h"

long double s21_log(double x) {
  double result = S21_NAN();
  int ex_pow = 0;
  if (x > S21_EPSILON) {
    result = 0;
    double compare = 0;
    for (; x >= S21_EXP; x /= S21_EXP, ex_pow++) continue;

    for (int i = 0; i < 200; i++) {
      compare = result;
      result = compare + 2 * (x - s21_exp(compare)) / (x + s21_exp(compare));
    }
  } else if (s21_fabs(x) < S21_EPSILON) {
    result = -S21_INFINITY;
  }
  return result + ex_pow;
}
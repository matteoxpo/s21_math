#include "s21_math.h"

long double s21_log(double x) {
  double result = S21_NAN();
  int ex_pow = 0;
  if (x > S21_EPSILON) {
    result = 0;
    double compare = 0;
    for (; x >= S21_E; x /= S21_E, ex_pow++) continue;
    for (int i = 0; i < 100; i++) {
      compare = result;
      result = compare + 2 * (x - s21_exp(compare)) / (x + s21_exp(compare));
    }
    result += ex_pow;
  } else if (s21_fabs(x) < S21_EPSILON) {
    result = -S21_INFINITY;
  }
  return result;
}

/*long double result;
  if (s21_fabs(x) < S21_EPSILON) {
    result = -S21_INFINITY;
  } else if (x > S21_EPSILON) {
    result = 0;
    double n = (x - 1) / (x + 1);
    double buf = 0;
    double n_2n_and1 = n;
    for (int i = 1; (buf = 2 * n_2n_and1 / i) > S21_VERY_SMALL_EPSILON;
         i += 2) {
      result += buf;
      n_2n_and1 *= n * n;
    }
  }
  return result;*/
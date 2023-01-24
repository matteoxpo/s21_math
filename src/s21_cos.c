#include "s21_math.h"

long double s21_cos(double x) {
  long double sum_cos = 0;
  if ((s21_fabs(x) == S21_INFINITY) || s21_isNan(x)) {
    sum_cos = S21_NAN();
  } else {
    for (; x < -2 * S21_M_PI || 2 * S21_M_PI < x;) {
      if (x > 2 * S21_M_PI)
        x -= 2 * S21_M_PI;
      else
        x += 2 * S21_M_PI;
    }
    for (register int i = 0; i < 150; i++)
      sum_cos += s21_powi(-1, i) * s21_powi(x, 2 * i) / s21_factorial(2 * i);
  }

  return sum_cos;
}

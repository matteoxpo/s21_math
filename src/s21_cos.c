#include <stdio.h>

#include "s21_math.h"

long double s21_cos(double x) {
  long double sum_cos = 0;

  for (; x < -2 * S21_PI || 2 * S21_PI < x;) {
    if (x > 2 * S21_PI) {
      x -= 2 * S21_PI;
    } else {
      x += 2 * S21_PI;
    }
  }
  for (register int i = 0; i < 150; i++) {
    sum_cos += s21_powi(-1, i) * s21_powi(x, 2 * i) / s21_factorial(2 * i);
    printf("%lf", &sum_cos);
  }
  return sum_cos;
}
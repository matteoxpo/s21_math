#include <float.h>
#include <stdio.h>

#include "s21_math.h"

long double s21_exp(double x) {
  long double add_value = 1;
  long double series = 1;
  long double i = 1;
  while (s21_fabs(add_value) > S21_VERY_SMALL_EPSILON) {
    add_value *= x / i;
    i += 1;
    series += add_value;
    if (series > DBL_MAX) {
      series = S21_INFINITY;
      break;
    }
  }
  return series;
}

/*long double abs_x = s21_fabs(x);
  long double x_n = 1;
  long double n_fact = 1;
  int n = 0;
  long double delta = 0;
  double result = 0;
  // result = s21_powi(S21_E, (unsigned int)(s21_floor(abs_x)));
  while ((delta = x_n / n_fact) > (S21_VERY_SMALL_EPSILON)) {
    result += delta;
    n++;
    x_n *= abs_x;
    n_fact *= n;
  }
  printf("%d\n", n);

  if (x < 0) {
    result = 1 / result;
  }
  return result;*/
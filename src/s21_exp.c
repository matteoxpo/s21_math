#include "s21_math.h"

long double s21_exp(double x) {
  long double series_member = 1;
  long double prev_appr = 0;
  long double series = 1.0;
  double sign = s21_signl(x);
  x = s21_fabs(x);
  unsigned long long int i = 1;
  while (s21_fabs(series - prev_appr) > 1e-16 && i < __UINT64_MAX__ &&
         series < DBL_MAX) {
    series_member *= (x / (long double)i);
    prev_appr = series;
    series += series_member;
    if (series > DBL_MAX) series = S21_INFINITY;

    i++;
  }
  if (sign < 0) series = 1 / series;
  return series;
}

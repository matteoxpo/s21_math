#include "s21_math.h"

long double s21_pow(double base, double exp) {
  if (s21_fabs(exp) < S21_EPSILON) {
    return 1;
  }
  if (s21_fabs(base) < S21_EPSILON) {
    return 0;
  }
  return s21_powi(base, (unsigned)s21_floor(exp)) *
         s21_exp(s21_fmod(exp, 1) * s21_log(base));
}

/**/
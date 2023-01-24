#include "s21_math.h"

long double s21_pow(double base, double exp) {
  long double res = 0;
  long double lld_base = base;
  if (s21_isNan(base) || s21_isNan(exp)) {
    res = S21_NAN();
  } else if (base == 1 || s21_fabs(exp) < S21_EPSILON) {
    res = 1;
  } else if (s21_fabs(base) < S21_EPSILON || exp == -S21_INFINITY) {
    res = 0;
  } else if (lld_base > 0) {
    res = s21_exp(exp * s21_log(lld_base));
  } else if (base == -S21_INFINITY) {
    res = exp > 0 ? S21_INFINITY : 0;
  } else if (!s21_isInt(exp)) {
    res = S21_NAN();
  } else {
    lld_base *= -1;
    res = s21_exp(exp * s21_log(lld_base));
    if (s21_fmod(exp, 2) != 0) res *= -1;
  }
  return res;
}

#include "s21_math.h"

long double pow(double base, double exp) {
  return s21_exp(exp * s21_log(base));
}
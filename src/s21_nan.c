#include "s21_math.h"

double S21_NAN() {
  unsigned long long _nan_buf = (0x7fffffffffffffff);
  return *((double*)(&_nan_buf));
}
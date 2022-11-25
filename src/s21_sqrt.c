#include "s21_math.h"

long double s21_sqrt(double x) {
  long double left = 0;
  long double right = s21_max(1, x);  //
  long double mid;
  mid = (left + right) / 2;
  while ((mid - left) > S21_EPSILON) {
    if (mid * mid > x) {
      right = mid;
    } else {
      left = mid;
    }
    mid = (left + right) / 2;
  }
  return mid;
}

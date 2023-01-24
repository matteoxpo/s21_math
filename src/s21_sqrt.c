#include "s21_math.h"

long double s21_sqrt(double x) {
  long double mid = 0;
  if (x >= 0) {
    long double left = 0;
    long double right = s21_max(1, x);
    mid = (left + right) / 2;
    while ((mid - left) > S21_EPSILON) {
      if (mid * mid > x)
        right = mid;
      else
        left = mid;

      mid = (left + right) / 2;
    }
  } else {
    mid = S21_NAN();
  }
  return mid;
}

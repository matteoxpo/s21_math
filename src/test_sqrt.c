#include <stdio.h>

#include "s21_math.h"
double s21_max(double x, double y);
long double s21_sqrt(double x);

int main() {
  double x = 0.09;
  printf("%Lf \n", s21_sqrt(x));
  x = 25;
  printf("%Lf \n", s21_sqrt(x));

  // printf("%lf", s21_max(80.4, 45));
}

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

double s21_max(double x, double y) { return ((x > y) ? x : y); }
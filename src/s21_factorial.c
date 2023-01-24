#include "s21_math.h"

long double s21_factorial(unsigned int x) {
  return (x == 0) ? 1.0 : x * s21_factorial(x - 1);
}

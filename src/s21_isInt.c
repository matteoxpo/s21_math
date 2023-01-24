#include "s21_math.h"

int s21_isInt(long double x) { return (x - (long long)x) == 0; }
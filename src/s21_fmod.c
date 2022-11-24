#include "s21_math.h"

long double s21_fmod(double x, double y) { return x - y * (long long)(x / y); }
long double s21_fdiv(double x, double y) { return y * (long long)(x / y); }
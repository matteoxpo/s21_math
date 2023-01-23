#ifndef _S21_MATH_H
#define _S21_MATH_H

#define S21_EPSILON (1e-6)
#define S21_VERY_SMALL_EPSILON (1e-11)
#define S21_VERY_VERY_SMALL_EPSILON (1e-26)
#define S21_PI (3.14159265358979323846264338327950288)
#define S21_M_PI (3.14159265358979323846264338327950288)
#define S21_E (2.71828182845904523536028747135266250)
#define S21_INFINITY (1.0 / 0.0)
double S21_NAN();
int s21_isNan(double x);

long int s21_abs(int x);  // вычисляет модуль целого числа
long double s21_fabs(double x);  // вычисляет модуль с плавающей точкой

long double s21_signl(double x);  // возвращает знак
int s21_isInt(long double x);  //  возвращает является ли число целым

long double s21_ceil(double x);   // округление вверх
long double s21_floor(double x);  // округление вниз

double s21_max(double x, double y);  // возвращает максимум

long double s21_exp(double x);  // возвращает e, возведенное в степень x
long double s21_pow(double base, double exp);  // возводит число в степень
long double s21_powi(double base,
                     unsigned int exp);  // возводит число в целую степень
long double s21_sqrt(double x);  // вычисляет квадратный корень

long double s21_factorial(unsigned int x);  // факториал

long double s21_fmod(double x, double y);  // остаток от деления double
long double s21_fdiv(double x, double y);

long double s21_log(double x);  // вычисляет натуральный логарифм

long double s21_acos(double x);  // вычисляет арккосинус
long double s21_asin(double x);  // вычисляет арксинус
long double s21_atan(double x);  // вычисляет арктангенс

long double s21_sin(double x);  // вычисляет синус
long double s21_cos(double x);  // вычисляет косинус
long double s21_tan(double x);  // вычисляет тангенс

#endif  // _S21_MATH_H

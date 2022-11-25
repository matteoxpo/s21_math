/*
 * DO NOT EDIT THIS FILE. Generated by checkmk.
 * Edit the original source file "test_s21_sqrt.check" instead.
 */

#include <check.h>

#line 1 "test_s21_sqrt.check"
#include <stdlib.h>
#include "s21_sqrt.c"

START_TEST(sqrt_test)
{
#line 5
for (int i = 0; i < 100; i++){
ck_assert_double_eq_tol(s21_sqrt(i), sqrt(i), S21_EPSILON);
}
}
END_TEST

int main(void)
{
    Suite *s1 = suite_create("Core");
    TCase *tc1_1 = tcase_create("Core");
    SRunner *sr = srunner_create(s1);
    int nf;

    suite_add_tcase(s1, tc1_1);
    tcase_add_test(tc1_1, sqrt_test);

    srunner_run_all(sr, CK_ENV);
    nf = srunner_ntests_failed(sr);
    srunner_free(sr);

    return nf == 0 ? 0 : 1;
}

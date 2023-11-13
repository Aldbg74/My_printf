/*
** EPITECH PROJECT, 2023
** B-CPE-101-LYN-1-1-myprintf-alexis.drago-beltran
** File description:
** criterion.c
*/

#include <criterion/criterion.h>

int my_test(my_printf, simple_string)
{
    my_printf("hello world");
    cr_assert_stdout_eq_st('hello world');
}

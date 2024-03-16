/*
** EPITECH PROJECT, 2023
** B-MUL-100-LYN-1-1-myradar-marin.lagie
** File description:
** my_str_isnum.c
*/

#include "../../include/my.h"

int my_str_isnum(char const *str)
{
    for (int i = 0; str[i]; i++)
        if (!my_isnum(str[i]))
            return 0;
    return 1;
}

/*
** EPITECH PROJECT, 2023
** B-CPE-100-LYN-1-1-cpoolday07-marin.lagie
** File description:
** my_str_isprintable.c
*/
#include "../../include/my.h"

int my_str_isprintable(char *str)
{
    for (int i = 0; str[i]; i++)
        if (str[i] < 0 || str[i] > 127)
            return 0;
    return 1;
}

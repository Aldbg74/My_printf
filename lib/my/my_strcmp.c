/*
** EPITECH PROJECT, 2017
** strcmp
** File description:
** cmp
*/

#include "../../include/my.h"

int my_strcmp(char const *s1, char const *s2)
{
    for (int x = 0; s1[x] != '\0'; x++) {
        if (s1[x] > s2[x])
            return 32;
        if (s1[x] < s2[x])
            return -32;
    }
    return 0;
}

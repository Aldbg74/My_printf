/*
** EPITECH PROJECT, 2023
** B-CPE-110-LYN-1-1-settingup-marin.lagie
** File description:
** my_atoi.c
*/

#include "../../include/my.h"

int my_atoi(char const *str)
{
    int isnumber = 0;
    int isnegative = 0;
    int num = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (!my_isnum(str[i]) && isnumber == 1)
            break;
        if (str[i] == 45 && str[i + 1] >= 48 && str[i + 1] <= 57) {
            isnegative = 1;
            i++;
        }
        isnumber = 1;
        num = num * 10 + (str[i] - '0');
        if ((2147483647 - num) < 0)
            num = 0;
    }
    return isnegative == 1 ? num * -1 : num;
}

/*
** EPITECH PROJECT, 2023
** B-CPE-101-LYN-1-1-myprintf-alexis.drago-beltran
** File description:
** long.c
*/

#include "../../../../../include/my_printf.h"

void print_long(int length, long value)
{
    char buffer[50];
    int i = 0;

    if (value < 0) {
        i++;
        buffer[i] = '-';
        value = -value;
    }
    while (value > 0 || i < length) {
        i++;
        buffer[i] = value % 10 + '0';
        value /= 10;
    }
    while (i < length) {
        i++;
        buffer[i] = ' ';
    }
    while (i > 0)
        write(1, &buffer[--i], 1);
    write(1, "\n", 1);
}

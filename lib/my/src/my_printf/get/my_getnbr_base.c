/*
** EPITECH PROJECT, 2023
** B-CPE-101-LYN-1-1-myprintf-alexis.drago-beltran
** File description:
** my_getnbr_base.c
*/

#include "../../../../../include/my_printf.h"

int get_length_base(int nbr, int base_len)
{
    int length = 0;

    while (nbr != 0) {
        nbr /= base_len;
        length++;
    }
    return length;
}

char *my_getnbr_base(int nbr, char const *base)
{
    int base_len = my_strlen(base);
    int is_negative = nbr < 0;
    int length = 0;
    char *result;

    if (is_negative)
        nbr = -nbr;
    length = get_length_base(nbr, base_len);
    if (is_negative)
        length++;
    result = malloc(length + 1);
    result[length] = '\0';
    while (nbr != 0) {
        length--;
        result[length] = base[nbr % base_len];
        nbr /= base_len;
    }
    if (is_negative)
        result[0] = '-';
    return result;
}

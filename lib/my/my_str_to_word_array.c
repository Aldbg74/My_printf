/*
** EPITECH PROJECT, 2023
** B-MUL-100-LYN-1-1-myradar-marin.lagie
** File description:
** my_str_to_word_array.c
*/

#include "../../include/my.h"

static int is_charac(char c, int status)
{
    if (c >= 33 && c <= 126 && ((status == 1) || (status == 2 && c != 58)))
        return 1;
    return 0;
}

static int word_count(const char *c)
{
    int count = 1;

    for (int i = 0; c[i]; i++)
        if (c[i] == ' ')
            count++;
    return count;
}

static int len_word(const char *str, int i)
{
    int x = i;

    while (is_charac(str[x], 1) == 1)
        x++;
    return x - i;
}

static int next_carac(const char *str, int i)
{
    int x = i;

    while (is_charac(str[x], 1) == 0)
        x++;
    return x;
}

static void process(char const *str, char **array, int nb_word)
{
    int word_len = 0;
    int pos_str = 0;
    int pos_tab = 0;

    while (pos_tab < nb_word) {
        word_len = 0;
        pos_str = next_carac(str, pos_str);
        array[pos_tab] = malloc((len_word(str, pos_str) + 1) * sizeof(char));
        while (str[pos_str] && is_charac(str[pos_str], 1) != 0) {
            array[pos_tab][word_len] = str[pos_str];
            pos_str++;
            word_len++;
        }
        array[pos_tab][word_len] = '\0';
        pos_str++;
        pos_tab++;
    }
    array[pos_tab] = NULL;
}

char **my_str_to_word_array(const char *str)
{
    int nb_word = word_count(str);
    char **word_array = malloc(sizeof(char *) * (nb_word + 1));

    process(str, word_array, nb_word);
    return word_array;
}

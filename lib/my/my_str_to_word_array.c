/*
** EPITECH PROJECT, 2019
** my_str_to_word_array.c
** File description:
** get a char * to get a char **
*/

#include <stdio.h>
#include <stdlib.h>
#include "my.h"

int end_word(char c)
{
    if (c == ' ' || c == '\t' || c == '\0')
        return (1);
    return (0);
}

int word_len(char *text, int i)
{
    int cnt = 0;

    for (cnt = 0; end_word(text[cnt + i]) == 0; cnt++) {
    }
    return (cnt);
}

int word_number(char *text)
{
    int word_nbr = 0;
    int start = 1;

    for (int i = 0; text[i] != '\0'; i++) {
        if (end_word(text[i]) == 1)
            start++;
        if (end_word(text[i]) == 0 && start != 0) {
            word_nbr++;
            start = 0;
        }
    }
    return (word_nbr);
}

char **my_str_to_word_array(char *text)
{
    int start = 0;
    int word_nbr = word_number(text);
    char **list = malloc(sizeof(char *) * (word_nbr + 1));
    for (int i = 0, j = 0, k = 0; text[i] != '\0'; i++) {
        if (start == 0 && text[i] != ' ' && text[i] != '\t') {
            list[j] = malloc(sizeof(char) * (word_len(text, i) + 1));
            start++;
        } if (text[i] != ' ' && text[i] != '\t') {
            list[j][k] = text[i];
            k++;
            list[j][k] = '\0';
        } else {
            if (start != 0)
                j++;
            k = 0;
            start = 0;
        }
    }
    list[word_nbr] = NULL;
    return (list);
}

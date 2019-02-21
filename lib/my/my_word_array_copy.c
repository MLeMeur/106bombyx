/*
** EPITECH PROJECT, 2019
** my_word_array_copy.c
** File description:
** copy a word_array into another
*/

#include "my.h"
#include <stddef.h>
#include <stdlib.h>

char **my_word_array_copy(char **array)
{
    char **new = malloc(sizeof(char *) * (my_word_array_len(array) + 1));
    int i;

    for (i = 0; array[i] != NULL; i++)
        new[i] = array[i];
    new[i] = NULL;
    return (new);
}

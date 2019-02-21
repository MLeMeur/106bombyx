/*
** EPITECH PROJECT, 2019
** my_put_word_array.c
** File description:
** write a word array
*/

#include "my.h"
#include <stddef.h>

void my_put_word_array(char **array)
{
    for (int i = 0; array[i] != NULL; i++) {
        my_putstr(array[i]);
        my_putchar('\n');
    }
}

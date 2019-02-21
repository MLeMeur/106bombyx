/*
** EPITECH PROJECT, 2019
** my_word_array_len.c
** File description:
** get the number of line in a word array
*/

#include <unistd.h>

int my_word_array_len(char **map)
{
    int i = 0;

    for (i = 0; map[i] != NULL; i++);
    return (i);
}

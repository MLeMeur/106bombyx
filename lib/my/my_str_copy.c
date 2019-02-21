/*
** EPITECH PROJECT, 2019
** my_str_copy.c
** File description:
** copy a string into another
*/

#include "../../include/my.h"

char *my_str_copy(char *src)
{
    char *dest = malloc_safe(sizeof(char) * (my_strlen(src) + 1));
    int i;

    for (i = 0; src[i] != '\0'; i++)
        dest[i] = src[i];
    dest[i] = '\0';
    return (dest);
}

char *my_str_n_copy(char *src, int n)
{
    int len = n;

    if (len > my_strlen(src))
        len = my_strlen(src);

    char *dest = malloc_safe(sizeof(char) * (len + 1));
    int i;

    for (i = 0; src[i] != '\0' && i < n - 1; i++)
        dest[i] = src[i];
    dest[i] = '\0';
    return (dest);
}

/*
** EPITECH PROJECT, 2019
** my_str_cat.c
** File description:
** concatenante 2 strings
*/

#include <stddef.h>
#include <stdlib.h>
#include "my.h"

char *my_str_cat(char *src1, char *src2)
{
    int len1 = my_strlen(src1);
    int len2 = my_strlen(src2);
    char *dest = malloc_safe(sizeof(char) * (len1 + len2 + 1));
    int i = 0;
    int j = 0;

    for (i = 0; src1[i] != '\0'; i++)
        dest[i] = src1[i];
    for (j = 0; src2[j] != '\0'; j++)
        dest[j + i] = src2[j];
    dest[j + i] = '\0';
    return (dest);
}

char *my_str_fus(char *src1, char *src2)
{
    int len1 = my_strlen(src1);
    int len2 = my_strlen(src2);
    char *dest = malloc_safe(sizeof(char) * (len1 + len2 + 1));
    int i = 0;
    int j = 0;

    for (i = 0; src1[i] != '\0'; i++)
        dest[i] = src1[i];
    for (j = 0; src2[j] != '\0'; j++)
        dest[j + i] = src2[j];
    dest[j + i] = '\0';
    free(src1);
    return (dest);
}

char *my_str_n_fus(char *src1, char *src2, int n)
{
    int len1 = my_strlen(src1);
    int len2 = my_strlen(src2);
    char *dest = malloc_safe(sizeof(char) * (len1 + len2 + 1));
    int i = 0;
    int j = 0;

    for (i = 0; src1[i] != '\0'; i++)
        dest[i] = src1[i];
    for (j = 0; src2[j] != '\0' && j < n; j++)
        dest[j + i] = src2[j];
    dest[j + i] = '\0';
    free(src1);
    return (dest);
}

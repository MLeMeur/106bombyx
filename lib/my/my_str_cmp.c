/*
** EPITECH PROJECT, 2019
** my_str_cmp.c
** File description:
** say what str is efore alphabetically
*/

#include "../../include/my.h"

int test_same_char(char c1, char c2, int i)
{
    if (c1 == '\0')
        return (1);
    if (c1 >= 'A' && c1 <= 'Z' && i == 0)
        c1 = c1 + 'a' - 'A';
    if (c2 >= 'A' && c2 <= 'Z' && i == 0)
        c2 = c2 + 'a' - 'A';
    if (c1 == c2)
        return (0);
    return (1);
}

int my_str_cmp(char *txt1, char *txt2)
{
    int i = 0;
    char c1;
    char c2;

    for (i = 0; test_same_char(txt1[i], txt2[i], 0) == 0; i++);
    if (txt1[i] == txt2[i] - 'a' + 'A')
        return (1);
    if (txt2[i] == txt1[i] - 'a' + 'A')
        return (2);
    c1 = txt1[i];
    c2 = txt2[i];
    if (c1 >= 'A' && c1 <= 'Z')
        c1 = c1 + 'a' - 'A';
    if (c2 >= 'A' && c2 <= 'Z')
        c2 = c2 + 'a' - 'A';
    if (c1 < c2)
        return (1);
    if (c2 < c1)
        return (2);
    return (0);
}

int my_str_n_cmp(char *txt1, char *txt2, int n)
{
    int i = 0;
    char c1;
    char c2;

    for (i = 0; test_same_char(txt1[i], txt2[i], 0) == 0 && i < n - 1; i++);
    if (txt1[i] == txt2[i] - 'a' + 'A')
        return (1);
    if (txt2[i] == txt1[i] - 'a' + 'A')
        return (2);
    c1 = txt1[i];
    c2 = txt2[i];
    if (c1 < c2)
        return (1);
    if (c2 < c1)
        return (2);
    return (0);
}

int my_s_cm(char *txt1, char *txt2)
{
    int i = 0;
    char c1;
    char c2;

    for (i = 0; test_same_char(txt1[i], txt2[i], 1) == 0; i++);
    if (txt1[i] == txt2[i] - 'a' + 'A')
        return (1);
    if (txt2[i] == txt1[i] - 'a' + 'A')
        return (2);
    c1 = txt1[i];
    c2 = txt2[i];
    if (c1 < c2)
        return (1);
    if (c2 < c1)
        return (2);
    return (0);
}

int my_s_n_cm(char *txt1, char *txt2, int n)
{
    int i = 0;
    char c1;
    char c2;

    for (i = 0; test_same_char(txt1[i], txt2[i], 1) == 0 && i < n - 1; i++);
    if (txt1[i] == txt2[i] - 'a' + 'A')
        return (1);
    if (txt2[i] == txt1[i] - 'a' + 'A')
        return (2);
    c1 = txt1[i];
    c2 = txt2[i];
    if (c1 < c2)
        return (1);
    if (c2 < c1)
        return (2);
    return (0);
}

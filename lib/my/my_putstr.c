/*
** EPITECH PROJECT, 2018
** my_putstr.c
** File description:
** write strings
*/

#include <unistd.h>
#include "my.h"

void my_putstr(char *str)
{
    if (str[0] != '\0')
        write(1, str, my_strlen(str));
}

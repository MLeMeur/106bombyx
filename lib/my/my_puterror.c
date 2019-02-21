/*
** EPITECH PROJECT, 2018
** my_puterror.c
** File description:
** write errors in error output
*/

#include <unistd.h>
#include "my.h"

void my_puterror(char *error)
{
    if (error[0] != '\0')
        write(2, error, my_strlen(error));
}

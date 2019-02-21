/*
** EPITECH PROJECT, 2018
** my_getnbr.c
** File description:
** get number
*/

#include <unistd.h>
#include "my.h"

int my_get_nbr(char *nb)
{
    int number = 0;
    int i = 0;

    if (nb[0] == '-')
        i++;
    while (nb[i] != '\0' && nb[i] != '.') {
        if (my_isnumber(nb[i]) == 1)
            break;
        number =  number * 10;
        number += nb[i] - 48;
        i++;
    }
    if (nb[0] == '-')
        number *= -1;
    if (nb[i] == '\0' || nb[i] == '.')
        return (number);
}

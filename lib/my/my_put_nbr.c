/*
** EPITECH PROJECT, 2018
** my_put_nbr.c
** File description:
** write numbers
*/

#include "my.h"

int my_put_nbr(int nb)
{
    char n = '\n';
    char print;

    if (nb < 0) {
        my_putchar('-');
        nb = nb * -1;
    }
    if (nb / 10 != 0) {
        my_put_nbr(nb / 10);
    }
    print = nb % 10 + '0';
    my_putchar(print);
    return (0);
}

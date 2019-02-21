/*
** EPITECH PROJECT, 2018
** my_isnumber.c
** File description:
** return 0 if it's a number
*/

int my_isnumber(int nb)
{
    if (nb >= '0' && nb <= '9')
        return (0);
    else
        return (1);
}

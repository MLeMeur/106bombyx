/*
** EPITECH PROJECT, 2018
** my_intlen.c
** File description:
** give the lenght of a number
*/

int my_intlen(int nb)
{
    int len = 0;
    if (nb < 0)
        nb *= -1;
    for (int i = 1; nb / i >= 1; i = i * 10) {
        len++;
    }
    return (len);
}

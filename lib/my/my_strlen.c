/*
** EPITECH PROJECT, 2018
** my_strlen.c
** File description:
** give the lenght of a str
*/

int my_strlen(char *str)
{
    int count = 0;

    while (str[count] != '\0') {
        count++;
    }
    return (count);
}

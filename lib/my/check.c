/*
** EPITECH PROJECT, 2019
** check
** File description:
** check
*/

#include <stdlib.h>
#include "../../include/106bombyx.h"
#include "../../include/my.h"

int is_num(char *str)
{
	for (int i = 0; i < my_strlen(str); i++)
		if (str[i] < '0' && str[i] > '9')
			return (FALSE);
	return (TRUE);
}

int is_decimal(char *str)
{
	for (int i = 0; i < my_strlen(str); i++)
		if (str[i] < '0' && str[i] > '9' && str[i] != '.')
			return (FALSE);
	return (TRUE);
}

int check_error(int ac, char **av)
{
    if (ac != 3 && ac != 4)
        return (FALSE);
	if (atof(av[1]) <= 0)
		return (FALSE);
	if ((ac == 3) && (is_num(av[1]) == FALSE || is_decimal(av[2]) == FALSE ||
    atof(av[2]) < 1 || atof(av[2]) > 4))
			return (FALSE);
	if ((ac == 4) && (is_num(av[1]) == FALSE || is_num(av[2]) == FALSE ||
     is_num(av[3]) == FALSE || atof(av[1]) <= 0 || atof(av[1]) >= atof(av[2])))
			return (FALSE);
	return (TRUE);
}
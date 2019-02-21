/*
** EPITECH PROJECT, 2019
** get
** File description:
** get
*/

#include <stdlib.h>
#include <stdio.h>
#include "../../include/106bombyx.h"
#include "../../include/my.h"

void get_help(void)
{
	printf("USAGE\n\t\t./106bombyx n [k | i0 i1]\n\n");
	printf("DESCRIPTION\n"
			"\t\tn   number of first generation individuals\n"
			"\t\tk   growth rate from 1 to 4\n"
			"\t\ti0  initial generation (included)\n"
			"\t\ti1  final generation (included)\n");
}

arg_t *get_arg(int ac, char **av)
{
	arg_t *arg = malloc(sizeof(arg_t));

	arg->n = atoi(av[1]);
	if (ac == 3) {
		arg->type = 1;
		arg->rate = atof(av[2]);
	} else if (ac == 4) {
		arg->type = 2;
		arg->generation_1 = atof(av[2]);
		arg->generation_final = atof(av[3]);
	}
	return (arg);
}
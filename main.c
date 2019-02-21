/*
** EPITECH PROJECT, 2019
** main.c
** File description:
** file with the main of 106bombyx
*/

#include <stdio.h>
#include <stdlib.h>
#include "include/my.h"
#include "include/106bombyx.h"

void part_normal(arg_t *arg)
{
	double x = arg->n;

	for (int i = 1; i <= 100; i++) {
		printf("%d %.2f\n", i, x);
		x = arg->rate * x * ((1000 - x) / 1000);
	}
}

void part_generation(arg_t *arg)
{
	double k = 1;
	double x = arg->n;

	for (k = 1; k <= 4; k += 0.01) {
		for (int i = 1; i <= arg->generation_final; i++) {
			while (i < arg->generation_1) {
				x = k * x * ((1000 - x) / 1000);
				i++;
			}
			x = k * x * ((1000 - x) / 1000);
			printf("%.2f %.2f\n", k, x);
		}
	}
}

int main(int ac, char **av)
{
  arg_t *arg;

	if (ac == 2 && ((my_strlen(av[1]) == 1 && av[1][0] == 'h') ||
		(my_strlen(av[1]) == 2 && av[1][1] == 'h'))) {
			get_help();
			return (SUCCESS);
	}
	if (check_error(ac, av) == FALSE)
		return (FAIL);
	arg = get_arg(ac, av);
	if (arg->type == 1) {
		part_normal(arg);
	}
	if (arg->type == 2) {
		part_generation(arg);
	}
	return (TRUE);
}
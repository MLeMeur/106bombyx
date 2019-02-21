/*
** EPITECH PROJECT, 2019
** .h
** File description:
** .h
*/

#ifndef _106BOMBYX_H_
#define _106BOMBYX_H_

#define FALSE 0
#define SUCCESS 0
#define FAIL 84
#define TRUE 1

typedef struct arg_s {
	int type;
	double generation_1;
	double generation_final;
    double n;
	double rate;
} arg_t;

/* main file */

void part_normal(arg_t *arg);
void part_generation(arg_t *arg);


/* check file */

int is_num(char *str);
int is_decimal(char *str);
int check_error(int ac, char **av);

/* get file */

void get_help(void);
arg_t *get_arg(int ac, char **av);

#endif /* !106BOMBYX_H_ */

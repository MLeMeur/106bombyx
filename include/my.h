/*
** EPITECH PROJECT, 2018
** my.h
** File description:
** header for all .c
*/

#ifndef MY_H_
#define MY_H_

void my_putchar(int);
void my_putstr(char  *);
int my_strlen(char *);
int my_intlen(int);
int my_put_nbr(int);
int my_get_nbr(char *);
int my_isnumber(int);
void my_puterror(char *);
void my_put_word_array(char **);
void *malloc_safe(int);
char *my_str_copy(char *);
char *my_str_n_copy(char *, int);
char *my_str_cat(char *, char *);
char *my_str_fus(char *, char *);
char *my_str_n_fus(char *, char *, int);
int my_str_cmp(char *, char *);
int my_str_n_cmp(char *, char *, int);
int my_s_cm(char *, char *);
int my_s_n_cm(char *, char *, int);
char **my_str_to_word_array(char *);
char *get_next_line(int);
int my_word_array_len(char **);
char **my_word_array_copy(char **);

#endif //MY_H_

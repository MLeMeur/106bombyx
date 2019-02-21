/*
** EPITECH PROJECT, 2018
** get_next_line.c
** File description:
** it get the next line
*/

#include "get_next_line.h"
#include "my.h"
#include <unistd.h>
#include <stdlib.h>
#include <stddef.h>
#include <fcntl.h>

int test_line(char *text, int count, int rest_len)
{
    int i;
    for (i = 0; text[i] != '\0'; i++) {
        if (text[i] == '\n')
            return (1);
    }
    if (i + 1 - rest_len < READ_SIZE * count && count != 1)
        return (1);
    return (0);
}

char *read_to_the_end(char *rest, char *line, char *text, int fd)
{
    int test = 0;
    int rest_len = my_strlen(rest);

    for (int i = 0; test_line(line, i, rest_len) == 0; i++) {
        test = read(fd, text, READ_SIZE);
        if (test == -1 || test == 0 && i == 0)
            return (NULL);
        text[test] = '\0';
        line = my_str_cat(line, text);
        if (test < READ_SIZE)
            break;
    }
    return (line);
}

char *after_setup(char *rest, char *line, char *text, int fd)
{
    line = read_to_the_end(rest, line, text, fd);
    if (line == NULL)
        return (NULL);
    for (int i = 0, end = 0, j = 0; line[i] != '\0'; i++) {
        if (end == 1) {
            rest[j] = line[i];
            line[i] = '\0';
            j++;
        } if (line[i] == '\n') {
            end = 1;
            line[i] = '\0';
        }
    }
    return (line);
}

char *get_next_line(int fd)
{
    if (fd == -1)
        return (NULL);
    static char *rest;
    if (!rest) {
        rest = malloc(sizeof(char) * READ_SIZE);
        rest[0] = '\0';
    }
    char *line = malloc(sizeof(char));
    char *text = malloc(sizeof(char) *(1 + READ_SIZE));

    if (!rest || !line || !text)
        return (NULL);
    line[0] = '\0';
    line = my_str_cat(line, rest);
    for (int i = 0; i < READ_SIZE; i++) {
        rest[i] = '\0';
        text[i] = '\0';
    }
    line = after_setup(rest, line, text, fd);
    return (line);
}

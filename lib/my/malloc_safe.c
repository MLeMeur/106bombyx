/*
** EPITECH PROJECT, 2019
** malloc_safe.c
** File description:
** have a better malloc
*/

#include <stdlib.h>
#include <stddef.h>
#include "my.h"

void *malloc_safe(int length)
{
    void *pointer = malloc(length);

    if (pointer == NULL) {
        my_puterror("Malloc failed \n");
        exit(84);
    }
    return (pointer);
}

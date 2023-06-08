/*
** EPITECH PROJECT, 2023
** n4s_bootstrap
** File description:
** init_n4s
*/

#include "../include/my.h"

n4s_t *init_n4s(void)
{
    n4s_t *n4s = malloc(sizeof(n4s_t));
    n4s->angle = NULL;
    n4s->speed = 0;
    n4s->direction = 0;
    return n4s;
}

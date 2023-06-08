/*
** EPITECH PROJECT, 2023
** n4s_bootstrap
** File description:
** get_rayat
*/

#include "../include/my.h"

double get_rayat(n4s_t *n4s, int i)
{
    double rayat = *n4s->angle[i];
    return rayat;
}

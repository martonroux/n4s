/*
** EPITECH PROJECT, 2023
** n4s_bootstrap
** File description:
** get_raymax
*/

#include "../include/my.h"

float *get_raymax(n4s_t *n4s)
{
    float *raymax = malloc(sizeof(float) * 2);
    float max = 0;
    int i = 0;

    for (i = 0; n4s->angle[i] != NULL; i++) {
        if (*n4s->angle[i] > max) {
            max = *n4s->angle[i];
            raymax[0] = max;
            raymax[1] = i;
        }
    }
    return raymax;
}

/*
** EPITECH PROJECT, 2023
** n4s_bootstrap
** File description:
** get_angle
*/

#include "../include/my.h"

int my_array_len(char **array)
{
    int len;

    for (len = 0; array[len]; len++);
    return len;
}

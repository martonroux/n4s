/*
** EPITECH PROJECT, 2023
** n4s_bootstrap
** File description:
** get_angle
*/

#include "../include/my.h"

int is_float(char *str)
{
    for (int i = 0; str[i]; i++) {
        if (str[i] != '.' && (str[i] < '0' || str[i] > '9'))
            return 0;
    }
    return 1;
}

float **get_angle(char **tab)
{
    char **angle_str = tab + 1;
    float **angle;
    int len;

    while (*angle_str && !is_float(*angle_str))
        angle_str++;

    if (*angle_str == NULL)
        return NULL;

    len = my_array_len(angle_str);
    angle = malloc(sizeof(float *) * len);
    angle[len - 1] = NULL;
    for (int i = 0; is_float(angle_str[i]); i++) {
        angle[i] = malloc(sizeof(float));
        angle[i][0] = atof(angle_str[i]);
    }
//    fprintf(stderr, "ANGLES: ");
//    for (int i = 0; angle[i]; i++) {
//        fprintf(stderr, "%f ", *angle[i]);
//    }
//    fprintf(stderr, "\n");
    return angle;
}

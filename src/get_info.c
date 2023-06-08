/*
** EPITECH PROJECT, 2023
** n4s_bootstrap
** File description:
** get_info
*/

#include "../include/my.h"

int get_info(n4s_t *n4s)
{
    char *info = NULL;
    size_t n = 0;

/*     fprintf(stderr, "me : GET_INFO_LIDAR\n"); */
    printf("GET_INFO_LIDAR\n");
    fflush(stdout);
    getline(&info, &n, stdin);
    n4s->tab = split(info, ':');
    n4s->angle = get_angle(n4s->tab);

    
    return 0;
}

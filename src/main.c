/*
** EPITECH PROJECT, 2023
** n4s_bootstrap
** File description:
** main
*/

#include "../include/my.h"

int main(int ac, char **av)
{
    n4s_t *n4s = init_n4s();
    int i = 0;
    char *info = NULL;
    size_t n = 0;
    

    printf("START_SIMULATION\n");
    fflush(stdout);
    getline(&info, &n, stdin);
    free(info);
    fprintf(stderr, "STARTED\n");
    while (1) {
        get_info(n4s);
        algo(n4s);
        set_thrust(n4s->speed / 10);
        set_direction(n4s->direction);
        i++;
    }
}

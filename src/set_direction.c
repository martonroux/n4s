/*
** EPITECH PROJECT, 2023
** n4s_bootstrap
** File description:
** set_direction
*/

#include "../include/my.h"

void my_putstr(char *str)
{
    char c;

    for (int i = 0; str[i]; i++) {
        c = str[i];
        write(1, &c, 1);
    }
}

void set_direction(float direction)
{
    char *info = NULL;
    size_t n = 0;
    if (direction > 1)
        direction = 1;
    if (direction < -1)
        direction = -1;

    if (direction < 0)
        fprintf(stderr, "right\n");
    else 
        fprintf(stderr, "left\n");
    char *str = malloc(sizeof(char) * 10);
    gcvt(direction, 4, str);
    printf("WHEELS_DIR:%f\n", direction);
    fflush(stdout);
    getline(&info, &n, stdin);
    fprintf(stderr, "WHEELS_DIR:%f\n", direction);
}

void set_thrust(double thrust)
{
    char *info = NULL;
    size_t n = 0;

    if (thrust > 1)
        thrust = 1;
    if (thrust < -1)
        thrust = -1;
    fprintf(stderr, "car_forward:%f\n", thrust);
    printf("CAR_FORWARD:%f\n", thrust);
    fflush(stdout);
    getline(&info, &n, stdin);
    free(info);
}

/*
** EPITECH PROJECT, 2023
** B-AIA-200-MPL-2-1-n4s-guillaume1.tran
** File description:
** calcul_direction
*/

#include "../include/my.h"

#define MY_COEFF 1.0

void algo(n4s_t *n4s)
{
    double speed = 10;
    double direction = 0;
    double middle = get_rayat(n4s, 15);
    double left = get_rayat(n4s, 0);
    double right = get_rayat(n4s, 29);
    double delta = left - right;

    if (middle != 0) {
        if (delta > 0) {
            direction = (pow((0.2 / middle), 2) + 20 / middle) * 5;
        }
        if (delta < 0) {
            direction =  -(pow((0.2 / middle), 2) + 20 / middle) * 5;
        }
    }
    if (direction == 0) {
        direction = 0.0000001;
    }
    if (middle < 500) {
        speed = 0.021 / fabs(direction) + 0.0002 * middle + 0.21;
    } else {
        speed = 0.001 * middle + 0.8;
    }
    if (get_raymax(n4s)[0] > 13 && get_raymax(n4s)[0] < 17) {
        direction = 0;
    }
    for (int i = 0; n4s->angle[i]; i++) {
        if (*n4s->angle[i] == 0) {
            speed = -1;
            direction = 0;
        }
    }
    n4s->speed = speed;
    n4s->direction = direction;
}

void calcul_thrust(n4s_t *n4s)
{
    int middle = 0;
    float thrust = 0.0;
    char *info = NULL;
    size_t n = 0;
    if (n4s->angle[15] == NULL)
        return;
    middle = atoi(n4s->angle[15]);
    thrust = 1;
    if (middle < 400) {
        fprintf(stderr, "me : CAR_BACKWARDS:1\n");

        printf("CAR_BACKWARDS:1\n");
        fflush(stdout);
        getline(&info, &n, stdin);
        return;
    }
    fprintf(stderr, "me : CAR_FORWARD:%f\n", thrust);
    printf("CAR_FORWARD:%f\n", thrust);
    fflush(stdout);
    getline(&info, &n, stdin);
}

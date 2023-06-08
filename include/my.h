/*
** EPITECH PROJECT, 2023
** include
** File description:
** my
*/

#pragma once

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <math.h>
#include <stddef.h>

typedef struct n4s_s {
    char **tab;
    float **angle;
    double direction;
    double speed;
} n4s_t;

char ** split(char *text, char c);
float **get_angle(char **tab);
n4s_t *init_n4s(void);
int get_info(n4s_t *n4s);
void update(n4s_t *n4s);
void set_direction(float direction);
float *get_raymax(n4s_t *n4s);
void algo(n4s_t *n4s);
double get_rayat(n4s_t *n4s, int i);
void set_thrust(double thrust);
int my_array_len(char **array);

/*
** EPITECH PROJECT, 2021
** B-AIA-200-PAR-2-1-n4s-gilbert.badiabo
** File description:
** control_car
*/

#include "n4s.h"

void exec_command(char *cmd, char *value, float sign)
{
    my_putstr(cmd);
    if (sign < 0)
        my_putchar('-');
    my_putstr(value);
    my_putchar('\n');
}

char *set_speed(float middle)
{
    char *res = NULL;

    if (middle >= 2000)
        res = SPEED_6;
    else if (middle >= 1500)
        res = SPEED_5;
    else if (middle >= 1000)
        res = SPEED_4;
    else if (middle >= 600)
        res = SPEED_3;
    else if (middle >= 400)
        res = SPEED_2;
    else
        res = SPEED_1;
    return res;
}

char *set_direction(float middle)
{
    char *res = NULL;

    if (middle >= 1500)
        res = WDIR_1;
    else if (middle >= 1000)
        res = WDIR_2;
    else if (middle >= 600)
        res = WDIR_3;
    else if (middle >= 400)
        res = WDIR_4;
    else if (middle >= 200)
        res = WDIR_5;
    else
        res = WDIR_6;
    return res;
}

void manage_car(char **infos)
{
    float middle = atof(infos[MIDDLE]);
    float right = atof(infos[RIGHT]);
    float left = atof(infos[LEFT]);
    char *speed = set_speed(middle);
    char *dir = set_direction(middle);
    char *line = NULL;
    float sign = left - right;
    size_t size = 0;

    exec_command(C_SPEED, speed, 0);
    getline(&line, &size, stdin);
    exec_command(C_DIR, dir, sign);
    getline(&line, &size, stdin);
}
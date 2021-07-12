/*
** EPITECH PROJECT, 2020
** B-AIA-200-PAR-2-1-n4s-gilbert.badiabo
** File description:
** n4s.h
*/

#ifndef N4S_H_
#define N4S_H_

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <dirent.h>
#include <sys/types.h>
#include <time.h>

const char *START_S = "START_SIMULATION\n";
#define STOP_S      "STOP_SIMULATION\n"

#define FORWARD     "CAR_FORWARD:0.5\n"
#define GET_LID     "GET_INFO_LIDAR\n"
#define GET_SPEED   "GET_CURRENT_SPEED\n"
#define STOP        "CAR_FORWARD:0\n"
#define C_DIR		"WHEELS_DIR:"
#define C_SPEED		"CAR_FORWARD:"

#define MIDDLE      18
#define RIGHT       34
#define LEFT        3

# define SPEED_1	"0.1"
# define SPEED_2	"0.2"
# define SPEED_3	"0.4"
# define SPEED_4	"0.6"
# define SPEED_5	"0.8"
# define SPEED_6	"1"

# define WDIR_1		"0.005"
# define WDIR_2		"0.05"
# define WDIR_3		"0.1"
# define WDIR_4		"0.2"
# define WDIR_5		"0.3"
# define WDIR_6		"0.4"

static const int true = 1;

void start(void);
void my_putstr(char const *str);
char **str_to_arr(char *str, char c);
void free_arr(char **arr);
void manage_car(char **infos);
void my_putchar(char c);

#endif

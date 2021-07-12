/*
** EPITECH PROJECT, 2020
** B-AIA-200-PAR-2-1-n4s-gilbert.badiabo
** File description:
** start.c
*/

#include "n4s.h"
#include <signal.h>

void check_finish(void)
{
    char *line = NULL;
    char **infos = NULL;
    size_t size = 0;
    float speed = 0;

    my_putstr(GET_SPEED);
	getline(&line, &size, stdin);
    infos = str_to_arr(line, ':');
    speed = atof(infos[3]);
    while (speed > 0) {
        my_putstr(GET_SPEED);
	    getline(&line, &size, stdin);
        infos = str_to_arr(line, ':');
        speed = atof(infos[3]);
    }
}

int track_finished(char **infos)
{
    if (strcmp(infos[35], "Track Cleared") == 0)
        return 1;
    return 0;
}

char *get_info(char *cmd)
{
    char *line = NULL;
	size_t size = 0;
    int check = 0;

    my_putstr(START_S);
	check = getline(&line, &size, stdin);
    if (check )
    {
        /* code */
    }
    
    return line;
}

void start(void)
{
    char *line = NULL;
    char **infos = NULL;
	size_t size = 0;

    line = get_info(START_S);
	my_putstr(FORWARD);
	getline(&line, &size, stdin);
    while (track_finished(infos) == true) {
        my_putstr(GET_LID);
		getline(&line, &size, stdin);
        infos = str_to_arr(line, ':');
        manage_car(infos);
        if (track_finished(infos) == true) {
            my_putstr(STOP);
    		getline(&line, &size, stdin);
            break;
        }
    }
    check_finish();
    my_putstr(STOP_S);
}
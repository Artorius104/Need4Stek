/*
** EPITECH PROJECT, 2020
** B-CPE-100-PAR-1-3-cpoolday04-gilbert.badiabo
** File description:
** my_putstr.c
*/

#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}

void my_putstr(char const *str)
{
    int i = 0;

    while (str[i])
        my_putchar(str[i++]);
}
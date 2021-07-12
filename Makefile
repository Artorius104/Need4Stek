##
## EPITECH PROJECT, 2020
## B-AIA-200-PAR-2-1-n4s-gilbert.badiabo
## File description:
## Makefile
##

PATH_SRC	=	src/

CPPFLAGS = -I./include

CFLAGS	=	-Wall -Wextra -g3

CC = gcc

RM		=	rm -f

NAME	=	ai

SRC_MAIN	=	$(PATH_SRC)main.c	\

SRC		=	$(PATH_SRC)start.c	\
			$(PATH_SRC)utils.c	\
			$(PATH_SRC)str_to_arr.c	\
			$(PATH_SRC)control_car.c	\

OBJ	=	$(SRC:.c=.o) $(SRC_MAIN:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJ)
		$(CC) $(OBJ) -o $(NAME)

clean:
		$(RM) $(OBJ)

fclean: clean
		$(RM) $(NAME)

re:		fclean all

debug:
		$(CFLAGS) += -ggdb

debug: all

.PHONY: clean fclean re all debug
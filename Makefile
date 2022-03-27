
# -*- Makefile -*-

SRCS =	main.c \
		error_handling.c \
		ft_atoi.c \
		start.c \
		helpers.c \
		input.c \
		checks.c


OBJS = $(SRCS:.c=.o)

CC = gcc
RM = rm -f
CFLAGS ?= -Wall -Wextra

NAME = viergewinnt

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) -o $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS) $(BONUS_O)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean flcean re bonus rebonus
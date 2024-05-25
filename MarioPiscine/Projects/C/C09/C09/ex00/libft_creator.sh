#!/bin/sh

rm -f libft.a
gcc -Wall -Wextra -Werror -c ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c
ar rc libft.a *.o
rm -f *.o

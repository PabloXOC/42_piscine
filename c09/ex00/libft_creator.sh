#!/bin/sh

# Compilar en objetos
gcc -Wall -Wextra -Werror -c ft_putchar.c
gcc -Wall -Wextra -Werror -c ft_swap.c
gcc -Wall -Wextra -Werror -c ft_putstr.c
gcc -Wall -Wextra -Werror -c ft_strlen.c
gcc -Wall -Wextra -Werror -c ft_strcmp.c

# Biblioteca libft.a con todos los objetos
#r -> reemplazar
#c -> crear
ar rc libft.a ft_putchar.o ft_swap.o ft_putstr.o ft_strlen.o ft_strcmp.o

# Indexa la biblioteca
ranlib libft.a

# Borrar objetos
#f -> forzar
rm -f ft_putchar.o ft_swap.o ft_putstr.o ft_strlen.o ft_strcmp.o

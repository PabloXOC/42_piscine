#Our Makefile for BSQ

#Compile
CC = cc

CFLAGS = -Wall -Wextra -Werror

#List of .c files
SRC = ft_make_malloc.c ft_atoi.c ft_mark_in_sqr.c main.c ft_dump.c \
		ft_num_lines.c malloc_care.c ft_errors.c ft_tot_len.c \
		ft_find_sqr.c ft_write_map.c read_maps.c ft_fit_stuff_4_norminette.c \

OBJS = $(SRC:.c=.o)

#Executable file name
NAME = bsq

#Rules
all: $(NAME)

$(NAME): $(OBJS)
		$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

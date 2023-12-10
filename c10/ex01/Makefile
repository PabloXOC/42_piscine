#Compile
CC = cc
CFLAGS = -Wall -Wextra -Werror

#Files
SRCS = ft_cat.c
OBJS = $(SRCS:.c=.o)

#Executable
NAME = ft_cat

#rules

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(SRCS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
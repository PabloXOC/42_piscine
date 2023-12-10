# Directorios
SRCS_DIR = srcs
INCS_DIR = includes

# Archivos fuente y objetos
SRCS = ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c
OBJS = $(addprefix $(SRCS_DIR)/, $(SRCS:.c=.o))

# Nombre de la librería
NAME = libft.a

# Compilador y opciones
CC = cc
CFLAGS = -Wall -Wextra -Werror

# Reglas
.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJS)
	@echo "Compiling $(NAME)..."
	@ar rcs $(NAME) $(OBJS)
	@echo "$(NAME) compilada exitosamente."

#$(SRCS_DIR)/%.o: $(SRCS_DIR)/%.c
.c.o:
	@echo "Compiling $<..."
	@$(CC) $(CFLAGS) -I $(INCS_DIR) -c $< -o $@

clean:
	@echo "Clean object files..."
	@rm -f $(OBJS)

fclean: clean
	@echo "Cleaning $(NAME)..."
	@rm -f $(NAME)

re: fclean all

# Asegura que no se compilen archivos inútilmente
#$(OBJS): | $(SRCS_DIR)

$(SRCS_DIR):
	@mkdir -p $(SRCS_DIR)

# Garantiza que 'make' sea equivalente a 'make all'
.DEFAULT_GOAL := all

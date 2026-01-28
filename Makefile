NAME := so_long

CC := cc
CFLAGS := -Wall -Wextra -Werror -g

HEADER := so_long.h

LIBFT := src/Libft/libft.a

SOURCES := ft_so_long.c ft_error_management.c ft_create_map.c ft_tabdup.c

SRC_DIR := src/
SRC := $(addprefix $(SRC_DIR), $(SOURCES))

OBJ_DIR := obj/
OBJ := $(addprefix $(OBJ_DIR), $(SOURCES:.c=.o))

.PHONY : all clean fclean re

all : $(NAME)

$(NAME) : $(OBJ_DIR) $(OBJ)
	$(MAKE) -C minilibx-linux/
	$(MAKE) -C src/Libft
	$(CC) $(CFLAGS) $(OBJ) $(LIBFT) -o $@

$(OBJ_DIR) :
	mkdir -p $(OBJ_DIR)

$(OBJ_DIR)%.o : $(SRC_DIR)%.c
	$(CC) $(CFLAGS) -I $(HEADER) -c $< -o $@

clean :
	rm -rf $(OBJ)
	rm -rf $(OBJ_DIR)
	$(MAKE) -C minilibx-linux/ -B clean
	$(MAKE) -C src/Libft -B clean

fclean :
	rm -rf $(NAME)
	$(MAKE) -C minilibx-linux/ -B clean
	$(MAKE) -C src/Libft -B fclean

re : fclean all

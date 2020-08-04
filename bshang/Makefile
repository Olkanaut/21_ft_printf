# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bshang <bshangstudent.21-school.ru>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/07/10 21:13:16 by bshang            #+#    #+#              #
#    Updated: 2020/07/21 13:49:28 by bshang           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

LIBFT_DIR = ./libft/
LIBFT = $(LIBFT_DIR)libft.a

LIBFT_SRC_LIST = ft_strlen.c ft_strlcpy.c ft_strchr.c ft_atoi.c ft_toupper.c \
ft_itoa.c ft_itoa_base.c ft_putchar.c ft_putstr.c ft_substr.c ft_strdup.c
LIBFT_SRC = $(addprefix $(LIBFT_DIR), $(LIBFT_SRC_LIST))
LIBFT_OBJ_LIST = $(patsubst %.c, %.o, $(LIBFT_SRC_LIST))
LIBFT_OBJ = $(addprefix $(LIBFT_DIR), $(LIBFT_OBJ_LIST))

HEADERS_DIR = ./includes/
HEADERS_LIST = libftprintf.h
HEADERS = $(addprefix $(HEADERS_DIR), $(HEADERS_LIST))

SRC_DIR = ./src/
SRC_LIST = ft_printf.c parse_read.c proc_c.c proc_di.c proc_p.c proc_s.c proc_u_hex.c
SRC = $(addprefix $(SRC_DIR), $(SRC_LIST))

OBJ_DIR = ./obj/
OBJ_LIST = $(patsubst %.c, %.o, $(SRC_LIST))
OBJ = $(addprefix $(OBJ_DIR), $(OBJ_LIST))

MAKE = make -C
FLAGS = gcc -Wall -Werror -Wextra

INCLUDES = -I $(HEADERS_DIR) -I $(LIBFT_DIR)

.PHONY: all clean fclean re main mainclean

all: $(NAME)

$(NAME): $(LIBFT) $(LIBFT_OBJ) $(OBJ_DIR) $(OBJ)
	ar -rcs $(NAME) $(OBJ) $(LIBFT_OBJ)
	echo "Danone :) $(NAME) created"

$(OBJ_DIR):
	mkdir $(OBJ_DIR)
	echo "$(OBJ_DIR) is created"

$(OBJ_DIR)%.o: $(SRC_DIR)%.c $(HEADERS) $(LIBFT)
	$(FLAGS) $(INCLUDES) -c $< -o $@

$(LIBFT): $(LIBFT_OBJ)
	$(MAKE) $(LIBFT_DIR)
	echo "$(LIBFT) is created"

clean:
	$(MAKE) $(LIBFT_DIR) clean
	echo "$(LIBFT_DIR)*.o is cleaned"
	rm -rf $(OBJ_DIR)
	echo "$(OBJ_DIR) is cleaned"

fclean: clean mainclean
	$(MAKE) $(LIBFT_DIR) fclean
	echo "$(LIBFT) is cleaned"
	rm -f $(NAME)
	echo "$(NAME) is cleaned"

re: fclean all

main: re
	$(FLAGS) mains/main.c libftprintf.a -I libftprintf.h
	./a.out 
	# | cat -e

mainclean:
	# rm -f main.o
	rm -f a.out
	echo "main cleaned"

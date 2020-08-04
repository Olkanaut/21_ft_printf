SRC = ft_strlen.c ft_strlcpy.c ft_strchr.c ft_atoi.c ft_toupper.c \
ft_itoa.c ft_itoa_base.c ft_putchar.c ft_putstr.c ft_substr.c ft_strdup.c
OBJ = $(SRC:.c=.o)
BONUS_OBJ = $(BONUS_SRC:.c=.o)
NAME = libft.a
INCLUDES = $(NAME:.a=.h)

COMPILE = gcc -c -Wall -Werror -Wextra
.PHONY: all clean fclean re bonus

all: $(NAME)

$(NAME): $(OBJ) $(INCLUDES)
	@ar -rcs $(NAME) $(OBJ)
	@echo "$(NAME) compiled"

so:
	@gcc -shared -o libft.so -fPIC $(SRC) $(BONUS_SRC)

%.o:	%c $(INCLUDES)
	@$(COMPILE) $< -o $@

clean:
	@rm -rf *.o
	@echo "Object files deleted"

fclean: clean
	@rm -rf $(NAME)
	@echo "$(NAME) deleted"

re:	fclean all

bonus: $(OBJ) $(BONUS_OBJ) $(INCLUDES)
	@ar -rcs $(NAME) $(BONUS_OBJ) $(OBJ)

SRCS = ft_itoa.c ft_putchar.c ft_putstr.c ft_printf_print_numbers.c ft_printf_print_unsigned.c ft_printf.c ft_convert_hexa.c
OBJ = $(SRCS:.c=.o)
FLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a
CC = cc

all: $(NAME)

$(NAME) : $(OBJ)
	ar -crs $(NAME) $(OBJ)
$(OBJ) : $(SRCS)
	$(CC) -c $(FLAGS) -include printf.h $(SRCS)

clean:
	rm -rf $(OBJ)

fclean: clean;
	rm -rf $(NAME)

re: fclean all;
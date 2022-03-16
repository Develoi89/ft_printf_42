NAME	=	libftprintf.a
SRC		=	ft_printf.c \
			src/ft_putchar.c \
			src/ft_putstr.c \
			src/ft_putdoble.c \
			src/ft_puthex.c \
			src/ft_putposnbr.c

OBJ		= $(SRC:%.c=%.o)
CFLAGS	= -Wall -Wextra -Werror
CC		= gcc

$(NAME): $(OBJ)
	make -C libft 
	mv libft/libft.a libftprintf.a
	ar rc $(NAME) $(OBJ) 

.PHONY : clean
clean:
	rm -f $(OBJ) src/*.o

.PHONY : fclean
fclean: clean
	make fclean -C libft
	rm -f $(NAME) a.out libft.a

.PHONY : all
all: $(NAME)

.PHONY : re
re: fclean all

.PHONY : prove
prove:
	CC $(SRC) main.c libft/*.c && ./a.out
	 	
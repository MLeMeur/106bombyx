##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## make good things
##

SRC	=	lib/my/my_isnumber.c	\
		lib/my/my_getnbr.c	\
		lib/my/my_putchar.c	\
		lib/my/my_put_nbr.c	\
		lib/my/my_putstr.c	\
		lib/my/my_puterror.c	\
		lib/my/my_put_word_array.c	\
		lib/my/my_strlen.c	\
		lib/my/my_intlen.c	\
		lib/my/my_word_array_len.c	\
		lib/my/my_word_array_copy.c	\
		lib/my/malloc_safe.c	\
		lib/my/my_str_copy.c	\
		lib/my/my_str_cmp.c	\
		lib/my/my_str_cat.c	\
		lib/my/my_str_to_word_array.c	\
		lib/my/get_next_line.c	\
		lib/my/get.c	\
		lib/my/check.c

OBJ	=	$(SRC:.c=.o)

PROG	=	main.c

BIN	=	106bombyx

NAME	=	lib/my/libmy.a

CFLAGS	=	-lm -I include\

all:	$(NAME) compil

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)

compil:
	gcc -o $(BIN) $(PROG) $(NAME) $(CFLAGS)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	rm -f $(BIN)

re: fclean all

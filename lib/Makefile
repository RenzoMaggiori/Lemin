##
## EPITECH PROJECT, 2022
## CPool_10
## File description:
## Makefile
##

LIB	=	my_compute_power_rec.c		\
		my_compute_square_root.c	\
		my_find_prime_sup.c 		\
		my_getnbr.c 				\
		my_is_prime.c				\
		my_isneg.c 					\
		my_put_nbr.c 				\
		my_putchar.c 				\
		my_putstr.c 				\
		my_revstr.c 				\
		my_showstr.c 				\
		my_sort_int_array.c 		\
		my_str_isalpha.c 			\
		my_str_islower.c			\
		my_str_isnum.c 				\
		my_str_isprintable.c 		\
		my_str_isupper.c 			\
		my_str_to_array.c 			\
		my_str_to_array_num.c		\
		my_strcapitalize.c 			\
		my_strcat.c 				\
		my_strcmp.c 				\
		my_strcpy.c 				\
		my_strdup.c 				\
		my_strlen.c 				\
		my_strlowcase.c 			\
		my_strncat.c 				\
		my_strncmp.c 				\
		my_strncpy.c 				\
		my_strstr.c 				\
		my_strupcase.c 				\
		my_swap.c 					\
		my_strdup_from.c 			\
		my_int_len.c 				\
		my_nbrlen.c 				\
		my_int_to_str.c 			\
		open_file.c 				\
		my_arr_len.c 				\
		my_arr_to_str.c				\
		my_malloc.c					\
		free_arr.c					\
		my_str_isalphanum.c			\
		my_realloc_arr.c			\
		count_char.c

PRINTF = 	my_printf.c 		\
			get_flags.c 		\
			create_arg.c 		\
			fl_b.c 				\
			fl_c.c 				\
			fl_d.c 				\
			fl_f.c 				\
			fl_n.c 				\
			fl_o.c 				\
			fl_p.c 				\
			fl_prc.c 			\
			fl_s.c 				\
			fl_ss.c 			\
			fl_u.c 				\
			fl_x.c 				\
			fl_xx.c

SRC = $(LIB) $(addprefix my_printf/, $(PRINTF))

OBJ	=	$(SRC:.c=.o)

CC = gcc

CFLAGS = -pedantic -w -Wall -Wextra -Wpedantic -Wno-long-long -Werror -I .

NAME	=	libmy.a

all: 	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)
	cp my.h ../include/

clean:
	rm -f $(OBJ)
	rm -f *~

fclean:	clean
	rm -f $(NAME)

re:	fclean all
	$(MAKE) clean

##
## EPITECH PROJECT, 2023
## B-CPE-101-LYN-1-1-myprintf-alexis.drago-beltran
## File description:
## Makefile
##

SRC = lib/my/is_smaller.c \
	lib/my/my_compute_power_rec.c \
	lib/my/my_compute_square_root.c \
	lib/my/my_find_prime_sup.c \
	lib/my/my_getnbr.c \
	lib/my/my_intlen.c \
	lib/my/my_is_prime.c \
	lib/my/my_isletter_islow.c \
	lib/my/my_isletter_isupper.c \
	lib/my/my_isletter.c \
	lib/my/my_isneg.c \
	lib/my/my_put_nbr.c \
	lib/my/my_put_float.c \
	lib/my/my_putchar.c \
	lib/my/my_putnbr_base.c \
	lib/my/my_putstr.c \
	lib/my/my_revstr.c \
	lib/my/my_show_word_array.c \
	lib/my/my_showmem.c \
	lib/my/my_showstr.c \
	lib/my/my_sort_int_array.c \
	lib/my/my_sqrt.c \
	lib/my/my_str_isalpha.c \
	lib/my/my_str_islower.c \
	lib/my/my_str_isnum.c \
	lib/my/my_str_isprintable.c \
	lib/my/my_str_isupper.c \
	lib/my/my_str_to_word_array.c \
	lib/my/my_strcapitalize.c \
	lib/my/my_strcat.c \
	lib/my/my_strcmp.c \
	lib/my/my_strcpy.c \
	lib/my/my_strdup.c \
	lib/my/my_strlen.c \
	lib/my/my_strlowcase.c \
	lib/my/my_strncat.c \
	lib/my/my_strncmp.c \
	lib/my/my_strncpy.c \
	lib/my/my_strstr.c \
	lib/my/my_strupcase.c \
	lib/my/my_swap.c \
	lib/my/my_swap_str.c \
	lib/my/search.c \
	lib/my/my_itoa.c \
	lib/my/my_isnum.c \
	lib/my/my_putnbr_base_long.c \
	src/print/print_char.c \
	src/print/print_num.c \
	src/syntax/isflags.c \
	src/syntax/priority.c \
	src/attribut/precision.c \
	src/attribut/width.c \
	src/attribut/flags.c\
	src/print/print_scientific.c \
	src/print/print_float.c \
	src/print/print_hexa.c \
	src/print/print_address.c \
	src/get/my_getnbr_base.c \
	src/my_printf.c \
	src/print/print_s.c \
	src/print/print_ll.c \

OBJ = ${SRC:.c=.o}
CFLAGS = -g3
NAME = libmy.a

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)


clean:
	rm -f ${OBJ}
fclean: clean
	rm -f ${NAME}
re: fclean all

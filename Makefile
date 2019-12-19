NAME = ft_printf.a

SRC = fonctions/conv_nothing.c fonctions/ft_exp.c fonctions/ft_strncpy.c fonctions/conv_string.c\
		fonctions/ft_get_lim.c fonctions/get_int_len.c fonctions/conv_char.c fonctions/conv_unsigned_dec.c\
		fonctions/ft_is_used_letter.c  fonctions/get_lim.c fonctions/conv_dec.c\
		fonctions/convert_unsigned_to_hex.c fonctions/ft_isdigit.c fonctions/printf.c\
		fonctions/conv_hexa_from_void.c   fonctions/define_conv_ptr.c fonctions/ft_rev_str.c fonctions/ret_type.c\
		fonctions/conv_maj_hex.c fonctions/exp.c fonctions/ft_strcpy.c\
		fonctions/conv_min_hex.c fonctions/exponential.c  fonctions/ft_strlen.c


OBJ = $(subst .c,.o,$(SRC))

CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME):
	gcc $(CFLAGS) -c $(SRC)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all re
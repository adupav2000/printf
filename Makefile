NAME = libftprintf.a

SRC = fonctions/conv_nothing.c fonctions/ft_exp.c fonctions/ft_strncpy.c fonctions/conv_string.c\
		fonctions/ft_get_lim.c fonctions/ft_get_int_len.c fonctions/conv_char.c fonctions/conv_unsigned_dec.c\
		fonctions/ft_is_used_letter.c fonctions/conv_dec.c\
		fonctions/convert_unsigned_to_hex.c fonctions/ft_isdigit.c fonctions/printf.c\
		fonctions/conv_hexa_from_void.c   fonctions/define_conv_ptr.c fonctions/ft_rev_str.c fonctions/ret_type.c\
		fonctions/conv_maj_hex.c fonctions/ft_strcpy.c\
		fonctions/conv_min_hex.c fonctions/ft_strlen.c\
		fonctions/ft_atoi.c fonctions/ft_bzero.c fonctions/ft_calloc.c\
		fonctions/ft_get_int_char_length.c\
		fonctions/ft_isalnum.c fonctions/ft_isalpha.c fonctions/ft_isascii.c\
		fonctions/ft_isdigit.c fonctions/ft_islower.c\
		fonctions/ft_isprint.c fonctions/ft_isupper.c fonctions/ft_itoa.c fonctions/ft_memdel.c\
		fonctions/ft_memccpy.c fonctions/ft_memchr.c fonctions/ft_memcmp.c\
		fonctions/ft_memcpy.c fonctions/ft_memmove.c\
		fonctions/ft_memset.c fonctions/ft_occure_in_set.c fonctions/ft_putchar_fd.c\
		fonctions/ft_putendl_fd.c\
		fonctions/ft_putnbr_fd.c fonctions/ft_putstr_fd.c fonctions/ft_split.c\
		fonctions/ft_str_count_opt.c fonctions/ft_strchr.c\
		fonctions/ft_strdup.c fonctions/ft_strjoin.c fonctions/ft_strlcat.c\
		fonctions/ft_strlcpy.c fonctions/ft_strlen.c\
		fonctions/ft_strlenopt.c fonctions/ft_strmapi.c\
		fonctions/ft_strncmp.c fonctions/ft_strnstr.c fonctions/ft_strrchr.c\
		fonctions/ft_strtrim.c fonctions/ft_substr.c fonctions/ft_tolower.c\
		fonctions/ft_toupper.c fonctions/ft_isspace.c\
		fonctions/ft_strlenstropt.c fonctions/ft_strnew.c fonctions/conv_from_base.c\
		fonctions/ft_increment_til_text.c fonctions/ft_strcat.c\
		fonctions/ft_sign_before_dec.c fonctions/ft_get_len_conv_dec.c\
		fonctions/ft_get_lim_string_min.c fonctions/ft_get_lim_string_max.c\
		fonctions/ft_shift_char_in_string.c fonctions/ft_isprintf_flag.c

OBJ = conv_nothing.o ft_exp.o ft_strncpy.o conv_string.o\
		ft_get_lim.o ft_get_int_len.o conv_char.o conv_unsigned_dec.o\
		ft_is_used_letter.o conv_dec.o\
		convert_unsigned_to_hex.o ft_isdigit.o printf.o\
		conv_hexa_from_void.o   define_conv_ptr.o ft_rev_str.o ret_type.o\
		conv_maj_hex.o ft_strcpy.o\
		conv_min_hex.o ft_strlen.o\
		ft_atoi.o ft_bzero.o ft_calloc.o\
		ft_get_int_char_length.o\
		ft_isalnum.o ft_isalpha.o ft_isascii.o\
		ft_isdigit.o ft_islower.o\
		ft_isprint.o ft_isupper.o ft_itoa.o ft_memdel.o\
		ft_memccpy.o ft_memchr.o ft_memcmp.o\
		ft_memcpy.o ft_memmove.o\
		ft_memset.o ft_occure_in_set.o ft_putchar_fd.o\
		ft_putendl_fd.o\
		ft_putnbr_fd.o ft_putstr_fd.o ft_split.o\
		ft_str_count_opt.o ft_strchr.o\
		ft_strdup.o ft_strjoin.o ft_strlcat.o\
		ft_strlcpy.o ft_strlen.o\
		ft_strlenopt.o ft_strmapi.o\
		ft_strncmp.o ft_strnstr.o ft_strrchr.o\
		ft_strtrim.o ft_substr.o ft_tolower.o\
		ft_toupper.o ft_isspace.o\
		ft_strlenstropt.o ft_strnew.o conv_from_base.o\
		ft_increment_til_text.o ft_strcat.o ft_sign_before_dec.o\
		ft_get_len_conv_dec.o ft_get_lim_string_min.o ft_get_lim_string_max.o\
		ft_shift_char_in_string.o ft_isprintf_flag.o

# OBJ = $(subst .c,.o,$(SRC))

CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

# $(NAME):
# 	gcc $(CFLAGS) -c fonctions/ $(SRC)
# 	ar rc $(NAME) $(OBJ)
# 	ranlib $(NAME)
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

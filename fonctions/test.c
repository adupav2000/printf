/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 15:23:45 by adu-pavi          #+#    #+#             */
/*   Updated: 2020/02/08 11:16:18 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

  #include <string.h>
  #include <stdlib.h>
  #include <unistd.h>
  #include <stdio.h>

  #include "../libftprintf.h"
  
  #include "define_conv_ptr.c"
  #include "ft_isalpha.c"
  #include "ft_memcmp.c"
  #include "ft_putstr.c"
  #include "ft_strdel.c"
  #include "ft_strmap.c"
  #include "ft_strtrim.c"
  #include "conv_char.c"
  #include "ft_isascii.c"
  #include "ft_memcpy.c"
  #include "ft_putstr_fd.c"
  #include "ft_strdup.c"
  #include "ft_strmapi.c"
  #include "ft_substr.c"
  #include "conv_dec.c"
  #include "ft_isdigit.c"
  #include "ft_memdel.c"
  #include "ft_rev_str.c"
  #include "ft_strequ.c"
  #include "ft_strncat.c"
  #include "ft_tolower.c"
  #include "conv_from_base.c"
  #include "ft_atoi.c"
  #include "ft_islower.c"
  #include "ft_memmove.c"
  #include "ft_split.c"
  #include "ft_striter.c"
  #include "ft_strncmp.c"
  #include "ft_toupper.c"
  #include "conv_hexa_from_void.c"
  #include "ft_bzero.c"
  #include "ft_isprint.c"
  #include "ft_memset.c"
  #include "ft_str_count_opt.c"
  #include "ft_striteri.c"
  #include "ft_strncpy.c"
  #include "get_int_len.c"
  #include "conv_maj_hex.c"
  #include "ft_calloc.c"
  #include "ft_isspace.c"
  #include "ft_occure_in_set.c"
  #include "ft_strcat.c"
  #include "ft_strjoin.c"
  #include "ft_strnequ.c"

  #include "conv_min_hex.c"
  #include "ft_exp.c"
  #include "ft_isupper.c"
  #include "ft_putchar.c"
  #include "ft_strlcat.c"
  #include "ft_strchr.c"
  #include "ft_strnew.c"

  #include "conv_nothing.c"
  #include "ft_get_int_char_length.c"
  #include "ft_itoa.c"
  #include "ft_putchar_fd.c"
  #include "ft_strclr.c"
  #include "ft_strlcpy.c"
  #include "ft_strnlen.c"
  #include "ret_type.c"

  #include "conv_string.c"
  #include "ft_get_lim.c"
  #include "ft_memalloc.c"
  #include "ft_putendl.c"
  #include "ft_strcmp.c"
  #include "ft_strlen.c"
  #include "ft_strnstr.c"
 
  #include "conv_unsigned_dec.c"
  #include "ft_is_used_letter.c"
  #include "ft_memccpy.c"
  #include "ft_putendl_fd.c"
  #include "ft_strlenopt.c"
  #include "ft_strrchr.c"
  #include "ft_increment_til_text.c"
  #include "printf.c"
  #include "ft_sign_before_dec.c"
  #include "ft_get_len_conv_dec.c"
  #include "ft_get_lim_string_min.c"
  #include "ft_get_lim_string_max.c"
  #include "ft_shift_char_in_string.c"
  #include "ft_isprintf_flag.c"
  #include "ft_printfflag_has_min.c"
  #include "ft_printfflag_has_max.c"
  #include "ft_get_signs_before_dec.c"
  #include "ft_abs.c"
  #include "ft_sign_after_dec.c"

int main()
{
    int		a = -4;
	int		b = 0;
	char	c = 'a';
	int		d = 2147483647;
	int		e = -2147483648;
	int		f = 42;
	int		g = 25;
	int		h = 4200;
	int		i = 8;
	int		j = -12;
	int		k = 123456789;
	int		l = 0;
	int		m = -12345678;
	char	*n = "abcdefghijklmnop";
	char	*o = "-a";
	char	*p = "-12";
	char	*q = "0";
	char	*r = "%%";
	char	*s = "-2147483648";
	char	*t = "0x12345678";
	char	*u = "-0";

	// printf(" --- Return : %d\n", printf("Simple input test"));
  	// ft_printf(" --- Return : %d\n", ft_printf("Simple input test"));
  ft_printf("ft_printf : >%+12.5d<\n", j);
  printf("___printf : >%+12.5d<\n", j);
  // ft_printf("ft_printf : >%d<\n", k);
  // printf("___printf : >%d<\n", k);
  // ft_printf("ft_printf : >%d<\n", l);
  // printf("___printf : >%d<\n", l);
  // ft_printf("ft_printf : >%d<\n", m);
  // printf("___printf : >%d<\n", m);
  // ft_printf("ft_printf : >%s<\n", n);
  // printf("___printf : >%s<\n", n);
  // ft_printf("ft_printf : >%c<\n", c);
  // printf("___printf : >%c<\n", c);
  // ft_printf("ft_printf : >%d<\n", c);
  // printf("___printf : >%d<\n", c);
  // ft_printf("ft_printf : >%u<\n", j);
  // printf("___printf : >%u<\n", j);
  // ft_printf("ft_printf : >%x<\n", j);
  // printf("___printf : >%x<\n", j);
  // ft_printf("ft_printf : >%X\n<",j);
  // printf("___printf : >%X\n<",j);
}

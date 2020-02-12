/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 15:23:45 by adu-pavi          #+#    #+#             */
/*   Updated: 2020/02/12 12:42:18 by adu-pavi         ###   ########.fr       */
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
  #include "ft_handle_stars.c"
  #include "ft_jump_to_next_arg.c"
  #include "ft_get_lim_max_str.c"
  #include "ft_get_lim_min_str.c"

int main()
{
  printf("%d\n", 412);
  printf("%13.-32d\n", 412);
  printf("%13.0d\n", 412);
  return (0);
}
/*
  is min or max ppositive
  is min or max bigger than len

*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   define_conv_ptr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 20:11:09 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/12/29 11:34:44 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

void define_conv_ptr()
{
    ftab[0] = &conv_nothing;
    ftab[1] = &conv_dec;
    ftab[2] = &conv_unsigned_dec;
    ftab[3] = &conv_string;
    ftab[4] = &conv_char;
    ftab[5] = &conv_min_hex;
    ftab[6] = &conv_maj_hex;
    ftab[7] = &conv_hexa_from_void;
    // ft_len[0] = &ft_get_len_conv_nothing;
    ft_len[1] = &ft_get_len_conv_dec;
    // ft_len[2] = &ft_get_len_conv_unsigned_dec;
    // ft_len[3] = &ft_get_len_conv_string;
    // ft_len[4] = &ft_get_len_conv_char;
    // ft_len[5] = &ft_get_len_conv_min_hex;
    // ft_len[6] = &ft_get_len_conv_maj_hex;
    // ft_len[7] = &ft_get_len_conv_hexa_from_void;    
}
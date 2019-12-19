/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   define_conv_ptr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 20:11:09 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/12/19 15:53:47 by adu-pavi         ###   ########.fr       */
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
}
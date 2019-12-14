/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 15:23:45 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/12/14 17:35:40 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

#include "../libftprintf.h"
#include "ft_isdigit.c"
#include "ft_exp.c"
#include "ft_strlen.c"
#include "get_int_len.c"
#include "ft_strncpy.c"
#include "get_lim.c"
#include "conv_unsigned_dec.c"

int main()
{
    char *x = conv_unsigned_dec("%u", -55);
    printf("%u\n", (unsigned int)-123);
    printf("%X\n", 45);
    printf("%u\n", 4294967295);
}
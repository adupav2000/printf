/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 15:23:45 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/12/17 11:14:16 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

#include "../libftprintf.h"
// #include "ft_isdigit.c"
#include "ft_exp.c"
#include "ft_strlen.c"
// #include "get_int_len.c"
// #include "ft_strncpy.c"
#include "ft_strcpy.c"
// #include "get_lim.c"
// #include "conv_unsigned_dec.c"
// #include "conv_maj_hex.c"
#include "ft_rev_str.c"

int main()
{
    printf("test_1");
    char  *x = "asdf";
    printf("%s", ft_rev_str(x));
}
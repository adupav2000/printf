/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv_hexa_from_void.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 20:09:54 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/12/30 11:50:27 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

char *conv_hexa_from_void(char *str, void *content)
{
    char                *ret_val;
    char                *tmp;
    long unsigned int   stock;
    int                 i;

    ret_val = NULL;
    i = 0;
    stock = (long unsigned int)content;
    tmp = conv_from_base((unsigned int)content, "0123456789abcdef");
    if (!(ret_val = malloc(ft_strlen(tmp) * sizeof(char) + 5)))
        return NULL;
    ret_val[0] = '0';
    ret_val[1] = 'x';
    ft_strncpy(&ret_val[2], tmp, ft_strlen(str));
    return (ret_val);
}
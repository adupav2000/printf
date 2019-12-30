/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv_min_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 20:08:30 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/12/30 11:27:19 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

char *conv_min_hex(char *str, void *content)
{
    char                *ret_val;
    char                *tmp;
    long unsigned int   stock;
    int                 i;

    ret_val = NULL;
    i = 0;
    stock = (long unsigned int)content;
    tmp = conv_from_base((unsigned int)content, "0123456789abcdef");
    if (!(ret_val = malloc(ft_strlen(tmp) * sizeof(char) + 3)))
        return NULL;
    ft_strncpy(ret_val, tmp, ft_strlen(str));
    return (ret_val);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv_hexa_from_void.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 20:09:54 by adu-pavi          #+#    #+#             */
/*   Updated: 2020/01/27 05:18:57 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

char *conv_hexa_from_void(char *str, void *content)
{
    char        *ret_val;
    char        *tmp;
    long int    stock;
    int         i;

    ret_val = NULL;
    i = 0;
    tmp = conv_from_base((unsigned int)content, "0123456789abcdef");
    stock = (int)ft_strlen(tmp) > ft_get_lim_string_min(str) ?
        ft_strlen(tmp) : ft_get_lim_string_min(str);
    if (!(ret_val = ft_strnew(stock)))
        return (0);
    ret_val[0] = '0';
    ret_val[1] = 'x';
    ft_strlcpy(&ret_val[2], tmp, (ft_strlen((char *)content) + 1));
    stock = ft_get_lim_string_min(str);
    i = ft_strlen(ret_val);
    if (stock < 0 && i < -stock)
    {
        while (i < -stock)
            ret_val[i++] = ' ';
        ret_val[i] = '\0';
    }
    return (ret_val);
}
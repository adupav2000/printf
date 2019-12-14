/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv_hexa_from_void.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 20:09:54 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/12/14 17:23:32 by adu-pavi         ###   ########.fr       */
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
    tmp[0] = '0';
    tmp[0] = 'x';
    stock = (long unsigned int)content;
    if (!(ret_val = malloc(ft_strlen(tmp) * sizeof(char) + 1)))
        return NULL;
    while ()
    {
            
    }
    ft_strncpy(ret_val, tmp, get_lim(str));
    return (ret_val);
}

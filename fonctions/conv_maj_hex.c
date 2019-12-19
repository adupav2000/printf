/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv_maj_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 20:09:11 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/12/17 10:36:49 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

char *conv_maj_hex(char *str, void *content)
{
    char *ret_val;
    char *tmp;
    char *base;
    unsigned int content_as_u_i;
    int i;

    base = "0123456789ABCDEF";
    content_as_u_i = (unsigned int)content;
    i = 0;
    while (content_as_u_i != 0)
    {
        tmp[i] = content_as_u_i%16;
        content_as_u_i = content_as_u_i/16;
        i++;
    }
    tmp[i] = '\0';
    ret_val = NULL;
    if (!(ret_val = malloc(ft_strlen(tmp) * sizeof(char))))
        return NULL;
    ft_strcpy(ret_val, tmp);
    return (ret_val);
}
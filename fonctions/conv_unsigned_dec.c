/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv_unsigned_dec.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 20:05:48 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/11/29 20:06:00 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

char *conv_unsigned_dec(char *str, void *content)
{
    char *ret_val;
    char *tmp;

    ret_val = NULL;
    if (!(ret_val = malloc(ft_strlen(tmp) * sizeof(char))))
        return NULL;
    ft_strcpy(ret_val, tmp);
    return (ret_val);
}
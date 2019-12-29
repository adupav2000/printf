/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv_char.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 20:07:57 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/12/27 14:04:21 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

char *conv_char(char *str, void *content)
{
    (void)str;
    char *ret_val;

    ret_val = NULL;
    if (!(ret_val = ft_strnew(2)))
        return NULL;
    ret_val[0] = (char)content;
    ret_val[1] = '\0';
    return (ret_val);
}
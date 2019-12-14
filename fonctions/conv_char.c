/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv_char.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 20:07:57 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/12/14 16:58:20 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

char *conv_char(char *str, void *content)
{
    (void)str;
    char *ret_val;
    char *tmp;

    ret_val = NULL;
    if (!(ret_val = malloc(2)))
        return NULL;
    tmp[0] = (char)content;
    tmp[1] = '\0';
    ft_strcpy(ret_val, tmp);
    return (ret_val);
}
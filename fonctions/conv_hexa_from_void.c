/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv_hexa_from_void.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 20:09:54 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/11/29 20:10:00 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

char *conv_hexa_from_void(char *str, void *content)
{
    char *ret_val;
    char *tmp;

    ret_val = NULL;
    if (!(ret_val = malloc(ft_strlen(tmp) * sizeof(char))))
        return NULL;
    ft_strcpy(ret_val, tmp);
    return (ret_val);
}

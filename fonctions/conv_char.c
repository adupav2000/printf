/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv_char.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 20:07:57 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/11/29 20:08:03 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

char *conv_char(char *str, void *content)
{
    char *ret_val;
    char *tmp;

    ret_val = NULL;
    if (!(ret_val = malloc(ft_strlen(tmp) * sizeof(char))))
        return NULL;
    ft_strcpy(ret_val, tmp);
    return (ret_val);
}
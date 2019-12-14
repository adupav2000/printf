/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv_min_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 20:08:30 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/12/13 12:33:50 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

char *conv_min_hex(char *str, void *content)
{
    char *ret_val;
    char *tmp;

    ret_val = '\0';
    if (!(ret_val = malloc(ft_strlen(tmp) * sizeof(char))))
        return (NULL);
    ft_strcpy(ret_val, tmp);
    return (ret_val);
}
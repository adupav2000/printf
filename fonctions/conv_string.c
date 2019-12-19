/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv_string.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 20:07:28 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/12/19 15:51:01 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

char *conv_string(char *str, void *content)
{
    char *ret_val;

    ret_val = 0;
    if (!(ret_val = malloc(ft_strlen((char *)content) * sizeof(char) + 1)))
        return 0;
    ft_strncpy(ret_val, content, get_lim(str));
    return (ret_val);
}
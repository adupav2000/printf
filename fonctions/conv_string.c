/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv_string.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 20:07:28 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/12/30 12:43:58 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

char *conv_string(char *str, void *content)
{
    char *ret_val;
    int i;
    int min;
    int max;

    i = 0;
    if (ft_get_lim_string_min(str) > ft_get_lim_string_max(str))
    {
        min = ft_get_lim_string_min(str);
        max = ft_get_lim_string_max(str);
        ret_val = ft_strnew(min);
        while (i < (min - max))
            ret_val[i++] = ' ';
        ft_strncpy(&ret_val[i], (char *)content, max);
        return (ret_val);
    }
    if (ft_get_lim_string_min(str) <= ft_get_lim_string_max(str) && 
        (int)ft_strlen((char *)content) >= ft_get_lim_string_min(str))
    {
        max = ft_get_lim_string_max(str) > (int)ft_strlen((char *)content) ? 
            ft_strlen((char *)content) : ft_get_lim_string_max(str);
        ret_val = ft_strnew(max);
        ft_strncpy(ret_val, (char *)content, max);
        return (ret_val);
    }
    if (ft_get_lim_string_min(str) <= ft_get_lim_string_max(str) && 
        (int)ft_strlen((char *)content) < ft_get_lim_string_min(str))
    {
        max = ft_strlen((char *)content);
        min = ft_get_lim_string_min(str);
        ret_val = ft_strnew(min);
        while (i < (min - max))
            ret_val[i++] = ' ';
        ft_strncpy(&ret_val[i], (char *)content, (max - min));
        return (ret_val);
    }
    return (0);
}
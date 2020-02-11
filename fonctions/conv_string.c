/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv_string.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 20:07:28 by adu-pavi          #+#    #+#             */
/*   Updated: 2020/02/11 10:23:05 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

char    *conv_string_meth_1(char *str, void *content)
{
    char *ret_val;
    unsigned int i;
    int min;
    int max;

    ret_val = 0;
    i = 0;
    min = ft_get_lim_string_min(str);
    max = ft_get_lim_string_max(str);
    if (min <= max)
    {
        if ((int)ft_strlen((char *)content) > min)
        {
            if (!(ret_val = ft_strnew((int)ft_strlen((char *)content) + 1)))
                return (0);
            ft_strlcpy(ret_val,
                (char *)content,
                ((int)ft_strlen((char *)content) + 1));
            return (ret_val);
        }
    }
    if (min > max)
    {
        if ((int)ft_strlen((char *)content) >= max)
        {
            if (!(ret_val = ft_strnew(min + (min - max))))
                return (0);
            while ((int)i < min)
                ret_val[i++] = ' ';
            ft_strlcat(ret_val, (char *)content, (min - max));
            return (ret_val);
        }
        if ((int)ft_strlen((char *)content) < max)
        {
            if (!(ret_val = 
            ft_strnew(min + (min - (int)ft_strlen((char *)content) + 1))))
                return (0);
            while ((int)i <= min)
                ret_val[i++] = ' ';
            ft_strlcat(ret_val, (char *)content,
                (min - (int)ft_strlen((char *)content) + 1));
            return (ret_val);
        }
    }
    return (0);
}

char    *conv_string_meth_2(char *str, void *content)
{
    char *ret_val;
    unsigned int i;
    int min;

    (void)content;
    ret_val = 0;
    i = 0;
    min = ft_get_lim_string_min(str);
    if (min < 0)
        min = -min;
    if (!(ret_val = ft_strnew(min)))
        return (0);
    while ((int)i <= min)
        ret_val[i++] = ' ';
    ret_val[i] = 0;
    return (ret_val);
    
}

char    *conv_string_meth_3(char *str, void *content)
{
    char *ret_val;
    int min;
    int max;
    unsigned int i;

    ret_val = 0;
    i = 0;
    min = ft_get_lim_string_min(str);
    max = ft_get_lim_string_max(str);
    if (-min >= max)
    {
        if (!(ret_val = ft_strnew(-min)))
            return (0);
        while ((int)i <= -min)
            ret_val[i++] = ' ';
        ret_val[i] = '\0';
        return (ret_val);
    }
    if (-min < max && (int)ft_strlen((char *)content) < -min)
    {
        i = (int)ft_strlen((char *)content);
        if (!(ret_val = ft_strnew(-min)))
            return (0);
        strlcpy(ret_val, (char *)content, (i + 1));
        i++;
        while ((int)i <= -min)
            ret_val[i++] = ' ';
        ret_val[i] = '\0';
        return (ret_val);
    }
    if (-min < max && (int)ft_strlen((char *)content) > -min)
    {
        i = (int)ft_strlen((char *)content);
        if (!(ret_val = ft_strnew(i)))
            return (0);
        strlcpy(ret_val, (char *)content, (i + 1));
        ret_val[i] = '\0';
        return (ret_val);
    }
    return (0);
}

char    *conv_string_meth_4(char *str, void *content, int opt)
{
    char    *ret_val;
    int     max;
    int     i;

    ret_val = 0;
    max = 0;
    i = 0;
    if (opt == 1)
    {
        if (!(ret_val = ft_strnew((int)ft_strlen((char *)content))))
        return (0);
        strlcpy(ret_val, (char *)content, 
            (int)ft_strlen((char *)content) + 1);
    }
    else if (opt == 2)
    {
        max = ft_get_lim_string_max(str);
        if (!(ret_val = ft_strnew(-max)))
            return (0);
        while (i < -max)
            ret_val[i++] = ' ';
    }
    return (ret_val);
}

char    *conv_string(char *str, void *content)
{
    int i;
    int min;
    int max;

    i = 0;
    min = 0;
    max = 0;
    if (!(content))
    {
        if (!(content = ft_strnew((int)ft_strlen("(null)"))))
            return (0);
        ft_strlcpy(content, "(null)", (int)ft_strlen("(null)"));
    }
    if (!ft_printfflag_has_min(str) && !ft_printfflag_has_min(str))
        return (conv_string_meth_4(str, content, 1));
    if (ft_printfflag_has_max(str) && ft_get_lim_string_max(str) < 0)
        return (conv_string_meth_4(str, content, 2));
    if (ft_printfflag_has_min(str) && ft_printfflag_has_min(str) &&
        ft_get_lim_string_max(str) > 0 && ft_get_lim_string_min(str) > 0)
        return (conv_string_meth_1(str, content));
    if (ft_printfflag_has_min(str) && !(ft_printfflag_has_max(str)))
        return (conv_string_meth_2(str, content));
    if (ft_printfflag_has_min(str) && ft_printfflag_has_max(str) && 
       ft_get_lim_string_min(str) < 0 && ft_get_lim_string_max(str) > 0)
        return (conv_string_meth_3(str, content));
    return (0);
}
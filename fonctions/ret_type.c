/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ret_type.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 20:11:36 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/11/29 20:11:45 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

int ret_type(char *str)
{
    int ret_val;
    unsigned int i;

    i = 1;
    if (*(str + i) == 's')
            return (3);
    if (*(str + i) == 'c')
        return (4);
    if (*(str + i) == '.')
        while ((ft_isdigit(*(str + ++i))))
        if (*(str + i) == 'd')
            return (1);
        if (*(str + i) == 'u' && *(str + i + 1) == 'd')
            return (2);
        if (*(str + i) == 'x')
            return (5);
        if (*(str + i) == 'X')
            return (6);
        if (*(str + i) == 'p')
            return (6);
        else
            return (7);
}
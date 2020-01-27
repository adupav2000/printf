/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ret_type.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 20:11:36 by adu-pavi          #+#    #+#             */
/*   Updated: 2020/01/27 07:18:39 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

int ret_type(char *str)
{
    unsigned int i;

    i = 1;
    while (!ft_isprintf_flag(str[i]) && str[i] != '\0')
        i++;
    if (str[i] == 'd' || str[i] == 'i')
        return (1);
    if (str[i] == 'u' || str[i] == 'D')
        return (2);
    if (str[i] == 'x')
        return (5);
    if (str[i] == 'X')
        return (6);
    if (str[i] == 'p')
        return (7);
    if (str[i] == 's')
        return (3);
    if (str[i] == 'c')
        return (4);
    else
        return (7);
}

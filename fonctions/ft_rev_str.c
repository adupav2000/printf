/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/17 10:36:31 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/12/25 14:58:16 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

char *ft_rev_str(char *str_to_rev)
{
    int len;
    int i;
    char tmp;
    
    i = 0;
    len = ft_strlen(str_to_rev);
    while (i != (len - i) && i != (len - i + 1))
    {
        tmp = str_to_rev[len - i - 1];
        str_to_rev[len - i - 1] = str_to_rev[i];
        str_to_rev[i] = tmp;
        i++;
    }
    return (str_to_rev);
}

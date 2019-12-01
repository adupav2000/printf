/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_lim.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 20:51:28 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/11/29 23:47:43 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

int get_lim(char *str)
{
	int ret_val;
	unsigned int i;
	
	ret_val = 0;
	i = 1;
	if (str[i] == '.')
	{
		i++;
		while (ft_isdigit(str[i]))
		{
			ret_val = ret_val * 10 + (str[i] - 40);
			i++;
		}
	}
	else
		return (2000);
	return (ret_val);
}

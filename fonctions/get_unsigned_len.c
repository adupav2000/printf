/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_unsigned_len.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 11:28:35 by adu-pavi          #+#    #+#             */
/*   Updated: 2020/02/19 11:29:34 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

int	ft_get_unsigned_len(unsigned int num)
{
	int				ret_val;
	unsigned int	diviser;

	ret_val = 12;
	diviser = 1000000000;
	if (num < 10 && num > 0)
		return (1);
	while ((num / diviser) == 0)
	{
		ret_val--;
		diviser /= 10;
	}
	return (ret_val);
}

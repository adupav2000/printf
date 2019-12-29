/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_int_len.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 16:51:01 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/12/28 16:05:27 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

int	ft_get_int_len(int num)
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
	if (num < 0)
		ret_val++;
	return (ret_val);
}

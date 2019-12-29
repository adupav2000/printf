/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_int_len.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 16:51:01 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/12/28 22:21:39 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

int ft_get_int_len(int num)
{
	int ret_val;
	int diviseur;

	diviseur = 1000000000;
	ret_val = 10;
	if (num == 0)
		return (1);
	while ((num / diviseur) == 0 && ret_val > 0)
	{
		diviseur /= 10;
		ret_val--;
	}
	if (num < 0)
		ret_val++;
	return (ret_val);
}
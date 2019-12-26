/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv_dec.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 20:04:43 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/12/25 14:26:16 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

char *conv_dec(char *str, void *content)
{
	long int	safe_stock;
	int			diviser;
	char		*tmp;
	int			tmp_count;
    
	(void)str;
	safe_stock = (long int)content;
	diviser = 1000000000;
	tmp_count = 0;
	tmp = 0;
	if (!(tmp = 
	(char *)malloc(sizeof(int) * ft_get_int_len((int)content) + 1)))
		return (0);
	if (safe_stock < 0)
	{
		safe_stock = -safe_stock;
		tmp[tmp_count++] = '-';
	}
	while (!(safe_stock / diviser) && diviser != 1)
		diviser = diviser / 10;
	while (diviser != 0)
	{
		tmp[tmp_count++] = (char)((safe_stock / diviser) + 48);
		safe_stock -= (safe_stock / diviser) * diviser;
		diviser = diviser / 10;
	}
	tmp[tmp_count] = '\0';
    return (tmp);
}
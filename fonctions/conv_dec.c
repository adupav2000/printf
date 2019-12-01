/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv_dec.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 20:04:43 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/11/29 23:48:27 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

char *conv_dec(char *str, void *content)
{
	long int	safe_stock;
	int			diviser;
	char		*tmp;
	int			tmp_count;
	int			lim;
    
	safe_stock = (int)content;
	diviser = 1000000000;
	tmp_count = 0;
	tmp = NULL;
	lim = get_lim(str);
	if (safe_stock < 0)
	{
		safe_stock = -safe_stock;
		if ((tmp_count + 1) < lim)
			return (tmp);
		tmp[tmp_count++] = '-';
	}
	while (!(safe_stock / diviser) && diviser != 1)
		diviser = diviser / 10;
	while (diviser != 0)
	{
		if ((tmp_count + 1) < lim)
			return (tmp);
		tmp[tmp_count++] = ((safe_stock / diviser) + 48);
		safe_stock -= (safe_stock / diviser) * diviser;
		diviser = diviser / 10;
	}
    return (tmp);
}


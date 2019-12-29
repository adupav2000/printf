/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv_unsigned_dec.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 20:05:48 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/12/28 14:56:00 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

char *conv_unsigned_dec(char *str, void *content)
{
    long long int	safe_stock;
	int			        diviser;
	char		        *tmp;
	int			        tmp_count;

	(void)str;
	safe_stock = (long long int)content;
    if (safe_stock < 0)
        safe_stock = 4294967295 + safe_stock + 1;
	diviser = 1000000000; 
	tmp_count = 0;
	tmp = 0;
	if (!(tmp = (char *)malloc(sizeof(int) * ft_get_int_len((int)content) + 1)))
		return (0);
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
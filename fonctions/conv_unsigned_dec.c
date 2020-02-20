/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv_unsigned_dec.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 20:05:48 by adu-pavi          #+#    #+#             */
/*   Updated: 2020/02/19 11:45:06 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

char *conv_unsigned_dec(char *str, void *content)
{
    long long int	safe_stock;
	int			        diviser;
	char		        tmp[50000];
	int			        tmp_count;

	safe_stock = (long long int)content;
    if (safe_stock < 0)
        safe_stock = 4294967295 + safe_stock + 1;
	diviser = 1000000000; 
	ft_bzero(tmp, 50000);
	ft_strlcat(tmp, ft_sign_before_unsigned(str, content),
		(ft_strlen(ft_sign_before_unsigned(str, content)) + 1));
	tmp_count = ft_strlen(tmp);
	while (!(safe_stock / diviser) && diviser != 1)
		diviser = diviser / 10;
	while (diviser != 0)
	{
		tmp[tmp_count++] = (char)((safe_stock / diviser) + 48);
		safe_stock -= (safe_stock / diviser) * diviser;
		diviser = diviser / 10;
	}
	ft_strlcat(tmp, ft_sign_after_dec(str, content), (ft_strlen(tmp)
		+ ft_strlen(ft_sign_after_dec(str, content)) + 1));
    return (ft_strdup(tmp));
}
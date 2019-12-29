/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv_dec.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 20:04:43 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/12/29 11:39:52 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

char *conv_dec(char *str, void *content)
{
	int		safe_stock;
	int			diviser;
	char		*tmp;
	int			tmp_count;
	
	safe_stock = (int)content;
	diviser = 1000000000;
	tmp_count = 0;
	tmp = 0;
	if (!(tmp = (char *)malloc(sizeof(char) *
		ft_get_len_conv_dec(str, (int)content) + 2)))
		return (0);
	if (safe_stock < 0)
		tmp[tmp_count++] = '-';
	else if (ft_sign_before_dec(str) != '\0')
		strlcat(&tmp[tmp_count], ft_sign_before_dec(str, content), ft_strlen(ft_sign_before_dec(str)));
	while (!(safe_stock / diviser) && diviser != 1)
		diviser = diviser / 10;
	while (diviser != 0)
	{
		if ((safe_stock / diviser) > 0)
			tmp[tmp_count++] = (char)((safe_stock / diviser) + 48);
		else
			tmp[tmp_count++] = (char)(((safe_stock / diviser) * -1) + 48);
		safe_stock -= (safe_stock / diviser) * diviser;
		diviser = diviser / 10;
	}
	tmp[tmp_count] = '\0';
    return (tmp);
}
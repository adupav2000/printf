/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv_dec.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 20:04:43 by adu-pavi          #+#    #+#             */
/*   Updated: 2020/01/27 08:13:29 by adu-pavi         ###   ########.fr       */
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
		ft_get_len_conv_dec(str, content) + 2)))
		return (0);
	if (safe_stock < 0)
		tmp[tmp_count++] = '-';
	if (ft_sign_before_dec(str, content) != '\0')
		ft_strlcat(&tmp[tmp_count], ft_sign_before_dec(str, content),
		ft_strlen(ft_sign_before_dec(str, content)));
	while (!(safe_stock / diviser) && diviser != 1)
		diviser = diviser / 10;
	while (diviser != 0)
	{
		tmp_count = ft_strlen(tmp);
		if ((safe_stock / diviser) > 0)
			tmp[tmp_count++] = (char)((safe_stock / diviser) + 48);
		else
			tmp[tmp_count++] = (char)(((safe_stock / diviser) * -1) + 48);
		safe_stock -= (safe_stock / diviser) * diviser;
		diviser = diviser / 10;
	}
	tmp[tmp_count] = '\0';
	if ((int)ft_strlen(tmp) < ft_get_lim_string_min(str))
		return (ft_shift_char_in_string(tmp, ft_get_lim_string_min(str)));
    return (tmp);
}
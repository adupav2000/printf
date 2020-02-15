/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv_dec.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 20:04:43 by adu-pavi          #+#    #+#             */
/*   Updated: 2020/02/15 09:45:53 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

char *conv_dec(char *str, void *content)
{
	int			safe_stock;
	int			diviser;
	char		tmp[500000];
	int			tmp_count;
	char		*ret_val;
	
	safe_stock = (int)content;
	diviser = 1000000000;
	tmp_count = 0;
	if (ft_printfflag_has_max(str) && ft_get_lim_string_max(str) == 0  
		&& (int)content == 0)
			return (ft_strnew(0));
	if (ft_sign_before_dec(str, content) != '\0')
		ft_strlcat(&tmp[tmp_count], ft_sign_before_dec(str, content),
		ft_strlen(ft_sign_before_dec(str, content)) + 1);
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
	tmp_count = ft_strlen(tmp);
	ft_strlcat(&tmp[tmp_count], ft_sign_after_dec(str, content),
		ft_strlen(ft_sign_after_dec(str, content)));
	if (!(ret_val = (char *)malloc(sizeof(char) *
		ft_strlen(tmp))))
		return (0);
	ft_strlcat(ret_val, tmp, ft_strlen(tmp) + 1);
    return (ret_val);
}

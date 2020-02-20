/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sign_after_hex.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 11:45:43 by adu-pavi          #+#    #+#             */
/*   Updated: 2020/02/17 12:16:56 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

int ret_number_of_spaces_after_hex(int min, int max, void *content)
{
	int		len;

	len = ft_get_hex_len(content);
	if (ft_abs(min) < len && ft_abs(max) < len)
		return (0);
	if (max < 0)
		return (ft_abs(max) - len);
	if (min < 0 && ft_abs(min) > len)
	{
		if (len < max)
		{
			if (max < ft_abs(min))
				return (ft_abs(min) - (max));
		}
		if (len > max)
		{
			if ((int)content < 0 && len < ft_abs(min))
				return (ft_abs(min) - len + 1);
			if (len < ft_abs(min))
				return (ft_abs(min) - len);
		}
	}
	return (0);
}

char	*ft_sign_after_hex(char *str, void *content)
{
	int min;
	int max;
	int len;
	char *ret_val;

	ret_val = 0;
	len = ft_get_int_len((int)content);
	if (ft_printfflag_has_min(str))
		min = ft_get_lim_string_min(str);
	if (!ft_printfflag_has_min(str))
		min = 0;
	if (ft_printfflag_has_max(str))
		max = ft_get_lim_string_max(str);
	if (!ft_printfflag_has_max(str))
		max = 0;
	ret_val = ft_strnew(ret_number_of_spaces_after_hex(min, max, content) + 1);
	ft_memset(ret_val, ' ', ret_number_of_spaces_after_hex(min, max, content));
	return (ret_val);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sign_before_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/28 18:15:45 by adu-pavi          #+#    #+#             */
/*   Updated: 2020/02/18 10:37:40 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

char	*ft_sign_before_dec_just_min_un(int min, int len, int complement)
{
	char	*ret_val;
	int		i_ret_val;
	int		i;

	i = 0;
	i_ret_val = 0;
	if (min <= 0 || (min < len && complement == 0))
		return (ft_strnew(0));
	if (complement == 0)
		i_ret_val = min - len + 1;
	else if (complement == 1)
		i_ret_val = min;
	ret_val = ft_strnew(min - len + 1);
	while (i <= i_ret_val)
		ret_val[i++] = ' ';
	return (ret_val);
}

char	*ft_sign_before_dec_just_max_un(int max, int len, char *str)
{
	char	*ret_val;

	if (max < len)
		return (ft_strnew(0));
	else
	{
		ret_val = ft_strnew(max - len);
		if (str[1] == '.' || (str[1] == '0' && !ft_printfflag_has_min(str)) ||
			!ft_strncmp("0", ft_get_lim_max_str(str), 1)
			|| ft_printfflag_has_min(str))
			ft_memset(ret_val, '0', (max - len));
		else
			ft_memset(ret_val, ' ', (max - len));
		return (ret_val);
	}
	return (0);
}

char	*handle_options_positive_un(int min, int max, char *str, void *content)
{
	char	*tmp;
	int		len;

	len = ft_get_unsigned_len((unsigned int)content);
	tmp = 0;
	if (min < len && max < len)
		return (ft_strnew(0));
	else if (min <= max)
	{
		if (str[1] == '.' || ft_strncmp("0", ft_get_lim_max_str(str), 1))
			tmp = ft_strnew(max + 2);
		ft_strlcat(tmp, ft_sign_before_dec_just_max_un(max, len, str),
			max + 3);
		return (tmp);
	}
	else if (min > max)
	{
		tmp = ft_strnew(min + 1);
		ft_strlcat(tmp, ft_sign_before_dec_just_min_un((min - max), len, 0),
			(min - max + 1));
		ft_strlcat(tmp, ft_sign_before_dec_just_max_un(max, len, str),
			(min + 1));
		return (tmp);
	}
	return (0);
}

char	*ft_sign_before_unsigned(char *str, void *content)
{
	int min;
	int max;
	int len;

	len = ft_get_unsigned_len((unsigned int)content);
	if (ft_printfflag_has_min(str))
		min = ft_get_lim_string_min(str);
	if (ft_printfflag_has_max(str))
		max = ft_get_lim_string_max(str) + 2;
	if (!ft_printfflag_has_min(str) || min < 0 || (ft_printfflag_has_max(str)
		&& max < 0))
		min = 0;
	if (!ft_printfflag_has_max(str) || max < 0)
		max = 0;
	return (handle_options_positive_un(min, max, str, content));
}

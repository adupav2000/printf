/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv_min_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 20:08:30 by adu-pavi          #+#    #+#             */
/*   Updated: 2020/02/18 10:41:47 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

char	*ft_sign_before_hex_just_min(int min, int len, int complement)
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

char	*ft_sign_before_hex_just_max(int max, int len, char *str)
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

char	*handle_options_positive_hex(int min, int max, char *str, void *content)
{
	char	*tmp;
	int		len;

	len = ft_get_hex_len(content);
	tmp = 0;
	if (min < len && max < len)
		return (ft_strnew(0));
	else if (min <= max)
	{
		if (str[1] == '.' || ft_strncmp("0", ft_get_lim_max_str(str), 1))
			tmp = ft_strnew(max + 2);
		ft_strlcat(tmp, ft_sign_before_hex_just_max(max, len, str),
			max + 3);
		return (tmp);
	}
	else if (min > max)
	{
		tmp = ft_strnew(min + 1);
		ft_strlcat(tmp, ft_sign_before_hex_just_min((min - max), len, 1),
			(min - max + 1));
		ft_strlcat(tmp, ft_sign_before_hex_just_max(max, len, str),
			(min + 1));
		return (tmp);
	}
	return (0);
}

char *conv_min_hex(char *str, void *content)
{
    char    tmp[5000];
    int     min;
    int     max;
    int     len;

    ft_bzero(tmp, 5000);
    len = ft_get_hex_len(content);
	if (ft_printfflag_has_min(str))
		min = ft_get_lim_string_min(str);
	if (ft_printfflag_has_max(str))
		max = ft_get_lim_string_max(str);
	if (!ft_printfflag_has_min(str) || min < 0 || max < 0)
		min = 0;
	if (!ft_printfflag_has_max(str) || max < 0)
		max = 0;
    ft_strlcat(tmp, handle_options_positive_hex(min, max, str, content), (ft_strlen(
        handle_options_positive_hex(min, max, str, content)) + 1));
    ft_strlcat(tmp, conv_from_base((unsigned int)content, "0123456789abcdef"), 
        (ft_get_hex_len(content) + ft_strlen(tmp) + 1));
    ft_strlcat(tmp, ft_sign_after_hex(str, content), (ft_strlen(ft_sign_after_hex(
        str, content)) + ft_strlen(tmp) + 1));
    return (ft_strdup(tmp));
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sign_after_dec.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 12:16:17 by adu-pavi          #+#    #+#             */
/*   Updated: 2020/02/01 13:53:04 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

char	*ft_sign_after_dec_just_min(int min, int len, int complement)
{
	char	*ret_val;
	int		i_ret_val;
	int		i;

	i = 0;
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

char	*ft_sign_after_dec_just_max(int max, int len, char *str, void *content)
{
	char	*ret_val;

	if (max < len)
		return (ft_strnew(0));
	else
	{
		ret_val = ft_strnew(max - len);
		printf("%s\n", ft_get_lim_max_str(str));
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

char	*handle_options_positive_after(int min, int max, char *str, void *content)
{
	char	*tmp;
	int		len;

	len = ft_get_int_len((int)content);
	if (min < len && max < len)
		return (ft_strnew(0));
	else if (min <= max)
	{
		if (str[1] == '.' || ft_strncmp("0", ft_get_lim_max_str(str), 1))
			tmp = ft_strnew(max + 2);
		ft_strlcat(tmp, ft_sign_after_dec_just_max(max, len, str, content),
			max + 3);
		return (tmp);
	}
	else if (min > max)
	{
		tmp = ft_strnew(min + 1);
		ft_strlcat(tmp, ft_sign_after_dec_just_min((min - max), len, 1),
			(min - max + 1));
		ft_strlcat(tmp, ft_sign_after_dec_just_max(max, len, str, content),
			(min + 1));
		return (tmp);
	}
	return (0);
}

char	*handle_options_negativ_after(int min, int max, char *str, void *content)
{
	char	*tmp;
	int		len;

	len = ft_get_int_len((int)content);
	if (min < len && max < len)
	{
		tmp = ft_strnew(1);
		tmp[0] = '-';
		return (tmp);
	}
	else if (min <= max)
	{
		(void)ft_get_lim_max_str(str);
		if (str[1] == '.' || ft_strncmp("0", ft_get_lim_max_str(str), 1))
			tmp = ft_strnew(max + 2);
		tmp[0] = '-';
		ft_strlcat(&tmp[1], ft_sign_after_dec_just_max((max + 1), len, str,
			content), max + 3);
		return (tmp);
	}
	else
	{
		tmp = ft_strnew(min - len + 1);
		ft_strlcat(tmp, ft_sign_after_dec_just_min((min - max), len, 1),
			(min - max + 1));
		if (str[1] == '.' || ft_strncmp("0", ft_get_lim_max_str(str), 2) ||
			ft_printfflag_has_min(str))
			tmp[ft_strlen(tmp)] = '-';
		ft_strlcat(tmp, ft_sign_after_dec_just_max(max, len, str, content),
			(max + 1));
		if (!(str[1] == '.' || ft_strncmp("0", ft_get_lim_max_str(str), 2) ||
			ft_printfflag_has_min(str)))
			tmp[ft_strlen(tmp)] = '-';
		return (tmp);
	}
	return (0);
}

char	*ft_sign_after_dec(char *str, void *content)
{
	int min;
	int max;
	int len;

	len = ft_get_int_len((int)content);
	if (ft_printfflag_has_min(str))
		min = ft_get_lim_string_min(str);
	if (!ft_printfflag_has_min(str) || min < 0)
		min = 0;
	if (ft_printfflag_has_max(str))
		max = ft_get_lim_string_max(str);
	if (!ft_printfflag_has_max(str) || max < 0)
		max = 0;
	if ((int)content >= 0)
		return (handle_options_positive_after(min, max, len, str));
	if ((int)content < 0)
		return (handle_options_negativ_after(min, max, len, str));
	return (0);
}

 /*

Il y a un 0 avant,
négatif : afficher un - et ensuite le nombre de 0 manquant ++++++
positif afficher tt les 0 manquant ++++

Il y a un + avant,
négatif : afficher des espaces puis le chiffre avec son signe +++++
positif : afficher des espace puis des espaces et un + avant le chiffre ++++

Il y a un + puis un 0,
négatif : afficher le - puis les 0 puis le nombre ++++
positif : afficher un + puis les 0 puis le nombre ++++

Il y a un espace puis un -,
négatif : afficher les espaces manquant après le chiffre +++++
positif : afficher un espace puis le chiffre puis le reste de 0 ++++

Il y a un espace puis un 0,
négatif : afficher un -, le nombre de 0 manquant et le nombre +++++
positif : afficher un espace puis le reste de 0 et le nombre ++++

*/
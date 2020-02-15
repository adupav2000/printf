/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sign_before_dec.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/28 18:15:45 by adu-pavi          #+#    #+#             */
/*   Updated: 2020/02/15 09:44:04 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

char *ft_sign_before_dec_just_min(int min, int len)
{
	char	*ret_val;
	int		i_ret_val;

	if (min < 0 || min < len)
		return (ft_strnew(0));
	i_ret_val = min - len;
	ret_val = 0;
	if (i_ret_val > 0)
	{
		ret_val[i_ret_val + 1] = '\0';
		while (i_ret_val - 1 > 0)
			ret_val[i_ret_val--] = ' ';	
	}
	return (ft_strdup((const char *)ret_val));
}

char *ft_sign_before_dec_just_max(int max, int len, char *str, void *content)
{
	char	*ret_val;

	if (max < len)
		return (ft_strnew(0));
	else
	{
		ret_val = ft_strnew(max - len);
		if (str[1] == '.' || ft_strncmp("0", ft_get_lim_max_str(str), 1) || 
			ft_printfflag_has_min(str))
			ft_memset(ret_val, '0', (max - len));
		else
			ft_memset(ret_val, ' ', (max - len));
		if (ft_strncmp("", ft_get_lim_max_str(str), 1))
		return (ret_val);
	}
	return (0);
}

char *ft_sign_before_dec_min_and_max(char *str, void *content)
{
	int		max;
	int		min;
	int		len;
	char	*ret_val;

	max = ft_atoi(ft_get_lim_max_str(str));
	min = ft_atoi(ft_get_lim_min_str(str));
	len = ft_get_int_len((int)content);
	if (min < len && max < len)
		return (ft_strnew(0));
	if (min > len && max < len)
	{
		ret_val = ft_strnew(min - len);
		ft_memset(ret_val, ' ', min - len);
	}
	else if (max > len && min < len)
		return (ft_sign_before_dec_just_max(max, len, str, content));
	else
	{
		if (max > min)
			return (ft_sign_before_dec_just_max(max, len, str, content));
		else
		{
			ret_val = ft_strnew(min);
			ft_memset(ret_val, ' ', (min - max));
			ft_strlcat(ret_val, ft_sign_before_dec_just_max(max, len, str, 
			content), max);
			return (ret_val);
		}
	}
	return (0);
}

char	*handle_options_positive(int min, int max, int len, char *str, 
	void *content)
{
	char *tmp;

	if (min < len && max < len)
		return (ft_strnew(0));
	else if (min <= max)
	{
		if (str[1] == '.' || ft_strncmp("0", ft_get_lim_max_str(str), 1))
			tmp = ft_strnew(max + 2);
			tmp[0] = '-';
			ft_strlcat(tmp, ft_sign_before_dec_just_max(max, len, str, content),
				max + 3);
			return (tmp);
	}
	else if (min > max)
	{
		tmp = ft_strnew(min - len);
		ft_strlcat(tmp, ft_sign_before_dec_just_min((min - max), len), 
			(min - max + 1));
		ft_strlcat(tmp, ft_sign_before_dec_just_max(max, len, str, content), 
			(max + 1));
		return (tmp);
	}
	return (0);
}

char	*handle_options_negativ(int min, int max, int len, char *str, 
	void *content)
{
	char *tmp;

	if (min < len && max < len)
	{
		tmp = ft_strnew(1);
		tmp[0] = '-';
		return (tmp);
	}
	else if (min <= max)
	{
		tmp = ft_strnew(max + 1);
		tmp[0] = '-';
		ft_strlcat(tmp, ft_sign_before_dec_just_max(max, len, str, content), max + 1);
		return (tmp);
	}
	else if (min > max)
	{
		tmp = ft_strnew(min - len);
		ft_strlcat(tmp, ft_sign_before_dec_just_min((min - max), len),
			(min - max + 1));
		if (str[1] == '.' || ft_strncmp("0", ft_get_lim_max_str(str), 1) ||
			ft_printfflag_has_min(str))
			tmp[ft_strlen(tmp)] = '-';
		ft_strlcat(tmp, ft_sign_before_dec_just_max(max, len, str, content),
			(max + 1));
		if (!(str[1] == '.' || ft_strncmp("0", ft_get_lim_max_str(str), 1) ||
			ft_printfflag_has_min(str)))
			tmp[ft_strlen(tmp)] = '-';
		return (tmp);
	}
	return (0);
}

char	*ft_sign_before_dec(char *str, void *content)
{
	int min;
	int max;
	int len;

	printf ("hello\n");
	len = ft_get_int_len((int)content);
	if (ft_printfflag_has_min(str))
		min = ft_get_lim_string_min(str);
	if (!ft_printfflag_has_min(str) || min < 0)
		min = 0;
	printf("max = %d, min = %d, len = %d, ft_get_lim_string_max(str) = %d\n", max, min, len, ft_get_lim_string_max(str));
	if (ft_printfflag_has_max(str))
		max = ft_get_lim_string_max(str);
	if (!ft_printfflag_has_max(str) || max < 0)
		max = 0;
	if ((int)content >= 0)
		return (handle_options_positive(min, max, len, str, content));
	if ((int)content < 0)
		return (handle_options_negativ(min, max, len, str, content));
	return (0);
}

char *old_sign_before_dec(char *str, void *content)
{
	char			*ret_val;
	unsigned int	i;
	int				i_ret_val;
	int				limit;
	int				difference;

	ret_val = 0;
	i_ret_val = 0;
	i = 0;
	while (!ft_isprintf_flag(str[i + 1]) && str[i + 1] != 0)
		i++;
	while (ft_isdigit(str[i]))
		i--;
	limit = ft_get_len_conv_dec(str, content);
	if (ft_printfflag_has_min(str))
		difference = ft_get_lim_string_min(str) - ft_abs(ft_atoi(&str[i + 1]))
		+ (ft_abs(ft_atoi(&str[i + 1])) - ft_get_int_len((int)content));
	else
		difference = (ft_abs(ft_atoi(&str[i + 1])) -
		ft_get_int_len((int)content));
	if (!(ret_val = malloc(limit + difference + 1)))
		return (0);
	if ((int)content < 0)
		difference -= 1;
	if ((ft_abs(ft_atoi(&str[i + 1])) - ft_get_int_len((int)content)) < 0)
		difference -= 1;
	if (ft_printfflag_has_min(str))
		while (i_ret_val < difference)
			ret_val[i_ret_val++] = ' ';
	if (ft_printfflag_has_min(str))
		difference += (ft_abs(ft_atoi(&str[i + 1])) -
			ft_get_int_len((int)content));
	else
		difference = (ft_abs(ft_atoi(&str[i + 1])) -
			ft_get_int_len((int)content));
	if ((int)content < 0)
	{
		if ((!ft_strncmp("0", ft_get_signs_before_dec(str), 10) ||
		!ft_strncmp(" 0", ft_get_signs_before_dec(str), 10) ||
		!ft_strncmp("+0", ft_get_signs_before_dec(str), 10)))
		{
			ret_val[i_ret_val++] = '-';
			while (i_ret_val <= difference)
				ret_val[i_ret_val++] = '0';
		}
		else if (!ft_strncmp(".", ft_get_signs_before_dec(str), 10))
		{
			ret_val[i_ret_val++] = '-';
			while (i_ret_val <= difference + 1)
				ret_val[i_ret_val++] = '0';
		}
		else if (!ft_strncmp("+", ft_get_signs_before_dec(str), 10))
		{
			while (i_ret_val <= difference)
				ret_val[i_ret_val++] = ' ';
			ret_val[i_ret_val++] = '-';
		}
		else if (!ft_strncmp(" -", ft_get_signs_before_dec(str), 10))
			ret_val[i_ret_val++] = '-';
		else if (!ft_strncmp("-", ft_get_signs_before_dec(str), 10))
			ret_val[i_ret_val++] = '-';
		else
		{
			while (i_ret_val < difference)
				ret_val[i_ret_val++] = ' ';
			ret_val[i_ret_val++] = '-';
		}
	}
	else if ((int)content >= 0)
	{
		if (!ft_strncmp("0", ft_get_signs_before_dec(str), 10))
			while (i_ret_val <= difference)
				ret_val[i_ret_val++] = '0';
		else if (!ft_strncmp("+", ft_get_signs_before_dec(str), 10))
		{
			while (i_ret_val < difference - 1)
				ret_val[i_ret_val++] = ' ';
			ret_val[i_ret_val++] = '+';
		}
		else if (!ft_strncmp("+0", ft_get_signs_before_dec(str), 10))
		{
			ret_val[i_ret_val++] = '+';
			while (i_ret_val <= difference)
				ret_val[i_ret_val++] = ' ';
		}
		else if (!ft_strncmp(" -", ft_get_signs_before_dec(str), 10))
			ret_val[i_ret_val++] = ' ';
		else if (!ft_strncmp(" 0", ft_get_signs_before_dec(str), 10))
		{
			ret_val[i_ret_val++] = ' ';
			while (i_ret_val <= difference)
				ret_val[i_ret_val++] = '0';
		}
		else if ((!ft_strncmp(" ", ft_get_signs_before_dec(str), 10)))
			ret_val[i_ret_val++] = ' ';
		else if ((!ft_strncmp(".", ft_get_signs_before_dec(str), 10)))
			while (i_ret_val < difference)
				ret_val[i_ret_val++] = '0';
		else
			while (i_ret_val < difference)
				ret_val[i_ret_val++] = ' ';
	}
	ret_val[i_ret_val] = '\0';
	return (ret_val);
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
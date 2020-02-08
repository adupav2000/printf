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

char	*ft_sign_after_dec(char *str, void *content)
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
	difference = ft_abs(ft_atoi(&str[i + 1])) - ft_get_int_len((int)content);
	limit = ft_get_len_conv_dec(str, content);
	if (!(ret_val = malloc(limit + difference + 1)))
		return (0);
	if ((int)content < 0)
	{
		if (!ft_strncmp(" -", ft_get_signs_before_dec(str), 10)
		|| !ft_strncmp("-", ft_get_signs_before_dec(str), 10)
		|| !ft_strncmp("-0", ft_get_signs_before_dec(str), 10))
			while (i_ret_val <= difference)
				ret_val[i_ret_val++] = ' ';
	}
	else if ((int)content >= 0)
	{
		if (!ft_strncmp(" -", ft_get_signs_before_dec(str), 10))
			while (i_ret_val <= difference - 1)
				ret_val[i_ret_val] = ' ';
		if (!ft_strncmp("-", ft_get_signs_before_dec(str), 10)
		|| !ft_strncmp("-0", ft_get_signs_before_dec(str), 10))
			while (i_ret_val <= difference)
				ret_val[i_ret_val] = ' ';
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
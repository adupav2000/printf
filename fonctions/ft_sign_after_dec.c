/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sign_after_dec.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 12:16:17 by adu-pavi          #+#    #+#             */
/*   Updated: 2020/02/18 10:49:54 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

int ret_number_of_spaces_after_dec(int min, int max, void *content)
{
	int		len;

	len = ft_get_int_len((int)content);
	len = (int)content < 0 ? len - 1 : len;
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

char	*ft_sign_after_dec(char *str, void *content)
{
	int min;
	int max;
	int len;
	char *ret_val;

	ret_val = 0;
	len = ft_get_int_len((int)content);
	if (ft_printfflag_has_min(str))
		min = ft_get_lim_string_min(str);
	else
		min = 0;
	if (ft_printfflag_has_max(str))
		max = ft_get_lim_string_max(str);
	else
		max = 0;
	ret_val = ft_strnew(ret_number_of_spaces_after_dec(min, max, content) + 1);
	ft_memset(ret_val, ' ', ret_number_of_spaces_after_dec(min, max, content));
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


si il y a un max négatif le min est ignoré

*/
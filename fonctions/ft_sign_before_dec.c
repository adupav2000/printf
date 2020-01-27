/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sign_before_dec.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/28 18:15:45 by adu-pavi          #+#    #+#             */
/*   Updated: 2020/01/27 09:51:42 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

char	*ft_sign_before_dec(char *str, void *content)
{
	char			*ret_val;
	unsigned int	i;
	unsigned int	i_ret_val;
	int				limit;

	ret_val = 0;
	i_ret_val = 0;
	i = 0;
	limit = ft_get_len_conv_dec(str, content);
	if (!(ret_val = malloc(limit + 1)))
		return (0);
	while (!ft_isprintf_flag(str[i + 1]) && str[i + 1] != 0)
		i++;
	while (ft_isdigit(str[i]))
		i--;
	if ((int)content < 0)
	{
		if (str[i] == '0')
	}
}
/*

Il y a un 0 avant,
négatif : afficher un - et ensuite le nombre de 0 manquant
positif afficher tt les 0

Il y a un + avant,
négatif : afficher des espaces puis le chiffre avec son signe
positif : afficher des espace puis des espaces et un + avant le chiffre

Il y a un + puis un 0,
négatif : afficher le - puis les 0 puis le nombre
positif : afficher un + puis les 0 puis le nombre

Il y a un espace puis un -,
négatif : afficher les espaces manquant après le chiffre
positif : afficher un espace puis le chiffre puis le reste de 0

Il y a un espace puis un 0,
négatif : afficher un -, le nombre de 0 manquant et le nombre
positif : afficher un espace puis le reste de 0 et le nombre

*/
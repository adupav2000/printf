/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfflag_has_max.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/30 16:00:34 by adu-pavi          #+#    #+#             */
/*   Updated: 2020/02/12 17:06:44 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

int	ft_printfflag_has_max(char *str)
{
	unsigned int i;

	i = 0;
	while (!(ft_isprintf_flag(str[i])) && str[i] != '.' && str[i] != '\0')
		i++;
	if (ft_isdigit(str[i - 1]) && ft_isprintf_flag(str[i]))
		return (1);
	if (str[i] == '.')
		i++;
	while (!ft_isprintf_flag(str[i]) && str[i] != '\0')
	{
		if (ft_isdigit(str[i]))
			return (1);
		i++;
	}
	return (0);
}

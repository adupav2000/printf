/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_lim_string_max.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/29 17:02:03 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/12/31 11:25:18 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

int	ft_get_lim_string_max(char *str)
{
	int i;

	i = 0;
	while (!(ft_isprintf_flag(str[i])) && str[i] != '.' && str[i] != '\0')
		i++;
	if (str[i] == '.')
		i++;
	while (!ft_isprintf_flag(str[i]) && str[i] != '\0')
	{
		if (ft_isdigit(str[i]) && str[i - 1] == '-')
			return (ft_atoi(&str[i - 1]));
		if (ft_isdigit(str[i]))
			return (ft_atoi(&str[i]));
		i++;
	}
	return (0);
}
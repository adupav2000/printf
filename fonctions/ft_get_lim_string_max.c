/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_lim_string_max.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/29 17:02:03 by adu-pavi          #+#    #+#             */
/*   Updated: 2020/02/15 18:24:15 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

int	ft_get_lim_string_max(char *str)
{
	int i;

	i = 0;
	while (!ft_isprintf_flag(str[i]) && str[i] != '\0')
		i++;
	while (str[i] != '.' && str[i] != '%' && str[i] != '\0')
		i--;
	i++;
	return (ft_atoi(&str[i]));
}

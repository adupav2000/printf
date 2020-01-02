/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfflag_has_min.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/30 15:59:25 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/12/30 16:06:07 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

int ft_printfflag_has_min(char *str)
{
	unsigned int i;

	i = 0;
	while (!(ft_isdigit(str[i])) && !(ft_isprintf_flag(str[i])))
		i++;
	while (ft_isdigit(str[i]))
		i++;
	if (str[i] == '.')
		return (1);
	return (0);
}
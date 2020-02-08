/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_signs_before_dec.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 08:55:22 by adu-pavi          #+#    #+#             */
/*   Updated: 2020/02/08 16:10:58 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

char	*ft_get_signs_before_dec(char *str)
{
	int i;

	i = 0;
	while (!ft_isprintf_flag(str[i]) && str[i])
		i++;
	while (str[i] != '%' && str[i] != '-' && str[i] != '+' &&
		str[i] != ' ' && str[i] != '.' && i > 0)
		i--;
	if (str[i] == ' ')
		return (" ");
	if (str[i] == '%' && str[i + 1] == '0')
		return ("0");
	if (str[i] == '+' && str[i + 1] == '0')
		return ("+0");
	if (str[i] == '+')
		return ("+");
	if (str[i - 1] == ' ' && str[i] == '-')
		return (" -");
	if (str[i] == '-')
		return ("-");
	if (str[i] == ' ' && str[i + 1] == '0')
		return (" 0");
	if (str[i] == '.')
		return (".");
	return ("");
}

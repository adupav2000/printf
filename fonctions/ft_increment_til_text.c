/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_increment_til_text.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/26 12:50:27 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/12/30 11:50:18 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

int	ft_increment_til_text(char *str, unsigned int i)
{
	if (str[i] == '%')
		i++;
	if (str[i] == '.')
		i++;
	while (*(str + i) == ' ' ||
		*(str + i) == '+' ||
		*(str + i) == '-' ||
		*(str + i) == '\'')
		i++;
	while (ft_isdigit(str[i]))
		i++;
	if (str[i] == '.')
		i++;
	while (!(ft_is_used_letter(str[i])))
		i++;
	i++;
	return (i);
}

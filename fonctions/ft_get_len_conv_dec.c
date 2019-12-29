/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_len_conv_dec.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/29 10:06:28 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/12/29 11:14:20 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

int ft_get_len_conv_dec(char *str, int content)
{
	int ret_val;
	int i;

	i = 0;
	ret_val = 0;
	if (str[i] == '%')
		i++;
	while (*(str + i) == ' ' ||
		*(str + i) == '+' ||
		*(str + i) == '-' ||
		*(str + i) == '\'')
        i++;
	if (ft_isdigit(str[i]))
		ret_val = ft_atoi(&str[i]);
	return (ret_val);
}
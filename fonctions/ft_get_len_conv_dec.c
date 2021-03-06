/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_len_conv_dec.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/29 10:06:28 by adu-pavi          #+#    #+#             */
/*   Updated: 2020/01/27 07:59:21 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

int	ft_get_len_conv_dec(char *str, void *content)
{
	int ret_val;
	int i;

	ret_val = 0;
	i = 0;
	if ((int)content < 0)
		ret_val++;
	while (!ft_isprintf_flag(str[i]))
		i++;
	while (ft_isdigit(str[i - 1]))
		i--;
	ret_val += ft_atoi(&str[i]) > ft_get_int_len((int)content) ?
		ft_atoi(&str[i]) : ft_get_int_len((int)content);
	return (ret_val);
}

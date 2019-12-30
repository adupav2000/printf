/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_len_conv_dec.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/29 10:06:28 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/12/30 11:53:28 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

int ft_get_len_conv_dec(char *str, void *content)
{
	int ret_val;
	int i;

	ret_val = 0;
	i = 0;
	if ((int)content < 0)
		ret_val++;
	while (!ft_isdigit(str[i]))
		i++;
	ret_val += ft_get_int_len((int)content) > ft_atoi(&str[i]) ?
		ft_get_int_len((int)content) :
		ft_atoi(&str[i]);
	return (ret_val);
}

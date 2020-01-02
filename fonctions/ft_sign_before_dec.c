/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sign_before_dec.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/28 18:15:45 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/12/30 12:52:45 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

char	*ft_sign_before_dec(char *str, void *content)
{
	char			*ret_val;
	unsigned int	i;
	unsigned int	i_ret_val;

	ret_val = 0;
	i_ret_val = 0;
	i = 0;
	if (!(ret_val = malloc(ft_get_len_conv_dec(str, content) + 1)))
		return (0);
	if (str[i] == '%')
		i++;
	while (str[i] == (' ' | '+' | '\'' | '-'))
	{
		if (ret_val[0] != '+' && str[i] == ' ' && (int)content > 0)
			ret_val[0] = ' ';
		if (str[i] == '+' && (int)content > 0)
			ret_val[0] = '+';
		i++;
	}
	if (str[i] == '.' && ft_isdigit(str[i + 1]))
	{
		i++;
				
	}
	return (ret_val);
}

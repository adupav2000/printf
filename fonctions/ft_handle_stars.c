/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_stars.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 17:06:30 by adu-pavi          #+#    #+#             */
/*   Updated: 2020/02/16 18:21:55 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

char *ft_handle_stars(char *str, va_list args)
{
	char			ret_val[200000];
	char			*true_ret_val;
	unsigned int	i_ret_val;
	unsigned int	i;

	i = 0;
	i_ret_val = 0;
	ft_bzero(ret_val, 20000);
	while (str[i] && i < ft_strlen(str))
	{
		if (str[i] == '%')
		{
			while (!ft_isprintf_flag(str[i]))
			{
				if (str[i] == '*')
				{
					i++;
					ret_val[i_ret_val] = '\0';
					ft_strlcat(ret_val, ft_itoa(va_arg(args, int)), 
						ft_strlen(ret_val) + 12);
					i_ret_val = ft_strlen(ret_val);
				}
				ret_val[i_ret_val++] = str[i++];
			}
			ret_val[i_ret_val++] = str[i++];
		}
		else if (str[i] && str[i] != '%')
			ret_val[i_ret_val++] = str[i++];

	}
	ret_val[i_ret_val] = '\0';
	true_ret_val = 0;
	if (!(true_ret_val = ft_strnew(ft_strlen(ret_val))))
		return (0);
	ft_strlcpy(true_ret_val, ret_val, ft_strlen(ret_val) + 1);
	return (true_ret_val);
}
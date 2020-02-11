/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_stars.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 17:06:30 by adu-pavi          #+#    #+#             */
/*   Updated: 2020/02/11 11:03:11 by adu-pavi         ###   ########.fr       */
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
	while (str[i])
	{
		if (str[i] == '%')
		{
			while (!ft_isprintf_flag(str[i]))
			{
				if (str[i] == '*')
				{
					i++;
					ret_val[i_ret_val] = '\0';
					ft_strlcat(ret_val, ft_itoa(va_arg(args, int)), 12);
					i_ret_val = ft_strlen(ret_val);
					printf("-%c[ire-te]-", ret_val[i_ret_val - 1]);
				}
				ret_val[i_ret_val++] = str[i++];
			}
			ret_val[i_ret_val++] = str[i++];
			(void)va_arg(args, int);
		}
		else if (str[i])
			ret_val[i_ret_val++] = str[i++];
	}
	ret_val[i_ret_val] = '\0';
	va_end(args);
	true_ret_val = 0;
	if (!(true_ret_val = ft_strnew(ft_strlen(ret_val))))
		return (0);
	ft_strlcpy(true_ret_val, ret_val, ft_strlen(ret_val) + 1);
	return (true_ret_val);
}
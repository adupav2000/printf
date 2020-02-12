/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_jump_to_next_arg.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 19:50:47 by adu-pavi          #+#    #+#             */
/*   Updated: 2020/02/11 20:11:37 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

int ft_jump_to_next_arg(char *str, va_list arg)
{
	int ret_val;
	int i;

	ret_val = 0;
	i = 0;
	while (str[i] && str[i] != '%')
		i++;
	while (str[i] && !ft_isprintf_flag(str[i]))
		if (str[i++] == '*')
			(void)va_arg(arg, int);
	while (str[i] && str[i] != '%')
		i++;
	return (i);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_lim_min_str.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/29 17:02:03 by adu-pavi          #+#    #+#             */
/*   Updated: 2020/02/12 11:09:51 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

char	*ft_get_lim_min_str(char *str)
{
	int		i;
	char	*ret_val;
	int		i_ret_val;

	i = 0;
	i_ret_val = 0;
	if (str[i] == '%')
		i++;
	while (!ft_isprintf_flag(str[i]) && str[i] != '\0' && str[i] != '.')
		ret_val[i_ret_val++] = str[i++];
	ret_val[i_ret_val] = '\0';
	ret_val = ft_strdup((const char *)ret_val);
	return (ret_val);
}

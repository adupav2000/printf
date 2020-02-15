/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_lim_max_str.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/29 17:02:03 by adu-pavi          #+#    #+#             */
/*   Updated: 2020/02/15 12:46:51 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

char	*ft_get_lim_max_str(char *str)
{
	int		i;
	char	*ret_val;
	int		i_ret_val;

	i = 0;
	i_ret_val = 0;
	while (!(ft_isprintf_flag(str[i])) && str[i] != '.' && str[i] != '\0')
	{
		i++;
	}
	while (!ft_isprintf_flag(str[i + i_ret_val]) && str[i + i_ret_val] != '\0')
		i_ret_val++;
	ret_val = ft_strnew(i_ret_val + 1);
	ft_strlcat(ret_val, &str[i], i_ret_val);
	return (ret_val);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv_from_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/20 15:02:47 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/12/30 11:25:54 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

char *conv_from_base(unsigned int num, char *base)
{
	int len_base;
	int i;
	char tmp[500000];
	char *ret_val;

	ret_val = NULL;
	i = 0;
	len_base = ft_strlen(base);
	while (num > 0)
	{
		tmp[i] = base[num%len_base];
		num = num/len_base;
		i++;
	}
	tmp[i] = 0;
	ret_val = NULL;
	if (!(ret_val = ft_strnew(ft_strlen(tmp))))
		return (0);
	ft_strlcpy(ret_val, tmp, ft_strlen(tmp) + 1);
	ft_rev_str(ret_val);
	return (ret_val);
}
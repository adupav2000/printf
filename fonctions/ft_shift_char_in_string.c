/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_shift_char_in_string.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/30 10:58:17 by adu-pavi          #+#    #+#             */
/*   Updated: 2020/02/01 13:44:26 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

char	*ft_shift_char_in_string(char *string, unsigned int shift_lim)
{
	char			*ret_val;
	unsigned	int	i;

	i = 0;
	ret_val = 0;
	if (!(ret_val = ft_strnew(shift_lim)))
		return (0);
	while (i < (shift_lim - ft_strlen(string)))
		ret_val[i++] = ' ';
	ft_strlcpy(&ret_val[i], string, ft_strlen(string) + 1);
	return (ret_val);
}

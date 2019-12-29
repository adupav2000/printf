/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 17:39:54 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/12/28 15:48:12 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

unsigned	int	ft_exp(int to_exp, int exp)
{
	int			ret_val;
	long int	stop;

	if (exp == 0 && to_exp != 0)
		return (1);
	ret_val = to_exp;
	stop = 0;
	while (++stop <= exp)
		ret_val *= to_exp;
	if (ret_val == 0)
		ret_val = 1;
	return (ret_val);
}

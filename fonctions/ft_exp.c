/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 17:39:54 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/12/14 15:28:50 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

long int ft_exp(int to_exp, int exp)
{
	int ret_val;
	long int stop;

	ret_val = to_exp;
	stop = 1;
	while (++stop <= exp)
		ret_val *= to_exp;
	return (ret_val);
}

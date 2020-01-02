/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_increment_til_text.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/26 12:50:27 by adu-pavi          #+#    #+#             */
/*   Updated: 2020/01/02 08:17:42 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

int	ft_increment_til_text(char *str, unsigned int i)
{
	while (!ft_isprintf_flag(str[i - 1]) && str[i - 1] != '\0')
		i++;
	return (i);
}

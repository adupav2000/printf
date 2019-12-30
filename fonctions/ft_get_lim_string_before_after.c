/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_lim_string_before_after.c                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/29 16:40:27 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/12/29 16:43:30 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_get_lim_string_before_after(char *str)
{
	int i;

	i = 0;
	while (!(ft_isprintf_flag(str[i])))
	{
		if (str[i] == '-')
			return (1);
		i++;
	}
	return (0);
}
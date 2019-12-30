/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_lim_string_max.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/29 17:02:03 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/12/30 11:34:23 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_get_lim_string_max(char *str)
{
	int i;

	i = 0;
	while (!(ft_isprintf_flag(str[i])) && str[i] != '.' && !ft_isdigit(str[i]))
		i++;
	while (ft_isdigit(str[i]))
		i++;
	if (str[i] == '.')
	{
		i++;
		if (ft_isalpha(str[i]))
			return (ft_atoi(&str[i]));
	}
	return (0);
}
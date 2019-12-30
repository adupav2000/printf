/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_lim_string_min.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/29 16:43:56 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/12/30 11:57:41 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_get_lim_string_min(char *str)
{
	int i;
	int ret_val;

	i = 0;
	ret_val = 0;
	while (!(ft_isprintf_flag(str[i])) && str[i] != '.' && !ft_isdigit(str[i]))
		i++;
	if (ft_isdigit(str[i]))
		ret_val = ft_atoi(&str[i]);
	while (ft_isdigit(str[i]))
		i++;
	if (str[i] == '.' && (ft_isprintf_flag(str[i + 1]) ||
		ft_isdigit(str[i + 1])))
		return (ret_val);
	return (0);
}
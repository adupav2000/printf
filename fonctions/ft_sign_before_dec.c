/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sign_before_dec.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/28 18:15:45 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/12/29 11:39:30 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_sign_before_dec(char *str, void *content)
{
	char	ret_val;
	int		i;

	ret_val = '\0';
	i = 0;
	if (str[i] == '%')
		i++;
	while (str[i] != 'd' && str[i] != 'i')
	{
		if (ret_val != '+' && str[i] == ' ')
			ret_val = ' ';
		if (str[i] == '+')
			ret_val = '+';
		i++;
	}
	return (ret_val);
}

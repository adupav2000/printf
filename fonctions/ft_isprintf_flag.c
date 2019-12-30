/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprintf_flag.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/29 16:38:30 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/12/29 16:40:03 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_isprintf_flag(char to_check)
{
	return (to_check == 'c' ||
		to_check == 's' ||
		to_check == 'p' ||
		to_check == 'd' ||
		to_check == 'i' ||
		to_check == 'u' ||
		to_check == 'x' ||
		to_check == 'X' ||
		to_check == 'c');
}
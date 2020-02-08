/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 15:14:00 by adu-pavi          #+#    #+#             */
/*   Updated: 2020/02/08 17:39:54 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

/*
0. nothing
1. conv dec
2. unsigned dec
3. string
4. char
5. hexa en minuscule
6. hexa en majuscule
7. hexa from void
*/

int ft_printf(const char *str, ...)
{
    va_list         va[2];
    char            tmp[200000];
    unsigned int    tmp_count;
    unsigned int    str_count;
    char            *changed_str;

    define_conv_ptr();
    tmp_count = 0;
    str_count = 0;
    tmp[0] = '\0';
    va_start(va[0], str);
    // va_copy(va[0], va[1]);
    // ft_strlcat(changed_str, ft_handle_stars(str, va[1]),
    //     ft_strlen(ft_handle_stars(str, va[1])));
    while (str[str_count])
    {
        if(str[str_count] == '%')
        {
            // if (ft_flag_with_flag(str))
            ft_strcat(tmp,
                (((ftab)[ret_type((char *)&str[str_count])]
                ((char *)&str[str_count], va_arg(va[0], void *)))));
            str_count = ft_increment_til_text((char *)str, str_count);
            tmp_count = ft_strlen(tmp);
        }
        if (str[str_count] != '\0' && str[str_count] != '%')
        {
            tmp[tmp_count++] = str[str_count];
            str_count++;
        }
    }
    va_end(va[0]);
    ft_putstr_fd(tmp, 1);
    return (ft_strlen(tmp));
}
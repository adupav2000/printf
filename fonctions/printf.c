/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 15:14:00 by adu-pavi          #+#    #+#             */
/*   Updated: 2020/02/16 18:15:52 by adu-pavi         ###   ########.fr       */
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
    ft_bzero(tmp, 200000);
    changed_str = 0;
    va_start(va[0], str);
    va_copy(va[1], va[0]);
    changed_str = ft_strdup((const char *)ft_handle_stars((char *)str, va[1]));
    while (changed_str[str_count])
    {
        if(changed_str[str_count] == '%')
        {
            str = &str[ft_jump_to_next_arg((char *)str, va[0])];
            ft_strcat(tmp,
                (((ftab)[ret_type((char *)&changed_str[str_count])]
                ((char *)&changed_str[str_count], va_arg(va[0], void *)))));
            str_count = ft_increment_til_text((char *)changed_str, str_count);
            tmp_count = ft_strlen(tmp);
        }
        if (changed_str[str_count] != '\0' && changed_str[str_count] != '%')
            tmp[tmp_count++] = changed_str[str_count++];
    }
    va_end(va[0]);
    va_end(va[1]);
    free(changed_str);
    ft_putstr(tmp);
    return (ft_strlen(tmp));
}
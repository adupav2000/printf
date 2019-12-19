/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 15:14:00 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/12/19 16:02:38 by adu-pavi         ###   ########.fr       */
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
7. hexa from void*
*/

int ft_printf(const char *str, ...)
{
    va_type         va;
    va_type         end;
    char            *tmp;
    void            *tmp_check;
    unsigned int    count;
    unsigned int    tmp_count;
    unsigned int    str_count;
    
    define_conv_ptr();
    tmp_count = 0;
    str_count = 0;
    va_start(va, end);
    while (str[str_count])
    {
        if(str[str_count] == '%')
        {
            ft_strlcat(tmp, 
                (*(ftab[ret_type(str[str_count])]
                (str[str_count], va_arg(va, void)))));
            str_count++;
            while (!(ft_is_used_letter(str[str_count])))
                str_count++;
            str_count++;
            tmp_count = ft_strlen(tmp);
        }
        if (str[str_count] != '\0' && str[str_count] != '%')
            tmp[tmp_count++] = str[str_count];
    }
    va_end(va);
    ft_putstr();
    return (0);
}

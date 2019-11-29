/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 15:14:00 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/11/29 20:02:53 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

typedef char *(*fptr)(char *, void *);
fptr ftab[8];

int ft_printf(const char *str, ...)
{
    va_type va;
    va_type end;
    char *tmp;
    void *tmp_check;
    unsigned int count;
    unsigned int tmp_count;
    unsigned int str_count;
    define_conv_ptr();

    tmp_count = 0;
    str_count = 0;
    va_start(va, end);
    while (str[str_count])
    {
        if(str[str_count] == '%')
        {

            ft_strlcat(tmp, 
                (*(ftab[ret_type(str)])(str[str_count], va_arg(va, void))));
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

//if the letter should be interpreted
int ft_is_used_letter(char c)
{
    return ((c == 'c' | c == 's'| c == 'p' | c == 'd' | c == 'i' | c == 'u' |
        c == 'x' | c == 'X'));
}


void define_conv_ptr()
{
    ftab[0] = &conv_nothing;
    ftab[1] = &conv_dec;
    ftab[2] = &conv_unsigned_dec;
    ftab[3] = &conv_string;
    ftab[4] = &conv_char;
    ftab[5] = &conv_min_hex;
    ftab[6] = &conv_maj_hex;
    ftab[7] = &conv_hexa_from_void;
}

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


int ret_type(char *str)
{
    int ret_val;
    unsigned int i;

    i = 1;
    if (*(str + i) == 's')
            return (3);
    if (*(str + i) == 'c')
        return (4);
    if (*(str + i) == '.')
        while ((ft_isdigit(*(str + ++i))))
        if (*(str + i) == 'd')
            return (1);
        if (*(str + i) == 'u' && *(str + i + 1) == 'd')
            return (2);
        if (*(str + i) == 'x')
            return (5);
        if (*(str + i) == 'X')
            return (6);
        if (*(str + i) == 'p')
            return (6);
        else
            return (7);
}

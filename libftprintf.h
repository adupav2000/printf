/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 19:25:01 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/12/14 16:18:02 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
#define LIBFTPRINTF_H
#include <stdarg.h>
# include <string.h>
# include <stdlib.h>
# include <unistd.h>

typedef char *(*fptr)(char *, void *);
fptr ftab[8];

int     ft_printf(const char *str, ...);

int     ret_type(char *str);
long int ft_exp(int to_exp, int exp);

char    *conv_nothing(char *str, void *content);
char    *conv_dec(char *str, void *content);
char    *conv_unsigned_dec(char *str, void *content);
char    *conv_string(char *str, void *content);
char    *conv_char(char *str, void *content);
char    *conv_min_hex(char *str, void *content);
char    *conv_maj_hex(char *str, void *content);
char    *conv_hexa_from_void(char *str, void *content);

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 19:25:01 by adu-pavi          #+#    #+#             */
/*   Updated: 2019/11/29 20:00:56 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef LIBFTPRINTF_H
#define LIBFTPRINTF_H
#include <stdarg.h>

typedef char *(*fptr)(char *, void *);
fptr ftab[8];

int     ft_printf(const char *str, ...);

int     ret_type(char *str);

char    *conv_nothing(char *str, void *content);
char    *conv_dec(char *str, void *content);
char    *conv_unsigned_dec(char *str, void *content);
char    *conv_string(char *str, void *content);
char    *conv_char(char *str, void *content);
char    *conv_min_hex(char *str, void *content);
char    *conv_maj_hex(char *str, void *content);
char    *conv_hexa_from_void(char *str, void *content);


#endif
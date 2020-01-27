/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 19:25:01 by adu-pavi          #+#    #+#             */
/*   Updated: 2020/01/27 05:23:24 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
#define LIBFTPRINTF_H
# include <stdarg.h>
# include <string.h>
# include <stdlib.h>
# include <unistd.h>

typedef char *(*fptr)(char *, void *);
fptr ftab[8];

typedef int (*fctlen)(char * , void *);
fctlen ft_len[8];

enum {
	true,
	false
};

int     		ft_printf(const char *str, ...);

char			*ft_rev_str(char *str_to_rev);
int 			ft_is_used_letter(char c);
void 			define_conv_ptr();
int     		ret_type(char *str);
unsigned	int	ft_exp(int to_exp, int exp);
int				ft_isprintf_flag(char to_check);

int				ft_get_lim_string_max(char *str);
int				ft_get_lim_string_min(char *str);
int				ft_get_lim_string_before_after(char *str);
int				ft_isprintf_flag(char to_check);
char 			*ft_shift_char_in_string(char *string, unsigned int shift_lim);

int 			ft_get_int_len(int num);
char			*conv_from_base(unsigned int num, char *base);
int 			ft_increment_til_text(char *str, unsigned int i);
char			*ft_sign_before_dec(char *str, void *content);
int             ft_get_len_conv_dec(char *str, void *content);
int				ft_printfflag_has_max(char *str);
int				ft_printfflag_has_min(char *str);

char    		*conv_nothing(char *str, void *content);
char    		*conv_dec(char *str, void *content);
char    		*conv_unsigned_dec(char *str, void *content);
char    		*conv_string(char *str, void *content);
char    		*conv_char(char *str, void *content);
char    		*conv_min_hex(char *str, void *content);
char    		*conv_maj_hex(char *str, void *content);
char    		*conv_hexa_from_void(char *str, void *content);

void			*ft_memalloc(size_t size);
void			ft_memdel(void **ap);
char			*ft_strcat(char *s1, const char *s2);
void			ft_strclr(char*s);
char			*ft_stpcpy(char *dst, const char *src);
void			ft_strdel(char **as);
char			*ft_strdup(const char *s1);
char			*ft_strnew(size_t size);
int				ft_strequ(char const *s1, char const *s2);
void			ft_striter(char *s, void (*f)(char *));
void			ft_striteri(char *s, void (*f)(unsigned int, char *));
char			*ft_strmap(char const *s, char (*f)(char));
char			*ft_strncat(char *s1, const char *s2, size_t n);
char			*ft_strncpy(char *dst, const char *src, size_t len);
int				ft_strnequ(char const *s1, char const *s2, size_t n);
size_t			ft_strnlen(const char *s, size_t maxlen);
char			*ft_strstr(const char *haystack, const char *needle);
char			*ft_strsub(char const *s, unsigned int start, size_t len);

void			*ft_memset(void *b, int c, size_t len);
void			ft_bzero(void *s, size_t n);

void			*ft_memcpy(void *destination, const void *source, size_t n);
void			*ft_memccpy(void *dst, const void *src, int c, size_t n);

void			*ft_memmove(void *dst, const void *src, size_t len);
void			*ft_memchr(const void *s, int c, size_t n);
int				ft_memcmp(const void *s1, const void *s2, size_t n);

size_t			ft_strlen(const char *s);
unsigned int	ft_strlenopt(const char *str, const char c);
size_t			ft_strlenstropt(const char *str, const char *set);

int				ft_isalpha(int c);
int				ft_isdigit(int c);
int				ft_isalnum(int c);
int				ft_isascii(int c);
int				ft_isprint(int c);
int				ft_islower(int c);
int				ft_isupper(int c);
int				ft_isspace(char s);

int				ft_tolower(int c);
int				ft_toupper(int c);

char			*ft_strchr(const char *s, int c);
char			*ft_strrchr(const char *s, int c);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
size_t			ft_strlcpy(char *restrict dst,
		const char *restrict src, size_t dstsize);
size_t			ft_strlcat(char *dst, const char *src, size_t dstsize);
char			*ft_strnstr(const char *haystack,
		const char *needle, size_t len);
int				ft_atoi(const char *str);

void			*ft_calloc(size_t count, size_t size);

char			*ft_substr(char const *s, unsigned int start, size_t len);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strtrim(char const *s1, char const *set);

char			**ft_split(char const *s, char c);
unsigned	int	ft_get_int_char_length(int i);
char			*ft_itoa(int n);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char const *s, int fd);
void			ft_putnbr_fd(int n, int fd);
void			ft_putendl_fd(char *s, int fd);
void    		ft_putstr(char const *s);
void			ft_putchar(char c);
void			ft_putendl(char const *s);
unsigned int	ft_str_count_opt(char *str, char c);
int				ft_occures_in_set(char c, char const *set);

#endif

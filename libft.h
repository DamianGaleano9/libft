/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmazo-ga <dmazo-ga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 20:03:17 by dmazo-ga          #+#    #+#             */
/*   Updated: 2024/11/01 13:01:30 by dmazo-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stddef.h>
# include <stdlib.h>
# include <limits.h>
# include <unistd.h>
# include <stdio.h>

void				*ft_memset(void *inp, int val, size_t bytes);
size_t				ft_strlen(const char *c);
void				ft_bzero(void *s, size_t n);
int					ft_atoi(const char *nptr);
int					ft_isalpha(int c);
int					ft_isascii(int c);
int					ft_isdigit(int c);
int					ft_isalnum(int c);
int					ft_isprint(int c);
void				*ft_memchr(const void *ptr, int value, size_t num);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
void				*ft_memcpy(void *des, const void *org, size_t bytes);
void				*ft_memmove(void *des, const void *org, size_t bytes);
char				*ft_strchr(const char *str, int c);
size_t				ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t				ft_strlcpy(char *des, const char *org, size_t destsize);
int					ft_strncmp(const char *str1, const char *str2, size_t n);
char				*ft_strnstr(const char *haystack,
						const char *needle, size_t len);
int					ft_tolower(int c);
int					ft_toupper(int c);
void				ft_putstr_fd(char *s, int fd);
void				ft_putchar_fd(char c, int fd);
void				ft_putnbr_fd(int n, int fd);
void				ft_putendl_fd(char *str, int fd);
void				*ft_calloc(size_t num, size_t size_ele);
char				*ft_strdup(const char *o);
char				*ft_itoa(int n);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_substr(char const *s, unsigned int start, size_t len);
char				*ft_strmapi(char *s, char (*f)(unsigned int, char));
char				*ft_strtrim(char const *s1, char const *set);
char				**ft_split(const char *s, char delim);
void				ft_striteri(char *s, void (*f)(unsigned int, char*));

#endif

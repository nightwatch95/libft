/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjacks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 14:52:43 by vjacks            #+#    #+#             */
/*   Updated: 2018/12/04 20:01:59 by vjacks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <stdlib.h>
# include <errno.h>

void	*ft_memalloc(size_t size);

void	ft_memdel(void **ap);

char	*ft_strnew(size_t size);

void	ft_strdel(char **as);

void	*ft_memset(void *str, int c, size_t n);

void	ft_bzero(void *s, size_t n);

void	*ft_memcpy(void *dest, const void *source, size_t count);

void	*ft_memccpy(void *dst, const void *src, int c, size_t n);

void	*ft_memmove(void *dst, const void *src, size_t len);

void	*ft_memchr(const void *s, int c, size_t n);

int		ft_memcmp(const void *s1, const void *s2, size_t n);

int		ft_strcmp(const char *s1, const char *s2);

int		ft_strncmp(const char *s1, const char *s2, size_t n);

size_t	ft_strlen(const char *s);

char	*ft_strdup(const char *s1);

char	*ft_strcpy(char *dst, const char *src);

char	*ft_strncpy(char *dst, const char *src, size_t len);

int		ft_toupper(int c);

int		ft_tolower(int c);

int		ft_isdigit(int c);

int		ft_isalpha(int c);

int		ft_isalnum(int c);

int		ft_isascii(int c);

int		ft_isprint(int c);

char	*ft_strcat(char *restrict s1, const char *restrict s2);

char	*ft_strncat(char *restrict s1, const char *restrict s2, size_t n);

char	*ft_strstr(const char *haystack, const char *needle);

char	*ft_strnstr(const char *s1, const char *s2, size_t len);

char	*ft_strchr(const char *s, int c);

size_t  ft_strlcat(char *s1, const char *s2, size_t size);

#endif

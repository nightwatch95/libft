/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjacks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/07 17:36:20 by vjacks            #+#    #+#             */
/*   Updated: 2018/12/07 22:10:20 by vjacks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	count_words(char const *s, char c)
{
	size_t words;

	words = 0;
	while (*s != '\0' && s)
	{
		if (*s == c)
			s++;
		else
		{
			words++;
			while (*s != c)
				s++;
		}
	}
	return (words);
}

void	free_arr_str(char **buf, size_t w)
{
	size_t	i;

	i = 0;
	while (i < w)
	{
		free(buf[i]);
		i++;
	}
	free(buf);
}

char	**get_array_str(char **buf, const char *s, char c, size_t w)
{
	size_t i;
	size_t j;

	j = 0;
	buf[w] = NULL;
	while (*s != '\0' && j < w)
	{
		if (*s == c)
			s++;
		else
		{
			i = 0;
			while (s[i] != c && s[i])
				i++;
			if (!(buf[j] = ft_strnew(i)))
			{
				free_arr_str(buf, j);
				return (NULL);
			}
			ft_strncpy(buf[j], s, i);
			++j;
			s += i;
		}
	}
	return (buf);
}

char	**ft_strsplit(char const *s, char c)
{
	size_t	words;
	char	**buf;

	if (!s)
		return (NULL);
	words = count_words(s, c);
	buf = NULL;
	if ((buf = (char **)malloc((words + 1) * sizeof(char *))))
	{
		buf = get_array_str(s, c, words);
	}
	return (buf);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjacks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/07 17:36:20 by vjacks            #+#    #+#             */
/*   Updated: 2018/12/12 21:18:45 by vjacks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**get_array_str(char **buf, const char *s, char c, size_t w)
{
	size_t i;
	size_t j;

	j = 0;
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
				buf[j] = NULL;
				free_arr_str(buf);
				return (NULL);
			}
			ft_strncpy(buf[j], s, i);
			++j;
			s += i;
		}
	}
	return (buf);
}

char		**ft_strsplit(char const *s, char c)
{
	size_t	words;
	char	**buf;

	if (!s)
		return (NULL);
	words = count_words(s, c);
	buf = NULL;
	if ((buf = (char **)malloc((words + 1) * sizeof(char *))))
	{
		buf = get_array_str(buf, s, c, words);
		buf[words] = NULL;
	}
	return (buf);
}

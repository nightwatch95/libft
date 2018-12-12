/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_words.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjacks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/10 21:18:46 by vjacks            #+#    #+#             */
/*   Updated: 2018/12/12 22:06:10 by vjacks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	count_words(char const *s, char c)
{
	size_t words;

	words = 0;
	while (s && *s != '\0')
	{
		if (*s == c)
			s++;
		else
		{
			words++;
			while (*s != c && *s)
				s++;
		}
	}
	return (words);
}

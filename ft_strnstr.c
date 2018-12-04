/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjacks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 18:00:51 by vjacks            #+#    #+#             */
/*   Updated: 2018/12/04 18:36:43 by vjacks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	if (*s2 == '\0')
		return ((char *)s1);
	while (i < len && s1[i] != '\0')
	{
		j = 0;
		while ((i + j) < len && s1[i + j] == s2[j] && s2[j] != '\0')
			j++;
		if (s2[j] == '\0')
			return (char *)(s1 + i);
		i++;
	}
	return (NULL);
}

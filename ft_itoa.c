/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjacks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/08 16:15:01 by vjacks            #+#    #+#             */
/*   Updated: 2018/12/08 21:15:38 by vjacks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int		size;
	char	*res;

	size = count_chars_num(n);
	res = NULL;
	if ((res = ft_strnew(size)))
	{
		fill_itoa(res, n);
	}
	return (res);
}

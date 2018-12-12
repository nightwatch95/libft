/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_arr_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjacks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/10 21:20:26 by vjacks            #+#    #+#             */
/*   Updated: 2018/12/10 21:22:45 by vjacks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

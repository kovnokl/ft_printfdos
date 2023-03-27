/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knickel <knickel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 23:30:33 by knickel           #+#    #+#             */
/*   Updated: 2022/10/18 23:00:10 by knickel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dsize)
{
	size_t	counter;

	counter = 0;
	if (dsize > 0)
	{
		while (src[counter] && counter < (dsize - 1))
		{
			dst[counter] = src[counter];
			counter++;
		}
		dst[counter] = 0;
	}
	while (src[counter])
		counter++;
	return (counter);
}

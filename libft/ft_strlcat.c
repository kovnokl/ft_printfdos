/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knickel <knickel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 23:13:21 by knickel           #+#    #+#             */
/*   Updated: 2022/10/19 04:14:38 by knickel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	counter;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	counter = 0;
	if (dsize > 0 && dst_len < dsize - 1)
	{
		while (dst_len + counter < dsize - 1 && src[counter])
		{
			dst[dst_len + counter] = src[counter];
			counter++;
		}
		dst[dst_len + counter] = 0;
	}
	if (dst_len >= dsize)
		return (dsize + src_len);
	return (dst_len + src_len);
}

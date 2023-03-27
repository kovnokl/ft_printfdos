/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knickel <knickel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 14:43:13 by knickel           #+#    #+#             */
/*   Updated: 2022/12/02 16:47:57 by knickel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "string.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*cdest;
	char	*csrc;
	size_t	counter;

	if (dst == src)
		return (dst);
	cdest = (char *)dst;
	csrc = (char *)src;
	counter = 0;
	while (counter < len)
	{
		if (src < dst)
			cdest[len - counter - 1] = csrc[len - counter - 1];
		else
			cdest[counter] = csrc[counter];
		counter++;
	}
	return (dst);
}

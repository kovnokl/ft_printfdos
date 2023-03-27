/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knickel <knickel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 12:44:07 by knickel           #+#    #+#             */
/*   Updated: 2022/12/02 16:45:52 by knickel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*cdest;
	char	*csrc;
	size_t	counter;

	if (dest == src)
		return (dest);
	cdest = (char *)dest;
	csrc = (char *)src;
	counter = 0;
	while (counter < n)
	{
		cdest[counter] = csrc[counter];
		counter++;
	}
	return (dest);
}

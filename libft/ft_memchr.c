/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knickel <knickel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 18:36:04 by knickel           #+#    #+#             */
/*   Updated: 2022/10/17 16:50:51 by knickel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ucs;
	unsigned char	ucc;
	size_t			counter;

	ucs = (unsigned char *)s;
	ucc = (unsigned char)c;
	counter = 0;
	while (counter < n)
	{
		if (ucs[counter] == ucc)
			return (&ucs[counter]);
		counter++;
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knickel <knickel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 19:08:40 by knickel           #+#    #+#             */
/*   Updated: 2022/12/02 17:18:56 by knickel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*ucs1;
	const unsigned char	*ucs2;
	size_t				counter;

	ucs1 = (const unsigned char *)s1;
	ucs2 = (const unsigned char *)s2;
	counter = 0;
	while (counter < n)
	{
		if (ucs1[counter] != ucs2[counter])
			return (ucs1[counter] - ucs2[counter]);
		counter++;
	}
	return (0);
}

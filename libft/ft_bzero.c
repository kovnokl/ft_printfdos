/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knickel <knickel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 18:31:14 by knickel           #+#    #+#             */
/*   Updated: 2022/11/02 19:18:27 by knickel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char			*cs;
	unsigned long	counter;

	cs = (char *)s;
	counter = 0;
	while (counter < n)
	{
		cs[counter] = 0;
		counter++;
	}
}

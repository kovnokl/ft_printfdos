/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knickel <knickel@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 12:26:14 by knickel           #+#    #+#             */
/*   Updated: 2023/03/27 12:44:36 by knickel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ptrputhex(size_t ptr, int fd)
{
	static const char	*base = "0123456789abcdef";
	int					return_val;

	if (ptr != 0)
	{
		if (ptrputhex(ptr / 16, fd))
			return (write(fd, &base[ptr % 16], 1));
		else
			return (0);
	}
	else
		return (1);
}

int	iputhex(int ptr)
{
	
}

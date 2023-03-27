/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knickel <knickel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 12:26:14 by knickel           #+#    #+#             */
/*   Updated: 2023/03/27 17:58:15 by knickel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	longputhex(unsigned long val, int uphex, int fd)
{
	const char	*lowbase = "0123456789abcdef";
	const char	*upbase = "0123456789ABCDEF";
	char		*base;
	int			printed_chars;

	if (uphex)
		base = (char *)lowbase;
	else
		base = (char *)upbase;
	if (val > 15)
	{
		printed_chars = longputhex(val / 16, uphex, fd);
		return (printed_chars + write(fd, &base[val % 16], 1));
	}
	else
		return (write(fd, &base[val], 1));
}

int	intputhex(unsigned int val, int uphex, int fd)
{
	const char	*lowbase = "0123456789abcdef";
	const char	*upbase = "0123456789ABCDEF";
	char		*base;
	int			printed_chars;

	if (uphex)
		base = (char *)lowbase;
	else
		base = (char *)upbase;
	if (val >= 16)
	{
		printed_chars = intputhex(val / 16, uphex, fd);
		return (printed_chars + write(fd, &base[val % 16], 1));
	}
	else
		return (write(fd, &base[val], 1));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knickel <knickel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 22:12:56 by knickel           #+#    #+#             */
/*   Updated: 2023/03/27 17:06:34 by knickel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
		return ;
	}
	if (n < 0)
	{
		n *= -1;
		ft_putchar_fd('-', fd);
	}
	if (n < 10)
		ft_putchar_fd('0' + n, fd);
	else
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd('0' + n % 10, fd);
	}
}

int	ft_putsignednbr(int n, int fd)
{
	int		printed_chars;
	char	c;

	if (n == -2147483648)
		return (write(fd, "-2147483648", 11));
	if (n < 0)
	{
		n *= -1;
		write(fd, "-", 1);
		printed_chars = ft_putsignednbr(n, fd);
		return (printed_chars + 1);
	}
	if (n > 9)
	{
		printed_chars = ft_putsignednbr(n / 10, fd);
		c = '0' + n % 10;
		return (printed_chars + write(fd, &c, 1));
	}
	else
	{
		c = '0' + n;
		return (write(fd, &c, 1));
	}
}

unsigned int	ft_putunsignednbr(unsigned int n, int fd)
{
	int		printed_chars;
	char	c;

	if (n > 9)
	{
		printed_chars = ft_putsignednbr(n / 10, fd);
		c = '0' + n % 10;
		return (printed_chars + write(fd, &c, 1));
	}
	else
	{
		c = '0' + n;
		return (write(fd, &c, 1));
	}
}

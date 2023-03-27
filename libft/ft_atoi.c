/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knickel <knickel@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 13:35:52 by knickel           #+#    #+#             */
/*   Updated: 2022/12/02 18:21:18 by knickel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isspace(char c);

int	ft_atoi(const char *str)
{
	int		value;
	int		negative;
	size_t	counter;

	value = 0;
	negative = 1;
	counter = 0;
	while (ft_isspace(str[counter]))
		counter ++;
	if (str[counter] == '-')
	{
		negative = -1;
		counter++;
	}
	else if (str[counter] == '+')
		counter++;
	while (str[counter] >= '0' && str[counter] <= '9')
	{
		value *= 10;
		value += str[counter] - '0';
		counter++;
	}
	return (value * negative);
}

int	ft_isspace(char c)
{
	return (c == ' ' || c == '\t' || c == '\n'
		|| c == '\f' || c == '\r' || c == '\v');
}

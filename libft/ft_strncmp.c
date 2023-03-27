/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knickel <knickel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 00:19:46 by knickel           #+#    #+#             */
/*   Updated: 2022/10/19 04:48:58 by knickel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while ((*s1 || *s2) && n > 0)
	{
		if ((unsigned char)*s1 < (unsigned char)*s2)
			return (-1);
		if ((unsigned char)*s1 > (unsigned char)*s2)
			return (1);
		s1++;
		s2++;
		n--;
	}
	return (0);
}

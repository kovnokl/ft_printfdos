/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knickel <knickel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 22:15:21 by knickel           #+#    #+#             */
/*   Updated: 2022/10/18 16:08:56 by knickel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dup;
	size_t	str_counter;

	str_counter = 0;
	while (s1[str_counter])
		str_counter++;
	dup = (char *)malloc(sizeof(char) * (str_counter + 1));
	if (!dup)
		return (0);
	str_counter = 0;
	while (s1[str_counter])
	{
		dup[str_counter] = s1[str_counter];
		str_counter++;
	}
	dup[str_counter] = 0;
	return (dup);
}

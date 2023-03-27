/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knickel <knickel@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 18:30:11 by knickel           #+#    #+#             */
/*   Updated: 2023/03/21 06:45:12 by knickel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	counter;

	str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!str)
		return (NULL);
	counter = 0;
	while (s1[counter])
	{
		str[counter] = s1[counter];
		counter++;
	}
	while (s2[counter - ft_strlen(s1)])
	{
		str[counter] = s2[counter - ft_strlen(s1)];
		counter++;
	}
	str[counter] = 0;
	return (str);
}

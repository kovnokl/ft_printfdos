/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knickel <knickel@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 23:48:05 by knickel           #+#    #+#             */
/*   Updated: 2022/12/02 18:21:57 by knickel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needle_size;
	size_t	counter;

	needle_size = ft_strlen(needle);
	if (needle_size == 0)
		return ((char *)haystack);
	if (len > ft_strlen(haystack))
		len = ft_strlen(haystack);
	counter = 0;
	while (counter + needle_size <= len && haystack[counter] != 0)
	{
		if (len < needle_size || len == 0)
			return (NULL);
		if (ft_strncmp(&haystack[counter], needle, needle_size) == 0)
			return ((char *)&haystack[counter]);
		counter++;
	}
	return (NULL);
}

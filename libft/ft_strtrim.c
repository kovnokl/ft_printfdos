/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knickel <knickel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 22:38:32 by knickel           #+#    #+#             */
/*   Updated: 2022/10/18 00:59:09 by knickel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;

	start = 0;
	end = ft_strlen(s1) - 1;
	while (s1[start])
	{
		if (ft_strchr(set, s1[start]))
			start++;
		else
			break ;
	}
	while (end >= start)
	{
		if (ft_strchr(set, s1[end]))
			end--;
		else
			break ;
	}
	return (ft_substr(s1, start, end - start + 1));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knickel <knickel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 19:13:14 by knickel​​​​       #+#    #+#             */
/*   Updated: 2022/12/02 15:26:23 by knickel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	count_substrs(const char *s, char c);
void	iterate_subs(char **substrings, size_t sub_cnt, const char *s, char c);
char	**empty_list(void);
void	delete_list(char **substrings, size_t input_cnt);

char	**ft_split(char const *s, char c)
{
	char	**substrings;
	size_t	sub_cnt;

	if (s == NULL)
		return (empty_list());
	sub_cnt = count_substrs(s, c);
	substrings = (char **)malloc(sizeof(char *) * (sub_cnt + 1));
	if (substrings == NULL)
		return (NULL);
	substrings[sub_cnt] = NULL;
	if (sub_cnt > 0)
		iterate_subs(substrings, sub_cnt, s, c);
	return (substrings);
}

size_t	count_substrs(const char *s, char c)
{
	size_t	sub_amount;
	size_t	str_len;
	size_t	counter;

	str_len = ft_strlen(s);
	sub_amount = 0;
	counter = 0;
	if (str_len != 0 && s[0] && s[0] != c)
		sub_amount++;
	while (counter + 1 < str_len)
	{
		if (s[counter] == c && s[counter + 1] != c)
			sub_amount++;
		counter++;
	}
	return (sub_amount);
}

void	iterate_subs(char **substrings, size_t sub_cnt, const char *s, char c)
{
	size_t	counter;
	size_t	str_pos;
	size_t	str_len;

	counter = 0;
	str_pos = 0;
	while (s[str_pos] == c)
		str_pos++;
	while (counter < sub_cnt)
	{
		str_len = 0;
		while (s[str_pos + str_len] != c && s[str_pos + str_len] != 0)
			str_len++;
		substrings[counter] = ft_substr(s, str_pos, str_len);
		if (substrings[counter] == NULL)
		{
			delete_list(substrings, counter);
			break ;
		}
		str_pos += str_len + 1;
		while (counter + 1 < sub_cnt && s[str_pos] == c)
			str_pos++;
		counter++;
	}
}

char	**empty_list(void)
{
	char	**empty_list;

	empty_list = (char **)malloc(sizeof(char *));
	empty_list[0] = NULL;
	return (empty_list);
}

void	delete_list(char **substrings, size_t input_cnt)
{
	size_t	counter;

	counter = 0;
	while (counter < input_cnt)
	{
		free(substrings[counter]);
		counter++;
	}
	free(substrings);
	substrings = NULL;
}

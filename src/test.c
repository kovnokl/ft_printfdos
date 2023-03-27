/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knickel <knickel@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 12:28:18 by knickel           #+#    #+#             */
/*   Updated: 2023/03/27 14:58:59 by knickel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../libs/libft/libft.h"

int	main(void)
{
	char c = 'c';

	write(1, "0x", 2);
	ptrputhex((size_t)&c, 1);
	printf("%p", &c);
}

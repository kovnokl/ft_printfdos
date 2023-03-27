/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_types_1.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knickel <knickel@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 13:03:30 by knickel           #+#    #+#             */
/*   Updated: 2023/03/27 12:14:23 by knickel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "print_types.h"

int	handle_print_char(va_list *vars)
{
	char	c;

	c = va_arg(*vars, char);
	return (write(1, &c, 1));
}

int	handle_print_string(va_list *vars)
{
	char	*str;

	str = va_arg(*vars, char *);
	return (write(1, str, ft_strlen(str)));
}

int	handle_print_voidptr(va_list *vars)
{
	
}

int	handle_print_decimal(va_list *vars)
{
	
}

int	handle_print_int(va_list *vars)
{
	
}

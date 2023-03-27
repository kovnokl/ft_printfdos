/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knickel <knickel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 06:21:44 by knickel           #+#    #+#             */
/*   Updated: 2023/03/24 14:25:40 by knickel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	vars;
	char	*str_ptr;

	str_ptr = str;
	va_start(vars, str);
	str_ptr = ft_strchr(str_ptr, '%') + 1;
	while (str_ptr != NULL)
	{
		if (!ft_print_by_type(*str_ptr, &vars))
			return (0);
		str_ptr = ft_strchr(str_ptr, '%') + 1;
	}
	va_end(vars);
}

int	ft_print_by_type(const char c, va_list *vars)
{
	if (c == 'c')
		return (handle_print_char(vars));
	else if (c == 's')
		return (handle_print_string(vars));
	else if (c == 'p')
		return (handle_print_voidptr(vars));
	else if (c == 'd')
		return (handle_print_decimal(vars));
	else if (c == 'i')
		return (handle_print_int(vars));
	else if (c == 'u')
		return (handle_print_uint(vars));
	else if (c == 'x')
		return (handle_print_lowhex(vars));
	else if (c == 'X')
		return (handle_print_uphex(vars));
	else if (c == '%')
		return (write(1, "%", 1));
	else
		return (0);
}

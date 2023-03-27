/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knickel <knickel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 06:21:44 by knickel           #+#    #+#             */
/*   Updated: 2023/03/27 17:58:29 by knickel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	vars;
	char	*str_ptr;
	char	*prev_ptr;

	va_start(vars, str);
	str_ptr = ft_strchr(str, '%');
	prev_ptr = (char *)str;
	return (loop_str(str_ptr, prev_ptr, &vars));
}

int	loop_str(char *str_ptr, char *prev_ptr, va_list *vars)
{
	int		printed_chars;
	int		total_chars;

	total_chars = 0;
	while (str_ptr != NULL && str_ptr[1] != 0)
	{
		printed_chars = write(1, prev_ptr, str_ptr - prev_ptr);
		if (printed_chars < 0)
			return (printed_chars);
		total_chars += printed_chars;
		printed_chars = ft_print_by_type(str_ptr[1], vars);
		if (printed_chars < 0)
			return (printed_chars);
		total_chars += printed_chars;
		prev_ptr = str_ptr + 2;
		str_ptr = ft_strchr(str_ptr + 1, '%');
	}
	printed_chars = write(1, prev_ptr, ft_strlen(prev_ptr));
	if (printed_chars < 0)
		return (printed_chars);
	total_chars += printed_chars;
	va_end(*vars);
	return (total_chars);
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
	return (0);
}

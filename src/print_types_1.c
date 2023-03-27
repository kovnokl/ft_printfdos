/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_types_1.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knickel <knickel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 13:03:30 by knickel           #+#    #+#             */
/*   Updated: 2023/03/27 18:33:20 by knickel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/print_types.h"

int	handle_print_char(va_list *vars)
{
	char	c;

	c = (char)va_arg(*vars, int);
	return (write(1, &c, 1));
}

int	handle_print_string(va_list *vars)
{
	char	*str;

	str = va_arg(*vars, char *);
	if (str == NULL)
		return (write(1, "(null)", 6));
	return (write(1, str, ft_strlen(str)));
}

int	handle_print_voidptr(va_list *vars)
{
	void	*ptr;

	ptr = va_arg(*vars, void *);
	return (write (1, "0x", 2) + longputhex((unsigned long)ptr, LOWHEX, 1));
}

int	handle_print_decimal(va_list *vars)
{
	int	nbr;

	nbr = va_arg(*vars, int);
	return (ft_putsignednbr(nbr, 1));
}

int	handle_print_int(va_list *vars)
{
	int	nbr;

	nbr = va_arg(*vars, int);
	return (ft_putsignednbr(nbr, 1));
}

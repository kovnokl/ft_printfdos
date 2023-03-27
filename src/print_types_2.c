/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_types_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knickel <knickel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 13:04:38 by knickel           #+#    #+#             */
/*   Updated: 2023/03/27 16:57:00 by knickel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "print_types.h"

int	handle_print_uint(va_list *vars)
{
	unsigned int	unbr;

	unbr = va_arg(*vars, unsigned int);
	return (ft_putunsignednbr(unbr, 1));
}

int	handle_print_lowhex(va_list *vars)
{
	int	nbr;

	nbr = va_arg(*vars, int);
	return (intputhex((unsigned int)nbr, LOWHEX, 1));
}

int	handle_print_uphex(va_list *vars)
{
	int	nbr;

	nbr = va_arg(*vars, int);
	return (intputhex((unsigned int)nbr, UPHEX, 1));
}

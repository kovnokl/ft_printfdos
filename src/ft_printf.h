/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knickel <knickel@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 06:12:13 by knickel           #+#    #+#             */
/*   Updated: 2023/03/27 12:49:26 by knickel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "../libs/libft/libft.h"
# include "print_types.h"

int	ft_printf(const char *str, ...);
int	ft_print_by_type(const char c, va_list *vars);

#endif
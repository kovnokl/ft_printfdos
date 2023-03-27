/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_types.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knickel <knickel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 06:31:30 by knickel           #+#    #+#             */
/*   Updated: 2023/03/27 17:55:15 by knickel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINT_TYPES_H
# define PRINT_TYPES_H

# include <unistd.h>
# include <stdarg.h>
# include "../libft/libft.h"

int	handle_print_char(va_list *vars);
int	handle_print_string(va_list *vars);
int	handle_print_voidptr( va_list *vars);
int	handle_print_decimal(va_list *vars);
int	handle_print_int(va_list *vars);
int	handle_print_uint(va_list *vars);
int	handle_print_lowhex(va_list *vars);
int	handle_print_uphex(va_list *vars);

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noyeasmi <noyeasmi@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 16:23:23 by noyeasmi          #+#    #+#             */
/*   Updated: 2025/08/07 18:21:10 by noyeasmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i = 0;
	int		printed = 0;

	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1])
		{
			printed += ft_handle_specifier(format[++i], args);
		}
		else
		{
			ft_putchar(format[i]);
			printed++;
		}
		i++;
	}
	va_end(args);
	return (printed);
}
/* {
	(void)format;
	write(1, "FT_PRINTF IS WORKING\n", 22);
	return (22);
} */
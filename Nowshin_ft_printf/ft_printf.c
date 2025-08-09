/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noyeasmi <noyeasmi@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 16:23:23 by noyeasmi          #+#    #+#             */
/*   Updated: 2025/08/09 12:41:00 by noyeasmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		i = 0;
	int		printed = 0;
	int count =0;

	va_start(ap, format);
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1])
		{
			i++;
			count = ft_handle_specifier(format[i], &ap);
		}
		else
			count = ft_putchar(format[i]);
		if(count == -1)
			return (-1);
		printed += count;
		i++;
	}
	va_end(ap);
	return (printed);
}
/* {
	(void)format;
	write(1, "FT_PRINTF IS WORKING\n", 22);
	return (22);
} */

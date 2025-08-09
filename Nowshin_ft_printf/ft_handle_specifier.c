/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_specifier.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noyeasmi <noyeasmi@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 16:25:51 by noyeasmi          #+#    #+#             */
/*   Updated: 2025/08/09 11:06:13 by noyeasmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_handle_specifier(char specifier, va_list *args)
{
	if (specifier == 'c')
		return (ft_putchar(va_arg(*args, int)));
	if (specifier == 's')
		return (ft_putstr(va_arg(*args, char *)));
	if (specifier == 'p')
		return (ft_putptr(va_arg(*args, void *)));
	if (specifier == 'd' || specifier == 'i')
		return (ft_putnbr(va_arg(*args, int)));
	if (specifier == 'u')
		return (ft_putunbr(va_arg(*args, unsigned int)));
	if (specifier == 'x' || specifier == 'X')
		return (ft_puthex(va_arg(*args, unsigned int), specifier));
	if (specifier == '%')
		return (ft_putchar('%'));
	return (0);
}
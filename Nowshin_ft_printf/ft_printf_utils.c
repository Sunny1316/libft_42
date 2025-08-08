/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noyeasmi <noyeasmi@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 16:26:44 by noyeasmi          #+#    #+#             */
/*   Updated: 2025/08/07 17:13:47 by noyeasmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(char *s)
{
	int	i = 0;

	if (!s)
		return (ft_putstr("(null)"));
	while (s[i])
		write(1, &s[i++], 1);
	return (i);
}

int	ft_putnbr(int n)
{
	long	nb = n;
	int		len = 0;

	if (nb < 0)
	{
		len += ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
		len += ft_putnbr(nb / 10);
	len += ft_putchar(nb % 10 + '0');
	return (len);
}

int	ft_puthex(unsigned int n, char format)
{
	char	*base;
	int		len = 0;

	if (format == 'x')
		base = "0123456789abcdef";
	else if (format == 'X')
		base = "0123456789ABCDEF";
	else
		return (0);
	if (n >= 16)
		len += ft_puthex(n / 16, format);
	len += ft_putchar(base[n % 16]);
	return (len);
}

int	ft_putunbr(unsigned int n)
{
	int	len = 0;

	if (n >= 10)
		len += ft_putunbr(n / 10);
	len += ft_putchar(n % 10 + '0');
	return (len);
}
int	ft_putptr(void *ptr)
{
	unsigned long	addr = (unsigned long)ptr;
	int				len = 0;

	len += ft_putstr("0x");
	if (addr == 0)
		len += ft_putchar('0');
	else
		len += ft_putptr_hex(addr);
	return (len);
}

int	ft_putptr_hex(unsigned long n)
{
	int		len = 0;
	char	*base = "0123456789abcdef";

	if (n >= 16)
		len += ft_putptr_hex(n / 16);
	len += ft_putchar(base[n % 16]);
	return (len);
}
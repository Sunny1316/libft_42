/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noyeasmi <noyeasmi@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 16:26:44 by noyeasmi          #+#    #+#             */
/*   Updated: 2025/08/09 13:02:33 by noyeasmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	if (write(1, &c, 1) == -1)
		return (-1);
	return (1);
}

int	ft_putstr(char *s)
{
	int	i = 0;
	int	res;

	if (!s)
		return (ft_putstr("(null)"));
	while (s[i])
	{
		res = write(1, &s[i], 1);
		if (res == -1)
			return (-1);
		i++;
	}
	return (i);
}

int	ft_putnbr(int n)
{
    long    nb = n;
    int     len = 0;
    int     res;

    if (nb < 0)
    {
        res = ft_putchar('-');
        if (res == -1)
            return (-1);
        len += res;
        nb = -nb;
    }
    if (nb >= 10)
    {
        res = ft_putnbr(nb / 10);
        if (res == -1)
            return (-1);
        len += res;
    }
    res = ft_putchar((nb % 10) + '0');
    if (res == -1)
        return (-1);
    len += res;
    return (len);
}

int	ft_puthex(unsigned int n, char format)
{
    char    *base;
    int     len;
    int     res;

    len = 0;
    if (format == 'x')
        base = "0123456789abcdef";
    else if (format == 'X')
        base = "0123456789ABCDEF";
    else
        return (0);
    if (n >= 16)
    {
        res = ft_puthex(n / 16, format);
        if (res == -1)
            return (-1);
        len += res;
    }
    res = ft_putchar(base[n % 16]);
    if (res == -1)
        return (-1);
    len += res;
    return (len);
}

int	ft_putunbr(unsigned int n)
{
    int len;
    int res;

    len = 0;
    if (n >= 10)
    {
        res = ft_putunbr(n / 10);
        if (res == -1)
            return (-1);
        len += res;
    }
    res = ft_putchar((n % 10) + '0');
    if (res == -1)
        return (-1);
    len += res;
    return (len);
}
int	ft_putptr(void *ptr)
{
	unsigned long	addr;
	int				len;
	int				res;

    addr = (unsigned long)ptr;
    len = 0;
	if (addr == 0)
		return ft_putstr(NULL_PTR);
	res = ft_putstr("0x");
	if (res == -1)
		return -1;
	len += res;
    res = ft_putptr_hex(addr);
	if (res == -1)
		return -1;
	len += res;
    return (len);
}

int	ft_putptr_hex(unsigned long n)
{
	int		    len;
	int         count;
	const char	*base;

    len = 0;
    base = "0123456789abcdef";
	if (n >= 16)
	{
		count =  ft_putptr_hex(n / 16);
		if(count == -1)
			return -1;
		len += count;
	}

	if(ft_putchar(base[n % 16]) == -1)
		return -1;
	len++;
	return (len);
}


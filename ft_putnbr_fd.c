/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdchowdh <mdchowdh@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 16:12:41 by mdchowdh          #+#    #+#             */
/*   Updated: 2025/07/20 16:14:20 by mdchowdh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	c;

	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		n = -n;
	}
	if (n >= 10)
		ft_putnbr_fd(n / 10, fd);
	c = n % 10 + '0';
	write(fd, &c, 1);
}
/* int main(void)
{
	ft_putnbr_fd(42, 1);        // prints: 42
	ft_putnbr_fd(-42, 1);       // prints: -42
	ft_putnbr_fd(12345, 1);     // prints: 12345
	ft_putnbr_fd(-2147483648, 1); // prints: -2147483648
	return 0;
} */
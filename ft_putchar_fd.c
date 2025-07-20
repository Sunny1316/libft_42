/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdchowdh <mdchowdh@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 16:04:03 by mdchowdh          #+#    #+#             */
/*   Updated: 2025/07/20 16:13:06 by mdchowdh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/* int main(void)
{
	ft_putchar_fd('A', 1); // Prints 'A' to the terminal (stdout)
	ft_putchar_fd('\n', 1); // Prints a newline
	return 0;
} */
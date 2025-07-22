/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noyeasmi <noyeasmi@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 13:29:53 by noyeasmi          #+#    #+#             */
/*   Updated: 2025/07/21 13:58:44 by noyeasmi         ###   ########.fr       */
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

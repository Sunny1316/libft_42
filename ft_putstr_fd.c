/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdchowdh <mdchowdh@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 16:09:01 by mdchowdh          #+#    #+#             */
/*   Updated: 2025/07/28 14:25:54 by mdchowdh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	write(fd, s, ft_strlen(s));
}
/* int main(void)
{
	ft_putstr_fd("Hello, 42!\n", 1); // Prints to terminal (stdout)
	return 0;
} */

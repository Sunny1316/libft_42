/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noyeasmi <noyeasmi@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 15:44:05 by noyeasmi          #+#    #+#             */
/*   Updated: 2025/07/22 11:00:10 by noyeasmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
/* #include <stdio.h>

int	main (void)
{
	char	a = 'a';
	char	b = 'B';
	char	d = '3';

	printf ("%d\n", ft_isdigit(a));
	printf ("%d\n", ft_isdigit(b));
	printf ("%d\n", ft_isdigit(d));
	return (0);
} */

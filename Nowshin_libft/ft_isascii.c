/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noyeasmi <noyeasmi@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 15:43:48 by noyeasmi          #+#    #+#             */
/*   Updated: 2025/07/20 23:00:42 by noyeasmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
/* #include <stdio.h>
#include <ctype.h>

int	main (void)
{
	char	a = 'a';
	int	b = 128;
	char	d = '3';

	printf ("%d\n", ft_isascii(a));
	printf ("%d\n", ft_isascii(b));
	printf ("%d\n", ft_isascii(d));
    printf ("%d\n", isascii(a));
	printf ("%d\n", isascii(b));
	printf ("%d\n", isascii(d));
	return (0);
} */

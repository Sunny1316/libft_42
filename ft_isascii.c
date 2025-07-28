/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdchowdh <mdchowdh@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 18:04:34 by mdchowdh          #+#    #+#             */
/*   Updated: 2025/07/28 12:09:32 by mdchowdh         ###   ########.fr       */
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
	int	b = ' ';
	char	d = '3';

	printf ("%d\n", ft_isascii(a));
	printf ("%d\n", ft_isascii(b));
	printf ("%d\n", ft_isascii(d));
    printf ("%d\n", isascii(a));
	printf ("%d\n", isascii(b));
	printf ("%d\n", isascii(d));
	return (0);
} */

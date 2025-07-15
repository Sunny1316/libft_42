/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdchowdh <mdchowdh@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 18:04:34 by mdchowdh          #+#    #+#             */
/*   Updated: 2025/07/09 18:29:19 by mdchowdh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 255)
			return (1);
	else
			return (0);
}
#include <stdio.h>
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
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdchowdh <mdchowdh@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 16:15:52 by mdchowdh          #+#    #+#             */
/*   Updated: 2025/07/28 12:10:16 by mdchowdh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c < 127)
		return (1);
	else
		return (0);
}
/* #include <stdio.h>
#include <ctype.h>

int	main (void)
{
	char	a = 'a';
	char	b = 'B';
	char	d = ' ';

	printf ("%d\n", ft_isprint(a));
	printf ("%d\n", ft_isprint(b));
	printf ("%d\n", ft_isprint(d));
    printf ("%d\n", isprint(a));
	printf ("%d\n", isprint(b));
	printf ("%d\n", isprint(d));
	return (0);
} */

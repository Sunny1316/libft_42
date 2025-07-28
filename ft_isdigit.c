/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdchowdh <mdchowdh@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 16:12:18 by mdchowdh          #+#    #+#             */
/*   Updated: 2025/07/28 12:09:53 by mdchowdh         ###   ########.fr       */
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

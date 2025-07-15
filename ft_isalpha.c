/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdchowdh <mdchowdh@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 15:42:22 by mdchowdh          #+#    #+#             */
/*   Updated: 2025/07/12 18:52:41 by mdchowdh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
			return (1);
	else
			return (0);
}
#include <stdio.h>

int	main (void)
{
	char	a = 'a';
	char	b = 'B';
	char	d = '3';

	printf ("%d\n", ft_isalpha(a));
	printf ("%d\n", ft_isalpha(b));
	printf ("%d\n", ft_isalpha(d));
	return (0);
}

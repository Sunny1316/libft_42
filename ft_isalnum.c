/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdchowdh <mdchowdh@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 18:18:21 by mdchowdh          #+#    #+#             */
/*   Updated: 2025/07/16 14:59:31 by mdchowdh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9') || (c >= 'a' && c <= 'z')||(c >= 'A' && c <= 'Z'))
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
	char	d = '@';

	printf ("%d\n", ft_isalnum(a));
	printf ("%d\n", ft_isalnum(b));
	printf ("%d\n", ft_isalnum(d));
    printf ("%d\n", isalnum(a));
	printf ("%d\n", isalnum(b));
	printf ("%d\n", isalnum(d));
	return (0);
} */

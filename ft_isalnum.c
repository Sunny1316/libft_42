/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdchowdh <mdchowdh@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 18:18:21 by mdchowdh          #+#    #+#             */
/*   Updated: 2025/07/21 15:35:26 by mdchowdh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isdigit(c) || ft_isalpha(c))
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

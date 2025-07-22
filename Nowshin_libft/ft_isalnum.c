/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noyeasmi <noyeasmi@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 15:43:01 by noyeasmi          #+#    #+#             */
/*   Updated: 2025/07/20 22:47:58 by noyeasmi         ###   ########.fr       */
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

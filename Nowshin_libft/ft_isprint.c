/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noyeasmi <noyeasmi@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 15:44:25 by noyeasmi          #+#    #+#             */
/*   Updated: 2025/07/21 01:02:57 by noyeasmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}
/* #include <stdio.h>
#include <ctype.h>
int main ()
{
	char P1 = 'N';
	char P2 = '1';
	char P3 = ' ';

	printf("%d\n", ft_isprint(P1));
	printf("%d\n", ft_isprint(P2));
	printf("%d\n", ft_isprint(P3));
	printf("%d\n", isprint(P1));
	printf("%d\n", isprint(P2));
	printf("%d\n", isprint(P3));

	return 0;
} */

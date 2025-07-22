/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noyeasmi <noyeasmi@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 15:45:02 by noyeasmi          #+#    #+#             */
/*   Updated: 2025/07/21 19:58:34 by noyeasmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (c + 32);
	}
	return (c);
}
/* #include <stdio.h>
#include <ctype.h>
int main(void)
{
	int c = 65;

	printf("Original tolower: %c -> %c\n", c, tolower(c));
	printf("My ft_tolower   : %c -> %c\n", c, ft_tolower(c));

	return 0;
} */

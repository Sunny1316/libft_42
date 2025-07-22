/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noyeasmi <noyeasmi@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 15:45:06 by noyeasmi          #+#    #+#             */
/*   Updated: 2025/07/21 19:55:56 by noyeasmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (c - 32);
	}
	return (c);
}
/* #include <stdio.h>
#include <ctype.h>
int main(void)
{
	int c = 97;

	printf("Original toupper: %c -> %c\n", c, toupper(c));
	printf("My ft_toupper   : %c -> %c\n", c, ft_toupper(c));

	return 0;
} */

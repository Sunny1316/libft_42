/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noyeasmi <noyeasmi@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 15:43:38 by noyeasmi          #+#    #+#             */
/*   Updated: 2025/07/21 20:53:23 by noyeasmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
/* #include <stdio.h>
int main()
{
	char P1 = 'c';
	char P2 = '1';

	printf("%d\n", ft_isalpha(P1));
	printf("%d\n", ft_isalpha(P2));

	return 0;
} */

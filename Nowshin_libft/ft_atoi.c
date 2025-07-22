/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noyeasmi <noyeasmi@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 15:43:52 by noyeasmi          #+#    #+#             */
/*   Updated: 2025/07/20 20:39:18 by noyeasmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	sum;
	int	i;
	int	sign;

	i = 0;
	sum = 0;
	sign = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		sum = (sum * 10) + (str[i] - '0');
		i++;
	}
	return (sign * sum);
}
/* #include <stdio.h>
#include <stdlib.h>
int main(void)
{
    printf("%d\n", ft_atoi("   -+-1234")); // Output: 0
    printf("%d\n", atoi("   -+-1234")); // Output: 0
    printf("%d\n", ft_atoi("42abc"));    // Output: 42
    printf("%d\n", atoi("42abc"));    // Output: 42
    printf("%d\n", ft_atoi("   +99"));   // Output: 99
    printf("%d\n", atoi("   +99"));   // Output: 99
    return 0;
} */

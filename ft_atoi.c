/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdchowdh <mdchowdh@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 10:15:31 by mdchowdh          #+#    #+#             */
/*   Updated: 2025/07/19 10:41:21 by mdchowdh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	result;
	int	sign;

    result = 0;
    sign = 1;
	while (*str == ' ' || *str == '\t' || *str == '\n'
		|| *str == '\r' || *str == '\v' || *str == '\f')
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (result * sign);
}

/* #include <stdio.h>
#include <stdlib.h>
int main(void)
{
    printf("%d\n", ft_atoi("   -+-1234")); // Output: -1234
    printf("%d\n", atoi("   -+-1234")); // Output: -1234
    printf("%d\n", ft_atoi("42abc"));    // Output: 42
    printf("%d\n", atoi("42abc"));    // Output: 42
    printf("%d\n", ft_atoi("   +99"));   // Output: 99
    printf("%d\n", atoi("   +99"));   // Output: 99
    return 0;
} */
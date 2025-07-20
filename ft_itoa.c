/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdchowdh <mdchowdh@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 15:28:11 by mdchowdh          #+#    #+#             */
/*   Updated: 2025/07/20 15:30:50 by mdchowdh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_intlen(int n)
{
	int	len = 1;
	if (n < 0)
		len++; 
	while (n / 10)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	long	num; 
	int		sign = 1;

	num = n;
	if (num < 0)
	{
		sign = -1;
		num = -num;
	}
	len = ft_intlen(n);
	str = (char *)malloc(len + 1);
	if (!str)
		return (NULL);
	str[len] = '\0';
	while (len--)
	{
		str[len] = '0' + (num % 10);
		num /= 10;
		if (len == 1 && sign == -1)
			break;
	}
	if (sign == -1)
		str[0] = '-';
	return (str);
}
/* #include <stdio.h>
int main(void)
{
	char *s;
	s = ft_itoa(12345);     printf("%s\n", s); free(s);
	s = ft_itoa(-42);       printf("%s\n", s); free(s);
	s = ft_itoa(0);         printf("%s\n", s); free(s);
	s = ft_itoa(-2147483648); printf("%s\n", s); free(s);
	return 0;
} */
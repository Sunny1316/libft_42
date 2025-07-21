/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdchowdh <mdchowdh@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 15:28:11 by mdchowdh          #+#    #+#             */
/*   Updated: 2025/07/21 15:41:57 by mdchowdh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_intlen(int n)
{
	int		len ;
	long	num;

	len = 0;
	num = n;
	if (num < 0)
	{
		num *= -1;
		len++;
	}
	while (num > 0)
	{
		num = num / 10;
		len++;
	}
	return (len);
}

static char	*ft_itostr(char *s, int n)
{
	int		len;
	long	num;
	char	*p;

	num = n;
	len = ft_intlen(n);
	p = s;
	p[len] = '\0';
	if (num < 0)
	{
		*s = '-';
		num *= -1;
	}
	while (num > 0)
	{
		len--;
		p[len] = '0' + (num % 10);
		num = num / 10;
	}
	return (s);
}

char	*ft_itoa(int n)
{
	char	*s;

	if (n == 0)
		return (ft_strdup("0"));
	s = malloc(sizeof(char) * (ft_intlen(n) + 1));
	if (!s)
		return (NULL);
	return (ft_itostr(s, n));
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

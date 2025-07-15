/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdchowdh <mdchowdh@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 19:57:09 by mdchowdh          #+#    #+#             */
/*   Updated: 2025/07/14 15:58:35 by mdchowdh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stddef.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr;
	ptr = (unsigned char *)b;
	while ( len > 0)
	{
		*ptr = (unsigned char)c;
		ptr++;
		len--;
	}
	return (b);
}

void	ft_bzero(void *s, size_t n)

{
	ft_memset(s, 0 , n);
}

#include <stdio.h>
#include <string.h>
int	main (void)
{
	char a[30] = "Hello World!";
    //char b[30] = "Hello World!";
    ft_bzero(a , 5);
    bzero(a , 5);
    printf("%s\n", a);
	printf ("%s\n", a);
	return (0);
}

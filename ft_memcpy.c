/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdchowdh <mdchowdh@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 14:37:41 by mdchowdh          #+#    #+#             */
/*   Updated: 2025/07/15 16:05:05 by mdchowdh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stddef.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	const unsigned char	*s;
	unsigned char	*d;

    s = (unsigned char *)src;
	d = (unsigned char *)dst;
    if (!dst && !src)
    return (NULL);
	while (n-- > 0)
		*d++ = *s++;
	return (dst);
}
/* #include <string.h>
#include <stdio.h>

int main(void)
{
   char data[10] = "ABCDEF";
   char src[]
   return(0);
} */

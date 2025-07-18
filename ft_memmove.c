/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdchowdh <mdchowdh@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 15:35:07 by mdchowdh          #+#    #+#             */
/*   Updated: 2025/07/16 16:04:20 by mdchowdh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*s;
	unsigned char	*d;

	if (!dst && !src)
		return (NULL);
	s = (unsigned char *)src;
	d = (unsigned char *)dst;
	if (dst > src)
	{
		d += n;
		s += n;
		while (n--)
		{
    		d--;
    		s--;
    	*d = *s;
		}
	}
	else
		ft_memcpy(dst, src, n);
	return (dst);
}
/*  #include <string.h>
 #include <stdio.h>

 int main(void)
 {

    return(0);
 }
  */

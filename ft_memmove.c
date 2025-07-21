/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdchowdh <mdchowdh@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 15:35:07 by mdchowdh          #+#    #+#             */
/*   Updated: 2025/07/21 16:07:28 by mdchowdh         ###   ########.fr       */
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
/* #include <stdio.h>
#include <string.h>

int main(void)
{
  char str1[] = "This is a test string";
  int len1 = strlen(str1);
  char str2[] = "This is a test string";
  int len2 = strlen(str1);

  printf("Original str1: %s\n", str1);
  ft_memmove(str1 + 5, str1 + 8, len1 - 8 + 1);
  printf("Modified str1 for ft_memmove: %s\n", str1);

  printf("Original str2: %s\n", str2);
  memmove(str2 + 5, str2 + 8, len2 - 8 + 1);
  printf("Modified str2 for memmove: %s\n", str2);
  return 0;
} */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdchowdh <mdchowdh@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 14:37:41 by mdchowdh          #+#    #+#             */
/*   Updated: 2025/07/21 16:06:38 by mdchowdh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
#include <stdio.h>
#include <string.h>

int main(void)
{
  char str1[] = "This is a test string";
  int len1 = strlen(str1);
  char str2[] = "This is a test string";
  int len2 = strlen(str1);

  printf("Original str1: %s\n", str1);
  ft_memcpy(str1 + 5, str1 + 8, len1 - 8 + 1);
  printf("Modified str1 for ft_memcpy: %s\n", str1);

  printf("Original str2: %s\n", str2);
  memcpy(str2 + 5, str2 + 8, len2 - 8 + 1);
  printf("Modified str2 for memcpy: %s\n", str2);
  return 0;
}

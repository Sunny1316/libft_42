/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdchowdh <mdchowdh@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 11:30:15 by mdchowdh          #+#    #+#             */
/*   Updated: 2025/07/17 12:34:05 by mdchowdh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_l;
	size_t	i;
	size_t	src_l;

	dst_l = ft_strlen(dst);
	src_l = ft_strlen(src);
	if (dstsize == 0)
		return (src_l);
	if (dstsize < dst_l)
		src_l += dstsize;
	else
		src_l += dst_l;
	i = 0;
	while (src[i] != '\0' && (dst_l + i) < dstsize - 1)
	{
		dst[dst_l + i] = src[i];
		i++;
	}
	dst[dst_l + i] = '\0';
	return (src_l);
}
#include <stdio.h>
#include <string.h>
int main(void)
/* {
    char dest1[30] = "Hello, ";
    char dest2[30] = "Hello, ";
    char src[] = "World!";
    size_t size = sizeof(dest1);

    size_t result_lib = strlcat(dest1, src, size);
    size_t result_ft = ft_strlcat(dest2, src, size);

    printf("Original strlcat result: %zu\n", result_lib);
    printf("After strlcat: %s\n", dest1);

    printf("Your ft_strlcat result: %zu\n", result_ft);
    printf("After ft_strlcat: %s\n", dest2);

    if (result_lib == result_ft && strcmp(dest1, dest2) == 0)
        printf("Both strlcat and ft_strlcat give the same result.\n");
    else
        printf("The results differ. There may be a bug in ft_strlcat.\n");

    return 0;
} */
{
    char dest1[10] = "1234";  // 4 chars + '\0' = 5 used
    char dest2[10] = "1234";
    char src[] = "abcdef";    // 6 chars

    size_t size = sizeof(dest1); // 10

    size_t result_lib = strlcat(dest1, src, size);
    size_t result_ft = ft_strlcat(dest2, src, size);

    printf("Original strlcat returned: %zu\n", result_lib);
    printf("After strlcat: %s\n", dest1);

    printf("ft_strlcat returned: %zu\n", result_ft);
    printf("After ft_strlcat: %s\n", dest2);

    if (result_lib == result_ft && strcmp(dest1, dest2) == 0)
        printf("Edge case handled correctly by ft_strlcat.\n");
    else
        printf( "Edge case failed. Mismatch in return value or string.\n");

    return 0;
}
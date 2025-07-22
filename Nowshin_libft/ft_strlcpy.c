/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noyeasmi <noyeasmi@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 15:44:40 by noyeasmi          #+#    #+#             */
/*   Updated: 2025/07/21 20:31:45 by noyeasmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	src_len;

	src_len = ft_strlen(src);
	if (dstsize == 0 || !src || !dst)
		return (src_len);
	i = 0;
	while (src[i] && i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (src_len);
}
/* #include <stdio.h>
#include <string.h>
int main(void)
{
	char src[] = "Hello, 42!";
	char dest1[20];
	char dest2[20];
	size_t size = 6;

	size_t len_real = strlcpy(dest1, src, size);
	size_t len_custom = ft_strlcpy(dest2, src, size);

	printf("Original strlcpy:\n");
	printf("  Copied string: \"%s\"\n", dest1);
	printf("  Return value:  %zu\n\n", len_real);

	printf("Custom ft_strlcpy:\n");
	printf("  Copied string: \"%s\"\n", dest2);
	printf("  Return value:  %zu\n", len_custom);

	return 0;
} */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdchowdh <mdchowdh@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 09:25:14 by mdchowdh          #+#    #+#             */
/*   Updated: 2025/07/19 10:02:57 by mdchowdh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t j;

	if (!*needle)
		return ((char *)haystack);
	i = 0;
	while (haystack[i] && i < len)
	{
		j = 0;
		while (needle[j] && haystack[i + j] && (i + j) < len
			&& haystack[i + j] == needle[j])
			j++;
		if (!needle[j])
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}
/* #include <stdio.h>
int main(void)
{
	const char *str = "This is a haystack with a needle inside!";
	const char *tofind = "needle";
	char *found = ft_strnstr(str, tofind, 40);

	if (found)
		printf("Found: %s\n", found);
	else
		printf("Not found\n");
	return 0;
} */
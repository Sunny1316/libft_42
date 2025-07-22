/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noyeasmi <noyeasmi@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 19:29:31 by noyeasmi          #+#    #+#             */
/*   Updated: 2025/07/21 13:35:05 by noyeasmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
	{
		sub = (char *)malloc(1);
		if (sub)
			sub[0] = '\0';
		return (sub);
	}
	if (len > s_len - start)
		len = s_len - start;
	sub = (char *)malloc(len + 1);
	if (!sub)
		return (NULL);
	ft_strlcpy(sub, s + start, len + 1);
	return (sub);
}
/* #include <stdio.h>
int main(void)
{
	char *s = ft_substr("42 Heilbronn", 3, 6);
	printf("%s\n", s);
	free(s);
	return 0;
} */

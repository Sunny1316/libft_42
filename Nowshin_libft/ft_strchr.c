/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noyeasmi <noyeasmi@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 15:44:29 by noyeasmi          #+#    #+#             */
/*   Updated: 2025/07/22 11:07:16 by noyeasmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (NULL);
}
/* #include <stdio.h>
int main(void)
{
	const char *text = "Hello, world!";
	char *result = ft_strchr(text, 'w');

	if (result)
		printf("Found 'w' at : %s\n", result);
	else
		printf("'z' not found. %s\n", result);

	return 0;
} */

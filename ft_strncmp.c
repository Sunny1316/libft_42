/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdchowdh <mdchowdh@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 14:30:42 by mdchowdh          #+#    #+#             */
/*   Updated: 2025/07/28 14:38:56 by mdchowdh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}
/* #include <stdio.h>
#include <string.h>
int main(void)
{
	const char *s1 = "HelloWorld";
	const char *s2 = "";
	size_t n = 10;

	int result_lib = strncmp(s1, s2, n);
	int result_ft = ft_strncmp(s1, s2, n);

	printf("Comparing first %zu characters of:\n", n);
	printf("s1: \"%s\"\n", s1);
	printf("s2: \"%s\"\n\n", s2);

	printf("strncmp   result: %d\n", result_lib);
	printf("ft_strncmp result: %d\n", result_ft);

	if ((result_lib == 0 && result_ft == 0) ||
		(result_lib < 0 && result_ft < 0) ||
		(result_lib > 0 && result_ft > 0))
		printf("Both results are logically equal.\n");
	else
		printf("Mismatch between strncmp and ft_strncmp.\n");

	return 0;
} */

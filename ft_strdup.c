/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdchowdh <mdchowdh@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 11:21:09 by mdchowdh          #+#    #+#             */
/*   Updated: 2025/07/28 14:35:35 by mdchowdh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		len ;
	char	*dup;
	int		i ;

	len = 0;
	i = 0;
	while (s1[len])
		len++;
	dup = (char *)malloc(len + 1);
	if (!dup)
		return (NULL);
	while (i < len)
	{
		dup[i] = s1[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
/* #include <stdio.h>
int main(void)
{
	char *s = ft_strdup("0");
	printf("%s\n", s);
	free(s);
	return 0;
} */

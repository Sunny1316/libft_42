/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noyeasmi <noyeasmi@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 15:44:33 by noyeasmi          #+#    #+#             */
/*   Updated: 2025/07/22 11:11:26 by noyeasmi         ###   ########.fr       */
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
	char *s = ft_strdup("42 Heilbronn!");
	printf("%s\n", s);
	free(s);
	return 0;
} */

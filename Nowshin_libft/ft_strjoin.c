/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noyeasmi <noyeasmi@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 19:29:56 by noyeasmi          #+#    #+#             */
/*   Updated: 2025/07/21 13:33:17 by noyeasmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	size_t	len1;
	size_t	len2;

	if (!s1 || !s2)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	result = (char *)malloc(len1 + len2 + 1);
	if (!result)
		return (NULL);
	ft_strlcpy(result, s1, len1 + 1);
	ft_strlcat(result, s2, len1 + len2 + 1);
	return (result);
}
/* #include <stdio.h>
int main(void)
{
    char *s1 = "Hello, ";
    char *s2 = "world!";
    char *joined;

    joined = ft_strjoin(s1, s2);
    if (joined)
    {
        printf("Joined: \"%s\"\n", joined); // Should print: Hello, world!
        free(joined); // Don't forget to free!
    }
    else
        printf("Memory allocation failed.\n");
    return 0;
} */

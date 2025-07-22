/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noyeasmi <noyeasmi@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 20:12:02 by noyeasmi          #+#    #+#             */
/*   Updated: 2025/07/21 22:17:55 by noyeasmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*result;
	unsigned int	i;
	size_t			len;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	result = (char *)malloc(len + 1);
	if (!result)
		return (NULL);
	i = 0;
	while (i < len)
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}
/* #include <stdio.h>
char to_upper(unsigned int i, char c)
{
    (void)i; // Index not used
    if (c >= 'a' && c <= 'z')
        return c - 32; // ASCII: convert to uppercase
    return c;
}
int main(void)
{
    char *result = ft_strmapi("42 Heilbronn!", to_upper);
    if (result)
    {
        printf("%s\n", result); // Output: 42 HEILBRONN!
        free(result);
    }
    return 0;
} */

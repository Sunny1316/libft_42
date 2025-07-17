/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdchowdh <mdchowdh@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 13:17:59 by mdchowdh          #+#    #+#             */
/*   Updated: 2025/07/17 13:51:10 by mdchowdh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
    while (*s)
    {
        if (*s == (char)c)
            return (char *)s;
        s++;
    }
    if ((char)c == '\0')
        return (char *)s;
    return NULL;
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
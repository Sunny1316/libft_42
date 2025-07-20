/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdchowdh <mdchowdh@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 14:03:08 by mdchowdh          #+#    #+#             */
/*   Updated: 2025/07/20 20:56:34 by mdchowdh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)

{
	int	i;

	i = ft_strlen(s);
	if (!s)
		return (NULL);
	while (i >= 0)
	{
		if (s[i] == (unsigned char)c)
			return ((char *)s + i);
		i--;
	}
	return (NULL);
}
/* #include <stdio.h>
#include <string.h>
int main(void)
{
    const char *text = "Hello, world!";
    char *my_result = ft_strrchr(text,'\0');
    char *lib_result = strrchr(text,'\0' );

    if (my_result && lib_result)
       {
        printf("my_result:Found last 'o' at : %p\n", my_result);
        printf("lib_result:Found last 'o' at : %p\n", lib_result);
       }
    else if(!my_result && !lib_result)
        {
            printf("my_result:'z' not found. %s\n", my_result);
            printf("lib_result:'z' not found. %s\n", lib_result);
        }
return 0;
} */

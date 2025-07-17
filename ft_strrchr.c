/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdchowdh <mdchowdh@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 14:03:08 by mdchowdh          #+#    #+#             */
/*   Updated: 2025/07/17 14:29:52 by mdchowdh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
char	*p;

	p = NULL;
	while (*s != '\0')
	{
		if (*s == c)
			p = (char *)s;
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return (p);
}
/* #include <stdio.h>
#include <string.h>
int main(void)
{
    const char *text = "Hello, world!";
    char *my_result = ft_strrchr(text, 'o');
    char *lib_result = strrchr(text, 'o');

    if (my_result && lib_result)
       {
        printf("my_result:Found last 'o' at : %s\n", my_result); 
        printf("lib_result:Found last 'o' at : %s\n", lib_result); 
       }  
    else if(!my_result && !lib_result)
        {
            printf("my_result:'z' not found. %s\n", my_result);
            printf("lib_result:'z' not found. %s\n", lib_result);
        }
return 0;
} */
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noyeasmi <noyeasmi@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 15:44:57 by noyeasmi          #+#    #+#             */
/*   Updated: 2025/07/21 20:03:32 by noyeasmi         ###   ########.fr       */
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

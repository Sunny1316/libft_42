/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noyeasmi <noyeasmi@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 01:18:27 by noyeasmi          #+#    #+#             */
/*   Updated: 2025/07/22 11:03:27 by noyeasmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ps;

	ps = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (*ps == (unsigned char)c)
			return ((void *)ps);
		ps++;
		i++;
	}
	return (NULL);
}
/* #include <stdio.h>
#include <string.h>

int main (void)
{
	char myStr[] = "Hello World!";
	char *myPtr1 = (char*)ft_memchr(myStr, 'o', 12);
	char *myPtr2 = (char*)memchr(myStr, 'o', 12);
	if (myPtr2 != NULL)
	{
  		printf("memchr pointer : %p : ", myPtr2);
		printf("memchr string from that pointer : %s\n", myPtr2);
	}
	if (myPtr1 != NULL)
	{
		printf("ft_memchr pointer : %p : ", myPtr1);
		printf("ft_memchr string from that pointer : %s\n", myPtr1);
	}

} */

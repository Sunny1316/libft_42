/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noyeasmi <noyeasmi@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 15:44:20 by noyeasmi          #+#    #+#             */
/*   Updated: 2025/07/21 13:57:56 by noyeasmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*tmp_ptr;

	tmp_ptr = (unsigned char *) b;
	while (len > 0)
	{
		*(tmp_ptr++) = (unsigned char) c;
		len--;
	}
	return (b);
}
/* #include <stdio.h>
#include <string.h>
int	main (void)
{
	char b[30] = "Hello World!";

	printf ("%s\n",(char *)ft_memset(b , 65 , 5));
	printf ("%s\n", (char *)memset(b , 65 , 5));
	return (0);
} */

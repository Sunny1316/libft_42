/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdchowdh <mdchowdh@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 15:20:09 by mdchowdh          #+#    #+#             */
/*   Updated: 2025/07/28 14:23:08 by mdchowdh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)b;
	while (len > 0)
	{
		*ptr = (unsigned char)c;
		ptr++;
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
/* N.B1:
The ft_memset function is used to set a block of memory to a specific value.
Let’s break down the prototype:
void *memset(void *b, int c, size_t len);
Return Type (void *): The function returns a pointer
to the memory block that was set.
Parameters:
void *b: A pointer to the memory block to be set.
int c: The value to set each byte of the memory block to.
This value is converted to an unsigned char.
size_t len: The number of bytes to set in the memory block. */
/* N.B2: comment out multiple lines in Mac OS: macOS: Shift + Option + A */

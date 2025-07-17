/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdchowdh <mdchowdh@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 19:57:09 by mdchowdh          #+#    #+#             */
/*   Updated: 2025/07/16 14:59:12 by mdchowdh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)

{
	ft_memset(s, 0 , n);
}
/* #include <stdio.h>
#include <string.h>
int	main (void)
{
	char a[30] = "Hello World!";
    //char b[30] = "Hello World!";
    ft_bzero(a , 5);
    bzero(a , 5);
    printf("%s\n", a);
	printf ("%s\n", a);
	return (0);
} */

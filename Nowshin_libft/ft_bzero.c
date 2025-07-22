/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noyeasmi <noyeasmi@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 15:43:56 by noyeasmi          #+#    #+#             */
/*   Updated: 2025/07/20 20:47:31 by noyeasmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)

{
	ft_memset(s, 0, n);
}
/* #include <stdio.h>
#include <string.h>
int	main (void)
{
	char a[30] = "Hello World!";
    ft_bzero(a , 5);
    bzero(a , 5);
    printf("%s\n", a);
	printf ("%s\n", a);
	return (0);
} */

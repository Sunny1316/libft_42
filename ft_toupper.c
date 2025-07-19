/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdchowdh <mdchowdh@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 12:48:37 by mdchowdh          #+#    #+#             */
/*   Updated: 2025/07/17 16:48:53 by mdchowdh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (c - 32);
	}
	return (c);
}
/* #include <stdio.h>
#include <ctype.h> 
int main(void)
{
    int c = 97;

    printf("Original toupper: %c -> %c\n", c, toupper(c));
    printf("My ft_toupper   : %c -> %c\n", c, ft_toupper(c));

    return 0;
} */
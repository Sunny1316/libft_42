/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdchowdh <mdchowdh@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 13:05:25 by mdchowdh          #+#    #+#             */
/*   Updated: 2025/07/17 13:08:38 by mdchowdh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (c + 32);
	}
	return (c);
}
#include <stdio.h>
#include <ctype.h> 
int main(void)
{
    int c = 65;

    printf("Original tolower: %c -> %c\n", c, tolower(c));
    printf("My ft_tolower   : %c -> %c\n", c, ft_tolower(c));

    return 0;
}
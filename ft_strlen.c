/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdchowdh <mdchowdh@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 19:57:21 by mdchowdh          #+#    #+#             */
/*   Updated: 2025/07/16 22:41:05 by mdchowdh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(const char *str)

{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
// #include <stdio.h>
// int main(void)
// {
//    int j;
//     char  str[] = "";

//    j= ft_strlen(str);
//     printf("value of j = %d\n",j);
// }

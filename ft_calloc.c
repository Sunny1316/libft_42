/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdchowdh <mdchowdh@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 11:15:56 by mdchowdh          #+#    #+#             */
/*   Updated: 2025/07/19 11:18:54 by mdchowdh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	total;
	void	*ptr;
	size_t	i;
	unsigned char	*tmp;

	total = count * size;
	ptr = malloc(total);
	if (!ptr)
		return (NULL);
	tmp = (unsigned char *)ptr;
	i = 0;
	while (i < total)
	{
		tmp[i] = 0;
		i++;
	}
	return (ptr);
}
/* #include <stdio.h>
int main(void)
{
	int *arr = (int *)ft_calloc(5, sizeof(int));
	int i = 0;
	while (i < 5)
	{
		printf("%d ", arr[i]);
		i++;
	}
	printf("\n");
	free(arr);
	return 0;
} */
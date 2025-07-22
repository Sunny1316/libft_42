/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noyeasmi <noyeasmi@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 15:44:01 by noyeasmi          #+#    #+#             */
/*   Updated: 2025/07/20 23:12:30 by noyeasmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t			total;
	void			*ptr;
	size_t			i;
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
#include <stdlib.h>
int main(void)
{
	int *arr1 = (int *)ft_calloc(5, sizeof(int));
	int *arr2 = (int *)calloc(5, sizeof(int));
	int i = 0;
	while (i < 5)
	{
		printf("%d", arr1[i]);
		printf("\n");
		printf("%d", arr2[i]);
		printf("\n");
		i++;
	}
	free(arr1);
	free(arr2);
	return 0;
} */

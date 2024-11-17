/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adias-do <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 14:24:13 by adias-do          #+#    #+#             */
/*   Updated: 2024/10/16 15:29:56 by adias-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*array;
	int	dif;
	int	c;

	dif = max - min;
	c = 0;
	array = (int *)malloc(dif * sizeof(int));
	if (min >= max)
		return (NULL);
	while (max > min)
	{
		array[c] = min;
		c++;
		min++;
	}
	return (array);
}

/*int	main(void)
{
	int min = 6;
	int max = 13;
	int c = 0;
	int size = max - min;

	while (c < size)
	{
		printf("%d\n", ft_range(min, max)[c]);
		c++;
	}
	return (0);
}*/

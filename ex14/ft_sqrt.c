/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adias-do <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 11:38:54 by adias-do          #+#    #+#             */
/*   Updated: 2024/10/17 11:58:17 by adias-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	c;

	c = 1;
	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	else
	{
		while (c * c <= nb)
		{
			if (c * c == nb)
				return (c);
			c++;
		}
	}
	return (0);
}

/*int	main(void)
{
	printf("%d\n", ft_sqrt(4));
	printf("%d\n", ft_sqrt(1));
	printf("%d\n", ft_sqrt(0));
	printf("%d\n", ft_sqrt(-1));
	printf("%d\n", ft_sqrt(-9));
	printf("%d\n", ft_sqrt(9));
	printf("%d\n", ft_sqrt(10000));
	printf("%d\n", ft_sqrt(91));
	printf("%d\n", ft_sqrt(' '));
}*/

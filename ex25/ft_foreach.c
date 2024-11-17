/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adias-do <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 15:34:08 by adias-do          #+#    #+#             */
/*   Updated: 2024/10/18 16:28:35 by adias-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_foreach(int *tab, int lengh, void (*f)(int))
{
	int	c;

	c = 0;
	while (c < lengh)
	{
		f(tab[c++]);
	}
}

/*void	ft_putnbr(int n)
{
	printf("%d\n", n);
}
int	main(void)
{
	int	tab[] = {2, 1, 3, 4, 5, 100};
	ft_foreach(tab, 6, &ft_putnbr);
	return (0);
}*/

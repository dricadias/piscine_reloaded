/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adias-do <adias-do@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 16:27:56 by adias-do          #+#    #+#             */
/*   Updated: 2024/10/14 16:57:54 by adias-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_numbers(void)
{
	int	c;

	c = 48;
	while (c <= 57)
	{
		ft_putchar(c);
		c++;
	}
}

/*int	main(void)
{
	ft_print_numbers();
}*/
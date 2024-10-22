/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adias-do <adias-do@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 12:22:04 by adias-do          #+#    #+#             */
/*   Updated: 2024/10/15 12:56:44 by adias-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_is_negative(int n)
{
	if (n < 0)
		ft_putchar('N');
	else
		ft_putchar('P');
}

/*int	main(void)
{
	ft_is_negative(-1000);
	ft_is_negative(-959);
	ft_is_negative(450);
	ft_is_negative('\0');
	ft_is_negative(0);
	ft_is_negative(-5);
	ft_is_negative(2);
}*/

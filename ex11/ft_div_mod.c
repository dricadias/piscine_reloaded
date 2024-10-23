/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adias-do <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 13:28:08 by adias-do          #+#    #+#             */
/*   Updated: 2024/10/15 14:04:15 by adias-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int	main()
{
	int a1 = 5;
	int b2 = 2;
	int div;
	int mod;
	ft_div_mod(a1, b2, &div, &mod);
	printf("%d, %d\n%d, %d\n", a1, b2, div, mod);
}*/

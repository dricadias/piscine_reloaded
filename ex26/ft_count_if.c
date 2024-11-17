/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adias-do <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 16:33:14 by adias-do          #+#    #+#             */
/*   Updated: 2024/10/18 16:58:42 by adias-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	i;
	int	c;

	i = 0;
	c = 0;
	while (tab[c])
	{
		if (f(tab[c]) == 1)
			i++;
		c++;
	}
	return (i);
}

/*int	greater_than(char *str)
{
	int	t;
	
	t = 0;
	while(str[t])
		t++;
	return (t > 5);
}

int	start_g(char *str)
{
	return (str[0] == 'g');
}

int	main(void)
{
	char *str[] = {"hello", "worhggld", "gustavo", "azul", 0};
	int t = ft_count_if(str, &greater_than);
	int g = ft_count_if(str, &start_g);
	
	printf("%d\n", t);
	printf("%d\n", g);
	
	return (0);
}*/

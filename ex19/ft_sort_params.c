/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adias-do <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 13:01:19 by adias-do          #+#    #+#             */
/*   Updated: 2024/10/17 15:40:37 by adias-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putchar(char c);

int	ft_strcmp(char *s1, char *s2)
{
	int	c;

	c = 0;
	while (s1[c] != '\0' && s2[c] != '\0' && s1[c] == s2[c])
		c++;
	return (s1[c] - s2[c]);
}

void	ft_putstr(char **str, int size)
{
	int	c;
	int	i;

	i = 1;
	while (i < size)
	{
		c = 0;
		while (str[i][c])
		{
			ft_putchar(str[i][c]);
			c++;
		}
		i++;
		ft_putchar('\n');
	}
}

void	ft_swap(char **a, char **b)
{
	char	*c;

	c = *a;
	*a = *b;
	*b = c;
}

int	main(int argc, char **argv)
{
	int	i;
	int	c;

	if (argc > 1)
	{
		i = 1;
		while (i < argc - 1)
		{
			c = 0;
			while (c < argc - 1)
			{
				if (ft_strcmp(argv[i], argv[i + 1]) > 0)
				{
					ft_swap(&argv[i], &argv[i + 1]);
					i = 0;
				}
				c++;
			}
			i++;
		}
		ft_putstr(argv, argc);
	}
	return (0);
}

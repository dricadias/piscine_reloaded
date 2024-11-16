/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adias-do <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 12:48:59 by adias-do          #+#    #+#             */
/*   Updated: 2024/10/17 12:59:12 by adias-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	main(int argc, char **argv)
{
	int	c;
	int	i;

	i = 1;
	while (argc > i)
	{
		c = 0;
		while (argv[i][c] > '\0')
		{
			ft_putchar(argv[i][c]);
			c++;
		}
		i++;
		ft_putchar('\n');
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyacoub- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 16:28:37 by cyacoub-          #+#    #+#             */
/*   Updated: 2022/08/30 02:43:19 by cyacoub-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int ac, char **av)
{
	int	y;
	int	o;

	o = 1;
	while (o < ac)
	{
		y = 0;
		while (av[o][y] != '\0')
		{
			ft_putchar(av[o][y]);
			y++;
		}
		ft_putchar('\n');
		o++;
	}
	return (0);
}

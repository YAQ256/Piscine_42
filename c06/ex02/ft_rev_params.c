/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyacoub- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 01:20:52 by cyacoub-          #+#    #+#             */
/*   Updated: 2022/08/30 01:28:29 by cyacoub-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	y;
	int	o;

	y = ac -1;
	while (y > 0)
	{
		o = 0;
		while (av[y][o] != '\0')
		{
			write (1, &av[y][o], 1);
			o++;
		}
		write (1, "\n", 1);
		y--;
	}
	return (0);
}

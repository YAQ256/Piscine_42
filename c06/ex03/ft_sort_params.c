/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyacoub- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 01:29:02 by cyacoub-          #+#    #+#             */
/*   Updated: 2022/08/30 02:40:57 by cyacoub-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_params(int ac, char **av)
{
	int	y;
	int	o;

	y = 1;
	while (y < ac)
	{
		o = 0;
		while (av[y][o] != '\0')
		{
			write (1, &av[y][o], 1);
			o++;
		}
		write (1, "\n", 1);
		y++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	y;

	y = 0;
	while (((*(s1 + y)) != '\0' && (*(s2 + y)) != '\0'))
	{
		if (*(s1 + y) != *(s2 + y))
			return (*(s1 + y) - *(s2 + y));
		y++;
	}
	return (s1[y] - s2[y]);
}

int	main(int ac, char **av)
{
	int		y;
	char	*o;

	y = 1;
	while (y < (ac - 1))
	{
		if (ft_strcmp(av[y], av[y + 1]) > 0)
		{
			o = av[y];
			av[y] = av[y + 1];
			av[y + 1] = o;
			y = 0;
		}
		y++;
	}
	ft_print_params(ac, av);
	return (0);
}

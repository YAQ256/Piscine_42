/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyacoub- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 23:20:07 by cyacoub-          #+#    #+#             */
/*   Updated: 2022/08/21 10:33:03 by cyacoub-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = -1;
	while (++i <= 98)
	{
		(j = i);
		while (++j <= 99)
		{
			ft_putchar((i / 10) + 48);
			ft_putchar((i % 10) + 48);
			ft_putchar(' ');
			ft_putchar((j / 10) + 48);
			ft_putchar((j % 10) + 48);
			if (i != 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
	}
}

/*int	main(void)
{
	ft_print_comb2();
	return (0);
}*/

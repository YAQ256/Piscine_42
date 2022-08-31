/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyacoub- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 15:13:47 by cyacoub-          #+#    #+#             */
/*   Updated: 2022/08/30 19:32:18 by cyacoub-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	y;

	y = 2;
	if (nb < 2)
		return (0);
	while (y <= nb / y)
	{
		if (nb % y == 0)
			return (0);
		y++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 2)
		return (2);
	while (nb >= 2)
	{
		if (ft_is_prime(nb) == 1)
			return (nb);
		nb++;
	}
	return (1);
}

/*int	main()
{
	int	n = 602;

	printf("%d", ft_find_next_prime(n));
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyacoub- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 04:37:43 by cyacoub-          #+#    #+#             */
/*   Updated: 2022/08/30 18:47:47 by cyacoub-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<unistd.h>
//#include<stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	y;

	y = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 1)
	{
		y *= nb;
		power--;
	}
	return (y);
}

/*int	main(void)
{
	printf("%d\n", ft_iterative_power(2, 5));
}*/

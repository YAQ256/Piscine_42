/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyacoub- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 04:11:10 by cyacoub-          #+#    #+#             */
/*   Updated: 2022/08/30 19:30:08 by cyacoub-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_sqrt(int nb)
{
	long	y;
	long	o;

	o = nb;
	if (o <= 0)
	{
		return (0);
	}
	if (o == 1)
	{
		return (1);
	}
	y = 2;
	if (o >= 2)
	{
		while (y * y <= o)
		{
			if (y * y == o)
			{
				return (y);
			}
			y++;
		}
	}
	return (0);
}
/*int	main()
{
	int	nb;

	nb = 49;
	printf("%d\n", ft_sqrt(nb));
}*/

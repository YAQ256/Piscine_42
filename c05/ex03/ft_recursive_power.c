/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyacoub- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 04:38:58 by cyacoub-          #+#    #+#             */
/*   Updated: 2022/08/30 18:48:56 by cyacoub-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<unistd.h>
//#include<stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	y;

	y = nb;
	if (y > y * nb)
		return (0);
	else if (power > 1)
		return (y * ft_recursive_power(y, power - 1));
	else if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	else
		return (y);
}

/*int	main(void)
{
	printf("%d\n", ft_recursive_power(2, 5));
}*/

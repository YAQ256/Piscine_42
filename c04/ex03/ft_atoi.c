/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyacoub- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 22:27:58 by cyacoub-          #+#    #+#             */
/*   Updated: 2022/08/27 22:41:45 by cyacoub-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_atoi(char *str)
{
	int	y;
	int	fin;
	int	sign;

	y = 0;
	fin = 0;
	sign = 1;
	while ((str[y] >= 9 && str[y] <= 13) || str[y] == ' ')
		y++;
	while (str[y] == '+' || str[y] == '-')
	{
		if (str[y] == '-')
			sign *= -1;
		y++;
	}
	while (str[y] >= '0' && str[y] <= '9')
	{
		fin = (str[y] - '0') + (fin * 10);
	y++;
	}
	return (fin * sign);
}
/*int	main()
{
	char	*s = " ---+--+1234ab567";
	printf("%d\n", ft_atoi(s));
}*/

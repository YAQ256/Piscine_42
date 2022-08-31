/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyacoub- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 04:39:53 by cyacoub-          #+#    #+#             */
/*   Updated: 2022/08/30 18:50:12 by cyacoub-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_fibonacci(int index)
{
	int	y;

	if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	else if (index > 1)
	{
		y = ft_fibonacci(index -1) + ft_fibonacci(index - 2);
		return (y);
	}
	else
		return (-1);
}

/*int	main()
{
	printf("%d", ft_fibonacci(11));
}*/

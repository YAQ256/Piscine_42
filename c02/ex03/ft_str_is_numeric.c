/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyacoub- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 00:36:13 by cyacoub-          #+#    #+#             */
/*   Updated: 2022/08/27 08:06:37 by cyacoub-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
//#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	y;

	y = 0;
	while (str[y] != '\0')
	{
		if (str[y] < 48 || str[y] > 57)
			return (0);
		y++;
	}
	return (1);
}

/*int main(void)
{
	char *str = "42";
	printf("%d", ft_str_is_numeric(str));
	return(0);
}*/

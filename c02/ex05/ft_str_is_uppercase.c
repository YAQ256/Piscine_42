/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyacoub- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 00:37:06 by cyacoub-          #+#    #+#             */
/*   Updated: 2022/08/27 09:51:21 by cyacoub-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	y;

	y = 0;
	while (str[y] != '\0')
	{
		if (str[y] < 65 || str[y] > 90)
			return (0);
		y++;
	}
	return (1);
}

/*int main(void)
{
	char *str = "HOLA";
	printf("%d", ft_str_is_uppercase(str));
	return (0);
}*/

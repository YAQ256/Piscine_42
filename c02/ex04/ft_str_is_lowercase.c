/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyacoub- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 00:36:36 by cyacoub-          #+#    #+#             */
/*   Updated: 2022/08/27 08:07:20 by cyacoub-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	y;

	y = 0;
	while (str[y] != '\0')
	{
		if (str[y] < 97 || str[y] > 122)
			return (0);
		y++;
	}
	return (1);
}

/*int main(void)
{
	char *str = "secta";
	printf("%d", ft_str_is_lowercase(str));
	return (0);
}*/

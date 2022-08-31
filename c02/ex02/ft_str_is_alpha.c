/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyacoub- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 19:04:31 by cyacoub-          #+#    #+#             */
/*   Updated: 2022/08/27 08:05:39 by cyacoub-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
//#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	y;

	y = 0;
	while (str[y] != '\0')
	{
		if ((str[y] < 65 || str[y] > 90) && (str[y] < 97 || str[y] > 122))
		{
			return (0);
		}
		y++;
	}
	return (1);
}

/*int	main()
{
	char	str[] = "secta";

	ft_str_is_alpha(str);
	printf("%d", ft_str_is_alpha(str));
	return (0);
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyacoub- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 00:38:05 by cyacoub-          #+#    #+#             */
/*   Updated: 2022/08/27 08:12:16 by cyacoub-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	y;

	y = 0;
	while (str[y] != '\0')
	{
		if ((str[y] >= 65 && str[y] <= 90))
			str[y] = str[y] + 32;
		y++;
	}
	return (str);
}

/*int	main(void)
{
	char str[] = "SecTA";
	printf("%s", ft_strlowcase(str));
	return (0);
}*/

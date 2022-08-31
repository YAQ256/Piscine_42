/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyacoub- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 18:37:58 by cyacoub-          #+#    #+#             */
/*   Updated: 2022/08/27 08:03:21 by cyacoub-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	y;

	y = 0;
	while (y < n && src[y] != '\0')
	{
		dest[y] = src[y];
		y++;
	}
	while (y < n)
	{
		dest[y] = '\0';
		y++;
	}
	return (dest);
}

/*int	main()
{
	int	n;
	char	src[] = "hola";
	char	dest[] = "esto es una secta";

	n = 20;
	ft_strncpy(dest, src, n);
	write(1, dest, n);
	return (0);
}*/

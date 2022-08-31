/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyacoub- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 01:12:15 by cyacoub-          #+#    #+#             */
/*   Updated: 2022/08/28 09:54:30 by cyacoub-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned	int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	y;

	y = 0;
	while (*dest != '\0')
	{
		dest++;
		y++;
	}
	while (size > 0 && *src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
		y++;
		size--;
	}
	*dest = '\0';
	dest -= y;
	return (y);
}
/*int	main()
{
	char	src[] = "esto es una secta";
	char	dest[] = "42 ";
	printf("mide: %i \n", ft_strlcat(dest, src, 20));
	printf("%s \n", dest);
}*/

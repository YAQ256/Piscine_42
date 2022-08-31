/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyacoub- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 00:38:50 by cyacoub-          #+#    #+#             */
/*   Updated: 2022/08/27 08:16:47 by cyacoub-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

unsigned int	ft_strsize(char *src)
{
	int	y;

	y = 0;
	while (src[y] != '\0')
		y++;
	return (y);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	cont;
	unsigned int	srcsize;

	srcsize = ft_strsize(src);
	cont = 0;
	if (size != 0)
	{
		while (cont < size - 1 && src[cont] != '\0')
		{
			dest[cont] = src[cont];
			cont++;
		}
		dest[cont] = '\0';
	}
	return (srcsize);
}

/*int	main(void)
{
	char src[] = "que tal";
	char dest[] = "hola";
	printf("Tamaño: %d\nDestino: %s", ft_strlcpy(dest, src, 100), dest);
	return (0);
}*/

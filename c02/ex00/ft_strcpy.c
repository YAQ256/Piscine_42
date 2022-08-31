/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyacoub- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 16:06:02 by cyacoub-          #+#    #+#             */
/*   Updated: 2022/08/27 08:01:36 by cyacoub-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
//#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	y;

	y = 0;
	while (src[y] != '\0')
	{
		dest[y] = src[y];
		y++;
	}
	dest[y] = '\0';
	return (dest);
}

/*int	main()
{
	char	src[] = "no te queria ver el codg";
	char	dest[] = "pos me lo viste, y el codigo tmb";
	
	ft_strcpy(dest, src);
	printf("%s", dest);
}*/

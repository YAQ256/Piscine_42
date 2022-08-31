/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyacoub- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 00:59:49 by cyacoub-          #+#    #+#             */
/*   Updated: 2022/08/28 01:48:24 by cyacoub-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
//#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	y;

	y = 0;
	while (*dest != '\0')
	{
		dest++;
		y++;
	}
	while (nb > 0 && *src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
		y++;
		nb--;
	}
	*dest = '\0';
	dest -= y;
	return (dest);
}

/*int main(void) {
  char src[] = "555";
  char dest1[] = "66778";
  printf("%s",ft_strncat(dest1,src,2));
  return 0;
}*/

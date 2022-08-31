/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyacoub- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 00:56:54 by cyacoub-          #+#    #+#             */
/*   Updated: 2022/08/28 02:56:51 by cyacoub-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	y;
	int	o;

	y = 0;
	o = 0;
	while (dest[y] != '\0')
		y++;
	while (src[o] != '\0')
	{
		dest[y] = src[o];
		y++;
		o++;
	}
	dest[y] = '\0';
	return (dest);
}
/*
int		main(void)
{
	char a[] = "sec";
	char b[] = "ta";
	ft_strcat(a, b);
	printf("%s\n", a);
	return (0);
}*/

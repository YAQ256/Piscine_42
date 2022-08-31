/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyacoub- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 00:48:08 by cyacoub-          #+#    #+#             */
/*   Updated: 2022/08/29 13:07:31 by cyacoub-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	y;

	y = 0;
	while (s1[y] == s2[y] && (s1[y] != '\0' || s2[y] != '\0'))
	{
		y++;
	}
	return (s1[y] - s2[y]);
}

int main()
{
	printf("%d\n", ft_strcmp("secta", "hola bue"));
	printf("%d\n", ft_strcmp("secta", "sect"));
	printf("%d\n", ft_strcmp("sec", "secta"));
	printf("%d\n", ft_strcmp("sect", "secta"));
}

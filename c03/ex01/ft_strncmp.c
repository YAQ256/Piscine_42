/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyacoub- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 00:53:35 by cyacoub-          #+#    #+#             */
/*   Updated: 2022/08/28 12:01:42 by cyacoub-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	y;

	y = 0;
	while (s1[y] != '\0' && s2[y] != '\0' && y < n)
	{
		if (s1[y] != s2[y])
			return (s1[y] - s2[y]);
		++y;
	}
	if (y != n)
		return (s1[y] - s2[y]);
	return (0);
}

int main()
{
  char str1[] = "secta";
  char str2[] = "secta";
  int ret;
  ret = ft_strncmp(str1, str2, 5);
  if(ret < 0) {
      printf("s1 es menor que s2");
   } else if(ret > 0) {
      printf("s2 es menor que s1");
   } else {
      printf("s1 es igual a s2");
   }

   return(0);
}

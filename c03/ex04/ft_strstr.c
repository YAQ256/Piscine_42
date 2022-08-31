/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyacoub- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 01:08:23 by cyacoub-          #+#    #+#             */
/*   Updated: 2022/08/28 03:05:39 by cyacoub-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	y;
	int	o;

	y = 0;
	o = 0;
	if (*to_find == '\0')
		return (str);
	while (str[o] != '\0')
	{
		if (str[o] == to_find[y])
		{
			while (to_find[y] != '\0' && str[o + y] == to_find[y])
				y++;
			if (to_find[y] == '\0')
				return (str += o);
			y = 0;
		}
		o++;
	}
	return (0);
}
/*int main()
{
  char haystack[]="secta";
  char needle[]="secta";
  char *findit;

  findit = ft_strstr(haystack,needle);
  printf("%s\n", findit);
}*/

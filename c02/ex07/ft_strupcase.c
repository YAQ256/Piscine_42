/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyacoub- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 00:37:47 by cyacoub-          #+#    #+#             */
/*   Updated: 2022/08/27 08:11:06 by cyacoub-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	y;

	y = 0;
	while (str[y] != '\0')
	{
		if ((str[y] >= 97 && str[y] <= 122))
			str[y] = str[y] - 32;
	y++;
	}
	return (str);
}

/*int main(void)
{
	char str[] = "SecTa";
	printf("%s", ft_strupcase(str));
	return (0);
}*/

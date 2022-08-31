/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyacoub- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 00:38:24 by cyacoub-          #+#    #+#             */
/*   Updated: 2022/08/27 08:13:18 by cyacoub-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_strlowcase(char *str)
{
	int	y;

	y = 0;
	while (str[y] != '\0')
	{
		if (str[y] >= 65 && str[y] <= 90)
			str[y] = str[y] + 32;
		y++;
	}
}

int	ft_is_alphanum(char c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	y;

	ft_strlowcase(str);
	y = 0;
	if (str[0] >= 97 && str[0] <= 122)
		str[0] = str[0] - 32;
	while (str[y] != '\0')
	{
		if (ft_is_alphanum(str[y]) == 0)
			if (str[y + 1] >= 97 && str[y + 1] <= 122)
				str[y + 1] = str[y + 1] - 32;
		y++;
	}
	return (str);
}

/*int	main(void)
{
	char	str[] = "salut, com[]me_nt tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("%s", ft_strcapitalize(str));
	return (0);
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyacoub- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 00:39:46 by cyacoub-          #+#    #+#             */
/*   Updated: 2022/08/27 09:51:55 by cyacoub-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	int		y;
	char	*c;

	c = "0123456789abcdef";
	y = 0;
	while (str[y] != '\0')
	{
		if (str[y] < 32 || str[y] > 126)
		{
			write(1, "\\", 1);
			write(1, &c[(unsigned char)str[y] / 16], 1);
			write(1, &c[(unsigned char)str[y] % 16], 1);
		}
		else
			write(1, &str[y], 1);
		y++;
	}
}

/*int	main(void)
{
	ft_putstr_non_printable("Coucou\ntu vas bien ?");
	write(1, "\n", 1);
	ft_putstr_non_printable("Couñcou tu vas bie\t\vn");
	write(1, "\n", 1);
	ft_putstr_non_printable("");
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyacoub- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 03:23:50 by cyacoub-          #+#    #+#             */
/*   Updated: 2022/08/24 03:35:29 by cyacoub-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	y;
	int	x;

	y = 0;
	while (y < size)
	{
		x = tab[(size - 1)];
		tab[(size -1)] = tab[y];
		tab[y] = x;
		size--;
		y++;
	}
}

/*int	main()
{
	int	size = 7;
	int	tab[7] = {1, 2, 3, 4, 5, 6, 7};

	ft_rev_int_tab(tab, size);

	int	y;

	y = 0;

	while (y <= size - 1)
	{
		printf("%d", tab[y]);
		y++;
	}
	return (0);
}*/

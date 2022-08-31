/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyacoub- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 16:08:44 by cyacoub-          #+#    #+#             */
/*   Updated: 2022/08/24 03:35:39 by cyacoub-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	x;
	int	y;

	y = 0;
	while (y < size - 1)
	{
		if (tab[y] > tab[y + 1])
		{
				x = tab [y];
				tab[y] = tab [y + 1];
				tab [y + 1] = x;
				y = 0;
		}
		else
			y++;
	}
}

/*int	main()
{
	int	size = 7;
	int	tab[7] = {7, 8, 9, 4, 5, 2, 3};

	ft_sort_int_tab(tab, size);

	int	y = 0;
	while (y < size)
	{
		printf("%d", tab[y]);
		y++;
	}
	return (0);
}*/

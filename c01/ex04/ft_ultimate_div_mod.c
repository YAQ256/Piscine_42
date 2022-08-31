/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyacoub- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 15:54:53 by cyacoub-          #+#    #+#             */
/*   Updated: 2022/08/24 03:34:53 by cyacoub-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a;
	mod = *b;
	*a = div / mod;
	*b = div % mod;
}
/*int	main()
{
	int	a = 9;
	int	b = 2;
	ft_ultimate_div_mod(&a, &b);
	printf("division=%d modulo=%d", a, b);
}*/

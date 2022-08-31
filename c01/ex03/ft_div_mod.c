/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyacoub- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 13:56:04 by cyacoub-          #+#    #+#             */
/*   Updated: 2022/08/24 03:34:41 by cyacoub-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*int	main()
{
	int	a = 44;
	int	b = 5;

	int	div;
	int	mod;
	ft_div_mod(a, b, &div, &mod);
	printf("div=%d mod=%d\n", div, mod);
	return (0);
}*/

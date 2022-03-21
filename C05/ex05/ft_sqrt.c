/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 11:59:04 by lleiria-          #+#    #+#             */
/*   Updated: 2021/07/22 16:15:17 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int	nb)
{
	long int	a;

	a = 1;
	if (nb == 0)
		return (0);
	while (nb > a * a)
		a++;
	if (nb == a * a)
		return (a);
	else
		return (0);
}
/*
int		main(void)
{
	printf("-10 = %d (0)\n", ft_sqrt(-10));
	printf("-1 = %d (0)\n", ft_sqrt(-1));
	printf(" 0 = %d (0)\n", ft_sqrt(0));
	printf(" 1 = %d (1)\n", ft_sqrt(1));
	printf(" 2 = %d (0)\n", ft_sqrt(2));
	printf(" 3 = %d (0)\n", ft_sqrt(3));
	printf(" 4 = %d (2)\n", ft_sqrt(4));
	printf(" 9 = %d (3)\n", ft_sqrt(9));
	printf(" 16 = %d (4)\n", ft_sqrt(16));
	printf(" 25 = %d (5)\n", ft_sqrt(25));

}*/

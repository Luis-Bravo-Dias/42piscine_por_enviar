/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 11:02:45 by lleiria-          #+#    #+#             */
/*   Updated: 2021/07/22 14:28:32 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int	nb)
{
	int	i;

	i = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}
/*
int		main(void)
{
	printf("-6 = %d (0)\n", ft_recursive_factorial(-6));
	printf(" 0 = %d (1)\n", ft_recursive_factorial(0));
	printf(" 1 = %d (1)\n", ft_recursive_factorial(1));
	printf(" 2 = %d (2)\n", ft_recursive_factorial(2));
	printf(" 3 = %d (6)\n", ft_recursive_factorial(3));
	printf(" 4 = %d (24)\n", ft_recursive_factorial(4));
}*/
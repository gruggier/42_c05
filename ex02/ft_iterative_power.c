/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giamrugg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 12:15:18 by giamrugg          #+#    #+#             */
/*   Updated: 2024/11/26 12:55:49 by giamrugg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_iterative_power(int nb, int power)
{
	int	a;
	int	b;

	a = 1;
	b = 0;
	if (power < 0)
	{
		return (0);
	}
	if (nb == 0 && power == 0)
	{
		return (1);
	}
	for (b = 0; b < power; b++)
	{
		a *= nb;
	}
	return (a);
}
/*
int	main(void)
{
	printf("2^3 = %d\n", ft_iterative_power(2, 3));
	return (0);
}*/

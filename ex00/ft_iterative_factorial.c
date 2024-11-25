/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giamrugg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 18:11:54 by giamrugg          #+#    #+#             */
/*   Updated: 2024/11/25 18:34:34 by giamrugg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	result;
	int	i;

	i = 1;
	result = 1;
	if (nb < 0)
	{
		return (0);
	}
	while (i && i <= nb)
	{
		result *= i;
		i++;
	}
	return (result);
}
/*
int	main (void)
{
	int	nb = 6;
	int	fact = ft_iterative_factorial(nb);
	printf("Il fattoriale di %d è %d\n", nb, fact);
	return (0);
}*/

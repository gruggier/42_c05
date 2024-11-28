/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giamrugg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 11:56:45 by giamrugg          #+#    #+#             */
/*   Updated: 2024/11/28 12:23:00 by giamrugg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
	{
		return (0);
	}
	if ((nb == 0 && power == 0) || (power == 0))
	{
		return (1);
	}
	return (nb * ft_recursive_power(nb, power - 1));
}
/*
int	main(void)
{
	printf("5^3 = %d\n", ft_recursive_power(5, 3));
	return (0);
}*/

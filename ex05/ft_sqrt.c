/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giamrugg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 15:19:02 by giamrugg          #+#    #+#             */
/*   Updated: 2024/11/28 15:30:01 by giamrugg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_sqrt(int nb)
{
	int	i;

	if (nb < 0)
	{
		return (0);
	}
	i = 0;
	while (i * i <= nb && i * i >= 0)
	{
		if (i * i == nb)
		{
			return (i);
		}
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	int num = 25;
	int sqrt_result = ft_sqrt(num);
	
	if (sqrt_result)
	{
		printf("La radice di %d è %d\n", num, sqrt_result);
	}
	else
	{
        printf("La radice di %d è un numero irrazionale\n", num);
	}
	return (0);
}*/

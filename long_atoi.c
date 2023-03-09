/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   long_atoi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shifterpro <shifterpro@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 10:40:23 by shifterpro        #+#    #+#             */
/*   Updated: 2022/12/16 14:53:43 by shifterpro       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long	long_atoi(char *av)
{
	int				i;
	int				sign;
	long long int	res;

	i = 0;
	sign = 1;
	res = 0;
	while (av[i] == ' ' || (av[i] >= 9 && av[i] <= 13))
		i++;
	if (av[i] == '+' || av[i] == '-')
	{
		if (av[i] == '-')
			sign = -1;
		i++;
	}
	while (av[i] >= '0' && av[i] <= '9')
	{
		res *= 10;
		res += av[i] - 48;
		i++;
	}
	return (res * sign);
}

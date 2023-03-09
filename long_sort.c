/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   long_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shifterpro <shifterpro@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 14:46:55 by shifterpro        #+#    #+#             */
/*   Updated: 2023/03/02 11:07:55 by shifterpro       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_half(t_stack *stack)
{
	size_t	i;
	size_t	j;
	size_t	total1;
	size_t	total2;

	i = 0;
	total1 = 0;
	total2 = 0;
	j = stack->size_a;
	while (i < j / 2) //inférieur strict ?
	{
		total1 += stack->stack_a[i];
		i++;
	}
	i = stack->size_a;
	while (i > j / 2)
	{
		total2 += stack->stack_a[i];
		i--;
	}
	if (total1 > total2)
		push to b
	else
		push to b;
}

void	long_sort(t_stack *stack)
{
	int	i;

	i = 0;
	
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shifterpro <shifterpro@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 09:23:18 by shifterpro        #+#    #+#             */
/*   Updated: 2022/12/16 14:53:29 by shifterpro       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	stack_sort(t_stack stack, int i)
{
	int	tmp;
	int	j;

	while (i < stack.size_a)
	{
		stack.stack_sort[i] = stack.stack_a[i];
		i++;
	}
	i = 0;
	while (i < stack.size_a - 1)
	{
		j = i + 1;
		while (j < stack.size_a)
		{
			if (stack.stack_sort[j] < stack.stack_sort[i])
			{
				tmp = stack.stack_sort[i];
				stack.stack_sort[i] = stack.stack_sort[j];
				stack.stack_sort[j] = tmp;
			}
			j++;
		}
		i++;
	}
}

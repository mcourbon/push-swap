/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa_pb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shifterpro <shifterpro@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 15:48:03 by shifterpro        #+#    #+#             */
/*   Updated: 2022/12/16 14:53:14 by shifterpro       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_stack *stack)
{
	int	i;

	i = stack->size_a;
	if (stack->size_b == 0)
		return ;
	while (i >= 0)
	{
		stack->stack_a[i] = stack->stack_a[i - 1];
		i--;
	}
	stack->stack_a[0] = stack->stack_b[0];
	i = 0;
	while (i < stack->size_b - 1)
	{
		stack->stack_b[i] = stack->stack_b[i + 1];
		i++;
	}
	stack->stack_b[stack->size_b - 1] = 0;
	stack->size_a++;
	stack->size_b--;
	ft_putstrendl("pa\n");
}

void	pb(t_stack *stack)
{
	int	i;

	i = stack->size_b;
	if (stack->size_a == 0)
		return ;
	while (i >= 0)
	{
		stack->stack_b[i] = stack->stack_b[i - 1];
		i--;
	}
	stack->stack_b[0] = stack->stack_a[0];
	i = 0;
	while (i < stack->size_a - 1)
	{
		stack->stack_a[i] = stack->stack_a[i + 1];
		i++;
	}
	stack->stack_a[stack->size_a - 1] = 0;
	stack->size_b++;
	stack->size_a--;
	ft_putstrendl("pb\n");
}

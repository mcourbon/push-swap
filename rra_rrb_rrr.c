/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra_rrb_rrr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shifterpro <shifterpro@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 15:56:07 by shifterpro        #+#    #+#             */
/*   Updated: 2022/12/16 14:53:24 by shifterpro       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_stack *stack)
{
	int	i;
	int	tmp;

	i = stack->size_a - 1;
	tmp = stack->stack_a[stack->size_a - 1];
	while (i > 0)
	{
		stack->stack_a[i] = stack->stack_a[i - 1];
		i--;
	}
	stack->stack_a[i] = tmp;
	ft_putstrendl("rra\n");
}

void	rrb(t_stack *stack)
{
	int	i;
	int	tmp;

	i = stack->size_b - 1;
	tmp = stack->stack_b[stack->size_b - 1];
	while (i > 0)
	{
		stack->stack_b[i] = stack->stack_b[i - 1];
		i--;
	}
	stack->stack_b[i] = tmp;
	ft_putstrendl("rrb\n");
}

void	rrr(t_stack *stack)
{
	int	i;
	int	tmp;

	i = stack->size_a - 1;
	tmp = stack->stack_a[stack->size_a - 1];
	while (i > 0)
	{
		stack->stack_a[i] = stack->stack_a[i - 1];
		i--;
	}
	stack->stack_a[i] = tmp;
	i = stack->size_b - 1;
	tmp = stack->stack_b[stack->size_b - 1];
	while (i > 0)
	{
		stack->stack_b[i] = stack->stack_b[i - 1];
		i--;
	}
	stack->stack_b[i] = tmp;
	ft_putstrendl("rrr\n");
}

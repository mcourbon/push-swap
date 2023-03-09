/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa_sb_ss.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shifterpro <shifterpro@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 11:00:44 by shifterpro        #+#    #+#             */
/*   Updated: 2022/12/16 14:53:26 by shifterpro       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack *stack)
{
	int	tmp;

	if (stack->size_a > 1)
	{
		tmp = stack->stack_a[0];
		stack->stack_a[0] = stack->stack_a[1];
		stack->stack_a[1] = tmp;
	}
	ft_putstrendl("sa\n");
}

void	sb(t_stack *stack)
{
	int	tmp;

	if (stack->size_b > 1)
	{
		tmp = stack->stack_b[0];
		stack->stack_b[0] = stack->stack_b[1];
		stack->stack_b[1] = tmp;
	}
	ft_putstrendl("sb\n");
}

void	ss(t_stack *stack)
{
	int	tmp;

	if (stack->size_a > 1)
	{
		tmp = stack->stack_a[0];
		stack->stack_a[0] = stack->stack_a[1];
		stack->stack_a[1] = tmp;
	}
	if (stack->size_b > 1)
	{
		tmp = stack->stack_b[0];
		stack->stack_b[0] = stack->stack_b[1];
		stack->stack_b[1] = tmp;
	}
	ft_putstrendl("ss\n");
}

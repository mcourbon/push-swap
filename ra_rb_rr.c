/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra_rb_rr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shifterpro <shifterpro@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 15:53:12 by shifterpro        #+#    #+#             */
/*   Updated: 2022/12/16 14:54:17 by shifterpro       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_stack *stack)
{
	int	i;
	int	tmp;

	i = 0;
	tmp = stack->stack_a[0];
	while (i < stack->size_a - 1)
	{
		stack->stack_a[i] = stack->stack_a[i + 1];
		i++;
	}
	stack->stack_a[i] = tmp;
	ft_putstrendl("ra\n");
}

void	rb(t_stack *stack)
{
	int	i;
	int	tmp;

	i = 0;
	tmp = stack->stack_b[0];
	while (i < stack->size_b - 1)
	{
		stack->stack_b[i] = stack->stack_b[i + 1];
		i++;
	}
	stack->stack_b[i] = tmp;
	ft_putstrendl("rb\n");
}

void	rr(t_stack *stack)
{
	int	i;
	int	tmp;

	i = 0;
	tmp = stack->stack_a[0];
	while (i < stack->size_a - 1)
	{
		stack->stack_a[i] = stack->stack_a[i + 1];
		i++;
	}
	stack->stack_a[i] = tmp;
	i = 0;
	tmp = stack->stack_b[0];
	while (i < stack->size_b - 1)
	{
		stack->stack_b[i] = stack->stack_b[i + 1];
		i++;
	}
	stack->stack_b[i] = tmp;
	ft_putstrendl("rr\n");
}

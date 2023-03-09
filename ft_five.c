/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_five.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shifterpro <shifterpro@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 08:54:28 by shifterpro        #+#    #+#             */
/*   Updated: 2022/12/16 14:52:26 by shifterpro       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	highest_is_first_in_b(t_stack *stack, int tmp)
{
	int	i;

	i = 0;
	while (i < stack->size_b)
	{
		if (stack->stack_b[i] == tmp)
			return (1);
		i++;
	}
	return (0);
}

static int	number_after(t_stack *stack, int tmp)
{
	int	i;

	i = 0;
	if (stack->stack_sort[stack->size_sort - 1] == tmp)
		return (stack->stack_sort[0]);
	while (stack->stack_sort[i] != tmp)
		i++;
	return (stack->stack_sort[i + 1]);
}

int	push_number_top_a(t_stack *stack, int nb)
{
	int	i;
	int	top_dist;
	int	bot_dist;

	i = 0;
	while (stack->stack_a[i] != nb)
		i++;
	top_dist = stack->size_a - 1;
	bot_dist = i;
	i = 0;
	while (stack->stack_a[0] != nb)
	{
		if (top_dist > bot_dist)
			ra(stack);
		else
			rra(stack);
		i++;
	}
	return (i);
}

int	ft_five(t_stack *stack)
{
	int	tmp;

	pb(stack);
	pb(stack);
	ft_three(stack);
	tmp = stack->stack_b[0];
	if (highest_is_first_in_b(stack, number_after(stack, tmp)))
		sb(stack);
	tmp = stack->stack_b[0];
	push_number_top_a(stack, number_after(stack, tmp));
	pa(stack);
	tmp = stack->stack_b[0];
	push_number_top_a(stack, number_after(stack, tmp));
	pa(stack);
	push_number_top_a(stack, stack->stack_sort[0]);
	return (0);
}

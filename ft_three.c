/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_three.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shifterpro <shifterpro@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 10:35:08 by shifterpro        #+#    #+#             */
/*   Updated: 2022/12/16 14:53:02 by shifterpro       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_three(t_stack *stack)
{
	int	i1;
	int	i2;
	int	i3;

	i1 = stack->stack_a[0];
	i2 = stack->stack_a[1];
	i3 = stack->stack_a[2];
	if (i1 < i2 && i2 > i3 && i3 > i1)
		return (rra(stack), sa(stack), 1);
	if (i1 > i2 && i2 > i3)
		return (ra(stack), sa(stack), 1);
	if (i1 > i2 && i2 < i3 && i1 > i3)
		return (ra(stack), 1);
	if (i1 > i2 && i2 < i3 && i3 > i1)
		return (sa(stack), 1);
	if (i1 < i2 && i2 > i3 && i3 < i1)
		return (rra(stack), 1);
	return (1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   general_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shifterpro <shifterpro@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 14:50:26 by shifterpro        #+#    #+#             */
/*   Updated: 2022/12/16 14:53:07 by shifterpro       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	general_sort(t_stack *stack)
{
	if (check_sort(stack))
		return (1);
	if (stack->size_a == 2)
		return (ft_two(stack));
	if (stack->size_a == 3)
		return (ft_three(stack));
	if (stack->size_a == 5)
		return (ft_five(stack));
	else
		return (long_sort(stack), 1);
	return (1);
}

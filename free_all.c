/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_all.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shifterpro <shifterpro@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 08:34:10 by shifterpro        #+#    #+#             */
/*   Updated: 2022/12/16 14:52:06 by shifterpro       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_all(t_stack *stack)
{
	if (stack->stack_a)
		free(stack->stack_a);
	if (stack->stack_b)
		free(stack->stack_b);
	if (stack->stack_sort)
		free(stack->stack_sort);
}

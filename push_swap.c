/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shifterpro <shifterpro@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 09:59:45 by shifterpro        #+#    #+#             */
/*   Updated: 2022/12/16 14:21:42 by shifterpro       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_stack	stack;

	if (!check_stack(ac, av))
		return (0);
	stack = stack_data(av);
	if (!stack.stack_a || !stack.stack_b || !stack.stack_sort)
		return (free_all(&stack), 1);
	general_sort(&stack);
	free_all(&stack);
	return (0);
}

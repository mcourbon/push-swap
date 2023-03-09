/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_stack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shifterpro <shifterpro@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 10:14:43 by shifterpro        #+#    #+#             */
/*   Updated: 2023/03/02 10:40:33 by shifterpro       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static size_t	ft_stack_size(char **av)
{
	int	i;
	int	j;
	int	extra;

	i = 0;
	extra = 0;
	while (av[i])
	{
		j = 0;
		while (av[i][j])
		{
			if (av[i][j] == '-')
				extra++;
			j++;
		}
		i++;
	}
	return (j + extra + (i - 1) + 1);
}

t_stack	stack_data(char **av)
{
	size_t	i;
	size_t	j;
	size_t	size;
	t_stack	stack;

	i = 0;
	j = 0;
	size = ft_stack_size(av);
	stack.stack_a = ft_calloc(sizeof(int), size);
	stack.stack_b = ft_calloc(sizeof(int), size);
	stack.stack_sort = ft_calloc(sizeof(int), size);
	if (!stack.stack_a || !stack.stack_b || !stack.stack_sort)
		return (stack);
	while (j < size)
	{
		stack.stack_a[j] = long_atoi(av[i]);
		j++;
		i++;
	}
	stack.size_sort = size;
	stack.size_a = size;
	stack.size_b = 0;
	stack_sort(stack, 0);
	return (stack);
}

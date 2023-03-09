/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_errors.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shifterpro <shifterpro@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 10:01:22 by shifterpro        #+#    #+#             */
/*   Updated: 2023/02/20 10:36:30 by shifterpro       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_sort(t_stack *stack)
{
	int	i;

	i = 1;
	if (stack->size_b != 0)
		return (0);
	while (i < stack->size_a)
	{
		if (stack->stack_a[i] < stack->stack_a[i - 1])
			return (0);
		i++;
	}
	return (1);
}

int	check_dup(char **av)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	while (av[i])
	{
		str = ft_strdup(av[i]);
		j = 0;
		while (av[j])
		{
			if (j == i)
				j++;
			else if (ft_strcmp(str, av[j]) == 0)
			{
				ft_free_arg(&str);
				return (0); //Should return "Error"
			}
			else
				j++;
		}
		ft_free_arg(&str);
		i++;
	}
	return (1);
}

int	check_overflow(char *av)
{
	long long	tmp;

	tmp = long_atoi(av);
	if (tmp < INT_MIN || tmp > INT_MAX)
		return (0); // Should return "Error"
	return (1);
}

int	check_numbers(char **av)
{
	int	i;
	int	j;

	i = 0;
	if (!av[i])
		return (0);
	while (av[i])
	{
		j = 0;
		if (!check_overflow(av[i]))
			return (0);
		while (av[i][j])
		{
			if (!ft_isdigit(av[i][j])
			|| (av[i][j] == '+' && !ft_isdigit(av[i][j + 1]))
			|| (av[i][j] == '-' && !ft_isdigit(av[i][j + 1])))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	check_stack(int ac, char **av)
{
	t_stack	stack;

	stack.stack_a = NULL;
	if (ac < 2)
		return (0);
	if (ac >= 2)
	{
		if (check_numbers(av) && check_dup(av))
			stack = stack_data(av);
		else
		{
			ft_putstrendl("Error\n");
			return (0);
		}
	}
	return (1);
}

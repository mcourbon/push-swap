/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shifterpro <shifterpro@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 10:00:48 by shifterpro        #+#    #+#             */
/*   Updated: 2022/12/16 14:33:39 by shifterpro       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include <stdio.h>

typedef struct s_stacks
{
	int	*stack_a;
	int	*stack_b;
	int	*stack_sort;
	int	size_a;
	int	size_b;
	int	size_sort;
	int	error_check;
}					t_stack;

int			general_sort(t_stack *stack);
void		long_sort(t_stack *stack);
int			push_number_top_a(t_stack *stack, int nb);
int			ft_five(t_stack *stack);
int			ft_three(t_stack *stack);
int			ft_two(t_stack *stack);

void		pa(t_stack *stack);
void		pb(t_stack *stack);
void		ra(t_stack *stack);
void		rb(t_stack *stack);
void		rr(t_stack *stack);
void		rra(t_stack *stack);
void		rra(t_stack *stack);
void		rrr(t_stack *stack);
void		sa(t_stack *stack);
void		sb(t_stack *stack);
void		ss(t_stack *stack);

void		free_all(t_stack *stack);
void		*ft_calloc(size_t nmemb, size_t size);
void		ft_putstrendl(char *str);
int			ft_puterror(char *str);
long		long_atoi(char *av);
void		stack_sort(t_stack stack, int i);
int			ft_strcmp(const char *s1, const char *s2);
int			ft_isdigit(int c);
char		*ft_strdup(const char *s);
void		ft_free_arg(char **arg);
size_t		ft_strlen(const char *str);

int			check_sort(t_stack *stack);
int			check_dup(char **av);
int			check_overflow(char *av);
int			check_numbers(char **av);
int			check_stack(int ac, char **av);

t_stack		stack_data(char **av);
int			main(int ac, char **av);

#endif
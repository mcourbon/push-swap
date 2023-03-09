/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shifterpro <shifterpro@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 08:38:15 by shifterpro        #+#    #+#             */
/*   Updated: 2022/12/16 14:52:13 by shifterpro       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_bzero(void *str, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*(char *)(str + i) = 0;
		i++;
	}
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*fill;

	if (nmemb && size > SIZE_MAX / nmemb)
		return (0);
	fill = (void *)malloc(size * nmemb);
	if (!fill)
		return (0);
	ft_bzero(fill, size * nmemb);
	return (fill);
}

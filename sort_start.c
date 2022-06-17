/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_start.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwak <jkwak@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 16:17:50 by jkwak             #+#    #+#             */
/*   Updated: 2022/06/17 13:01:43 by jkwak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	which_sort(t_stack *a, t_stack *b)
{
	if (check_sorted(a))
		return ;
	/* if (a->count <= 3)
		check_and_sort_3(a);
	else if (a->count <= 5)
		check_and_sort_5(a, b);
	else */
		check_and_sort_more(a, b);
}

int	check_sorted(t_stack *a)
{
	int	i;

	if (a->count < 2)
		return (1);
	i = a->count - 1;
	while (i > 0)
	{
		if (a->arr[i - 1] < a->arr[i])
			return (0);
		i--;
	}
	return (1);
}

int	search_smallest_index(t_stack *a)
{
	int	i;
	int	min;
	int	min_idx;

	min = a->arr[0];
	min_idx = 0;
	i = 1;
	while (i < a->count)
	{
		if (min > a->arr[i])
		{
			min = a->arr[i];
			min_idx = i;
		}
		i++;
	}
	return min_idx;
}
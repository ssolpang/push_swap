/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_5.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwak <jkwak@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 14:17:50 by jkwak             #+#    #+#             */
/*   Updated: 2022/06/22 09:56:59 by jkwak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
	return (min_idx);
}

void	push_smaller_2_b(t_stack *a, t_stack *b)
{
	while (a->count > 3)
	{
		if (search_smallest_index(a) == 0)
		{
			rra(a, "rra\n");
			pb(a, b, "pb\n");
		}
		else if (search_smallest_index(a) == 1)
		{
			rra(a, "rra\n");
			rra(a, "rra\n");
			pb(a, b, "pb\n");
		}
		else if (search_smallest_index(a) == a->count - 1)
		{
			pb(a, b, "pb\n");
		}
		else if (search_smallest_index(a) == a->count - 2)
		{
			ra(a, "ra\n");
			pb(a, b, "pa\n");
		}
	}
}

void	check_and_sort_5(t_stack *a, t_stack *b)
{
	push_smaller_2_b(a, b);
	check_and_sort_3(a);
	while (b->count > 0)
		pa(a, b, "pa\n");
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_more.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwak <jkwak@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 09:52:43 by jkwak             #+#    #+#             */
/*   Updated: 2022/06/17 10:19:06 by jkwak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_all_2_b(t_stack *a, t_stack *b)
{
	int	chunk;

	chunk = 15;
	while (a->count)
	{
		if (a->arr[a->count - 1] <= b->count)
			pb(a, b);
		else if (a->arr[a->count - 1] >= (b->count + chunk))
			ra(a);
		else
			{
				pb(a, b);
				rb(b);
			}
	}
}

void	push_all_2_a(t_stack *a, t_stack *b)
{
	int	i;
	int	j;

	while (b->count)
	{
		i = 0;
		j = 0;
		while (b->arr[(b->count - 1) - i] != (b->count - 1))
			i++;
		while (b->arr[j] != (b->count - 1))
			j++;
		if (i <= j)
			while (b->arr[b->count - 1] != b->count - 1)
				rb(b);
		else
			while (b->arr[b->count - 1] != b->count - 1)
				rrb(b);
		pa(a, b);
	}
}

void	check_and_sort_more(t_stack *a, t_stack *b)
{
	push_all_2_b(a, b);
	push_all_2_a(a, b);
}
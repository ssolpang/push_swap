/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_more.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwak <jkwak@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 09:52:43 by jkwak             #+#    #+#             */
/*   Updated: 2022/06/21 14:12:04 by jkwak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	better_rotate(t_stack *a)
{
	int	top;
	int	bottom;
	int	rotate;
	int	reverse_rotate;
	int	i;

	rotate = 0;
	reverse_rotate = 0;
	i = -1;
	while (++i < (a->count / 2))
	{
		top = 0;
		bottom = 0;
		while (a->arr[(a->count - 1) - top] != i)
			top++;
		while (a->arr[bottom] != i)
			bottom++;
		if (top <= bottom)
			rotate++;
		else
			reverse_rotate++;
	}
	if (rotate + (a->count / 10) >= reverse_rotate)
		return (1);
	return (2);
}

int	optimal_chunk(int size)
{
	int	chunk;

	chunk = 0.000000053 * size * size + 0.03 * size + 14.5;
	return (chunk);
}

void	push_all_2_b(t_stack *a, t_stack *b)
{
	int	chunk;
	int	which_rotate;

	chunk = optimal_chunk(a->count);
	which_rotate = better_rotate(a);
	while (a->count)
	{
		if (a->arr[a->count - 1] <= b->count)
			pb(a, b, "pb\n");
		else if (a->arr[a->count - 1] >= (b->count + chunk))
				if (which_rotate == 1)
					ra(a, "ra\n");
				else
					rra(a, "rra\n");
		else
		{
			pb(a, b, "pb\n");
			if ((a->arr[a->count - 1] >= (b->count + chunk))
				&& (which_rotate == 1))
				rr(a, b, "rr\n");
			else
				rb(b, "rb\n");
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
				rb(b, "rb\n");
		else
			while (b->arr[b->count - 1] != b->count - 1)
				rrb(b, "rrb\n");
		pa(a, b, "pa\n");
	}
}

void	check_and_sort_more(t_stack *a, t_stack *b)
{
	push_all_2_b(a, b);
	push_all_2_a(a, b);
}
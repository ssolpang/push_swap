/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_more.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwak <jkwak@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 09:52:43 by jkwak             #+#    #+#             */
/*   Updated: 2022/06/20 14:48:30 by jkwak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* int	better_rotate(t_stack *a)
{
	int	half;
	int	top;
	int	bottom;
	int	i;

	half = a->count / 2;
	top = a->count - 1;
	bottom = 0;
	i = 0;
	while (top > half)
		if (a->arr[top--] == i)
			break ;
	while (bottom <= half)
		if (a->arr[bottom++] == i)
			break ;
} */

int	optimal_chunk(int size)
{
	int	chunk;

	chunk = 0.000000053 * size * size + 0.03 * size + 14.5;
	return (chunk);
}

void	push_all_2_b(t_stack *a, t_stack *b)
{
	int	chunk;

	chunk = optimal_chunk(a->count);
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
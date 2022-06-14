/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_5.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwak <jkwak@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 14:17:50 by jkwak             #+#    #+#             */
/*   Updated: 2022/06/14 16:21:35 by jkwak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_and_sort_5(t_stack *a, t_stack *b)
{
	push_smaller_2_b(a, b);
	check_and_sort_3(a);
	while (b->count > 0)
		pa(a, b);
}

void	push_smaller_2_b(t_stack *a, t_stack *b)
{
	while (a->count > 3)
	{
		if (search_smallest_index(a) == 0)
		{
			rra(a);
			pb(a, b);
		}
		else if (search_smallest_index(a) == 1)
		{
			rra(a);
			rra(a);
			pb(a, b);
		}
		else if (search_smallest_index(a) == a->count - 1)
		{
			pb(a, b);
		}
		else if (search_smallest_index(a) == a->count - 2)
		{
			ra(a);
			pb(a, b);
		}
	}
}
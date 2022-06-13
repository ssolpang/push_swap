/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwak <jkwak@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 13:06:53 by jkwak             #+#    #+#             */
/*   Updated: 2022/06/13 16:36:01 by jkwak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	top_smallest(t_stack *a)
{
	sa(a);
	ra(a);
}

void	top_biggest(t_stack *a)
{
	ra(a);
	sa(a);
}

void	check_and_sort_3(t_stack *a)
{
	if (check_sorted(a->arr, a->count))
		return ;
	if (a->count == 2)
		sa(a);
	if (a->arr[2] == 0)
	{
		if (a->arr[1] == 1)
			return ;
		else
			top_smallest(a);
	}
	if (a->arr[2] == 1)
	{
		if (a->arr[1] == 0)
			sa(a);
		else
			rra(a);
	}
	if (a->arr[2] == 2)
	{
		if (a->arr[1] == 0)
			ra(a);
		else
			top_biggest(a);
	}
}
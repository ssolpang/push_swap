/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwak <jkwak@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 13:06:53 by jkwak             #+#    #+#             */
/*   Updated: 2022/06/15 09:41:01 by jkwak            ###   ########.fr       */
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
	if (check_sorted(a))
		return ;
	if (a->count == 2)
		sa(a);
	else if ((a->arr[2] < a->arr[1]) && (a->arr[2] < a->arr[0]))
		if (a->arr[1] < a->arr[0])
			return ;
		else
			top_smallest(a);
	else if ((a->arr[2] > a->arr[1]) && (a->arr[2] > a->arr[0]))
		if (a->arr[1] < a->arr[0])
			ra(a);
		else
			top_biggest(a);
	else
		if (a->arr[1] < a->arr[0])
			sa(a);
		else
			rra(a);
}
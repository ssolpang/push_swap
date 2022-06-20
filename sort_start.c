/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_start.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwak <jkwak@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 16:17:50 by jkwak             #+#    #+#             */
/*   Updated: 2022/06/20 13:40:01 by jkwak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

void	which_sort(t_stack *a, t_stack *b)
{
	if (check_sorted(a))
		return ;
	if (a->count <= 3)
		check_and_sort_3(a);
	else if (a->count <= 5)
		check_and_sort_5(a, b);
	else
		check_and_sort_more(a, b);
}
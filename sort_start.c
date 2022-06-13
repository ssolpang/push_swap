/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_start.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwak <jkwak@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 16:17:50 by jkwak             #+#    #+#             */
/*   Updated: 2022/06/13 16:38:42 by jkwak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	which_sort(t_stack *a, t_stack *b)
{
	if (a->count <= 3)
		check_and_sort_3(a);
	if (a->count <= 5)
		check_and_sort_5(a, b);
}

int	check_sorted(int *arr, int max)
{
	if (max <= 1)
		return (1);
	while (--max > 0)
		if (arr[max - 1] > arr[max])
			return (0);
	return (1);
}
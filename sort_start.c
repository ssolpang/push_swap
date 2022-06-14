/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_start.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwak <jkwak@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 16:17:50 by jkwak             #+#    #+#             */
/*   Updated: 2022/06/14 16:23:44 by jkwak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	which_sort(t_stack *a, t_stack *b)
{
	if (check_sorted(a->arr, a->count))
		return ;
	if (a->count <= 3)
		check_and_sort_3(a);
	else if (a->count <= 5)
		check_and_sort_5(a, b);
}

/*t_stack *a를 인자로 받도록 바꾸기*/
int	check_sorted(int *arr, int max)
{
	if (max <= 1)
		return (1);
	while (--max > 0)
		if (arr[max - 1] < arr[max])
			return (0);
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
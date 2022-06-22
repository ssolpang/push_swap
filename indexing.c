/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   indexing.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwak <jkwak@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 16:47:02 by jkwak             #+#    #+#             */
/*   Updated: 2022/06/22 09:44:50 by jkwak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_bubble_sort(int *arr, int end)
{
	int	i;

	while (0 < end)
	{
		i = 0;
		while (i < end)
		{
			if (arr[i] > arr[i + 1])
				ft_simple_swap(&arr[i], &arr[i + 1]);
			i++;
		}
		end--;
	}
}

void	insert_index(t_stack *a, t_stack *index)
{
	int	i;
	int	j;

	ft_bubble_sort(index->arr, (index->count - 1));
	i = 0;
	while (i < a->count)
	{
		j = 0;
		while (j < index->count)
		{
			if (a->arr[i] == index->arr[j])
			{
				a->arr[i] = j;
				break ;
			}
			j++;
		}
		i++;
	}
}

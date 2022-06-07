/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwak <jkwak@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 17:28:40 by jkwak             #+#    #+#             */
/*   Updated: 2022/06/07 12:13:27 by jkwak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	init_stack(t_stack *stack, int max)
{
	stack->count = 0;
	stack->arr = (int *)ft_malloc(sizeof(int) * max);
	if(!stack->arr)
	{
		stack->max = 0;
		return (-1);
	}
	stack->max = max;
	return (0);
}

int	push_stack(t_stack *stack, int value)
{
	void	*temp;

	if(stack->count >= stack->max)
		{
			temp = malloc(sizeof(int) * stack->max * 2);
			if (!temp)
				{
					stack->
				}
			memcpy(temp, stack->arr, stack->max);
			free(stack->arr);
			stack->arr = temp;
			stack->max = stack->max * 2;
		}
	stack->arr[stack->count++] = value;
	return (0);
}

int	pop_stack(t_stack *stack, int *temp)
{
	if (stack->count <= 0)
		return (-1);
	stack->count--;
	*temp = stack->arr[stack->count];
	return (0);
}


void	terminate_stack(t_stack *stack)
{
	free(stack->arr);
	free(stack);
}
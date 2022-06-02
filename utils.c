/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwak <jkwak@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 17:28:40 by jkwak             #+#    #+#             */
/*   Updated: 2022/06/02 15:32:36 by jkwak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	init_stack(t_stack *stack, int max)
{
	stack->count = 0;
	stack->arr = ft_calloc(max, sizeof(int));
	//malloc, jaham 배열로 바꾸기
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
	if(stack->count >= stack->max)
		return (-1);
	stack->arr[stack->count] = value;
	stack->count++;
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

int	peek_stack(t_stack *stack, int *temp)
{
	if (stack->count <= 0)
		return (-1);
	*temp = stack->arr[stack->count - 1];
	return (0);
}

void	terminate_stack(t_stack *stack)
{
	stack->max = 0;
	stack->count = 0;
	if (stack->arr)
		free(stack->arr);
}
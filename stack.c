/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwak <jkwak@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 19:42:31 by jkwak             #+#    #+#             */
/*   Updated: 2022/06/23 11:08:16 by jkwak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*init_stack(void)
{
	t_stack	*stack;

	stack = (t_stack *)malloc(sizeof(t_stack));
	if (!stack)
		ft_error_exit();
	stack->arr = (int *)malloc(sizeof(int) * 100);
	if (!stack->arr)
	{
		free(stack);
		ft_error_exit();
	}
	stack->max = 100;
	stack->count = 0;
	return (stack);
}

int	push_stack(t_stack *stack, int value)
{
	int	*temp;
	int	i;

	i = 0;
	while (i < stack->count)
	{
		if (value == stack->arr[i++])
			ft_error_exit();
	}
	stack->arr[stack->count++] = value;
	if (stack->count == stack->max)
	{
		temp = (int *)malloc(sizeof(int) * stack->max * 2);
		if (!temp)
			return (-1);
		ft_memcpy(temp, stack->arr, sizeof(int) * stack->max);
		free(stack->arr);
		stack->arr = temp;
		stack->max *= 2;
	}
	return (0);
}

int	pop_stack(t_stack *stack)
{
	int	temp;

	temp = stack->arr[stack->count - 1];
	stack->count -= 1;
	return (temp);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwak <jkwak@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 19:42:31 by jkwak             #+#    #+#             */
/*   Updated: 2022/06/09 13:13:20 by jkwak            ###   ########.fr       */
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
	int	i;
	int	*temp;

	i = 0;
	while (i < stack->count)
	{
		if (stack->arr[i++] == value)
			return (-1);
	}
	if(stack->count >= stack->max)
	{
		temp = (int *)malloc(sizeof(int) * stack->max * 2);
		if (!temp)
			return (-1);
		ft_memcpy(temp, stack->arr, stack->count);
		free(stack->arr);
		stack->arr = temp;
		stack->max *= 2;
	}
	stack->arr[stack->count++] = value;
	return (0);
}

int	pop_stack(t_stack *stack)
{
	int	temp;

	stack->count--;
	temp = stack->arr[stack->count];
	return (temp);
}

/*print stack 함수 for 확인용*/
#include <stdio.h>
void	print_stack(t_stack *stack)
{
	stack->count -= 1;
	while (stack->count >= 0)
	{
		printf("[%d] : %d ",
				stack->count, stack->arr[stack->count]);
		stack->count--;
	}
}
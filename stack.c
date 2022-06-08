/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwak <jkwak@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 19:42:31 by jkwak             #+#    #+#             */
/*   Updated: 2022/06/08 17:28:53 by jkwak            ###   ########.fr       */
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

void	push_stack(t_stack *stack, int value)
{
	int	*temp;

	if(stack->count >= stack->max)
	{
		temp = (int *)malloc(sizeof(int) * stack->max * 2);
		if (!temp)
		{
			terminate_stack(stack);
			ft_error_exit();
		}
		ft_memcpy(temp, stack->arr, stack->count);
		free(stack->arr);
		stack->arr = temp;
		stack->max *= 2;
	}
	stack->arr[stack->count++] = value;
}

int	pop_stack(t_stack *stack)
{
	int	temp;

	stack->count--;
	temp = stack->arr[stack->count];
	return (temp);
}

/*print stack 함수 만들기*/

void	terminate_stack(t_stack *stack)
{
	free(stack->arr);
	free(stack);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwak <jkwak@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 19:42:31 by jkwak             #+#    #+#             */
/*   Updated: 2022/06/17 12:52:11 by jkwak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*init_stack(void)
{
	t_stack	*stack;

	stack = (t_stack *)malloc(sizeof(t_stack));
	if (!stack)
		ft_error_exit();
	stack->arr = (int *)malloc(sizeof(int) * 10);
	if (!stack->arr)
	{
		free(stack);
		ft_error_exit();
	}
	stack->max = 10;
	stack->count = 0;
	return (stack);
}

int	push_stack(t_stack *stack, int value)
{
	int	*temp;

	stack->arr[stack->count++] = value;
	if(stack->count == stack->max)
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

/*print stack 함수 for 확인용*/
#include <stdio.h>
void	print_stack(t_stack *stack)
{
	int	i;

	i = stack->count - 1;
	while (i >= 0)
	{
		printf("[%d] : %d ",
				i, stack->arr[i]);
		i--;
	}
	printf("\n");
}
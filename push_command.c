/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_command.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwak <jkwak@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 10:52:21 by jkwak             #+#    #+#             */
/*   Updated: 2022/06/09 16:12:24 by jkwak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap(t_stack *stack)
{
	int	temp;
	
	if (stack->count == 1)
		return ;
	temp = stack->arr[stack->count - 1];
	stack->arr[stack->count - 1] = stack->arr[stack->count - 2];
	stack->arr[stack->count - 2] = temp;
}
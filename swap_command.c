/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_command.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwak <jkwak@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 10:51:42 by jkwak             #+#    #+#             */
/*   Updated: 2022/06/10 20:11:38 by jkwak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap(t_stack *stack)
{
	int	temp;
	
	if ((stack->count == 0) || (stack->count == 1))
		return ;
	temp = stack->arr[stack->count - 1];
	stack->arr[stack->count - 1] = stack->arr[stack->count - 2];
	stack->arr[stack->count - 2] = temp;
}

void	sa(t_stack *a)
{
	ft_swap(a);
	ft_putstr_fd("sa\n", 1);
}

void	sb(t_stack *b)
{
	ft_swap(b);
	ft_putstr_fd("sb\n", 1);
}

void	ss(t_stack *a, t_stack *b)
{
	ft_swap(a);
	ft_swap(b);
	ft_putstr_fd("ss\n", 1);
}
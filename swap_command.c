/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_command.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwak <jkwak@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 10:51:42 by jkwak             #+#    #+#             */
/*   Updated: 2022/06/18 17:47:55 by jkwak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap(t_stack *stack)
{
	int	temp;
	
	if (stack->count < 2)
		return ;
	temp = stack->arr[stack->count - 1];
	stack->arr[stack->count - 1] = stack->arr[stack->count - 2];
	stack->arr[stack->count - 2] = temp;
}

void	sa(t_stack *a)
{
	if (a->count < 2)
		return ;
	ft_swap(a);
	ft_putstr_fd("sa\n", 1);
}

void	sb(t_stack *b)
{
	if (b->count < 2)
		return ;
	ft_swap(b);
	ft_putstr_fd("sb\n", 1);
}

void	ss(t_stack *a, t_stack *b)
{
	if (a->count < 2 && b->count < 2)
		return ;
	ft_swap(a);
	ft_swap(b);
	ft_putstr_fd("ss\n", 1);
}
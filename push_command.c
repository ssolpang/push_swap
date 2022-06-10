/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_command.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwak <jkwak@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 10:52:21 by jkwak             #+#    #+#             */
/*   Updated: 2022/06/10 20:11:21 by jkwak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push(t_stack *a, t_stack *b)
{
	if (b->count == 0)
		return ;
	a->arr[a->count] = b->arr[b->count - 1];
	a->count += 1;
	b->count -= 1;
}

void	pa(t_stack *a, t_stack *b)
{
	ft_push(a, b);
	ft_putstr_fd("pa\n", 1);
}

void	pb(t_stack *a, t_stack *b)
{
	ft_push(b, a);
	ft_putstr_fd("pb\n", 1);
}
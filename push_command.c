/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_command.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwak <jkwak@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 10:52:21 by jkwak             #+#    #+#             */
/*   Updated: 2022/06/22 09:49:14 by jkwak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push(t_stack *to, t_stack *from)
{
	int	temp;

	if (!from->count)
		return ;
	temp = pop_stack(from);
	push_stack(to, temp);
}

void	pa(t_stack *a, t_stack *b, char *s)
{
	if (!b->count)
		return ;
	ft_push(a, b);
	ft_putstr_fd(s, 1);
}

void	pb(t_stack *a, t_stack *b, char *s)
{
	if (!a->count)
		return ;
	ft_push(b, a);
	ft_putstr_fd(s, 1);
}

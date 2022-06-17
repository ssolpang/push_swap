/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_command.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwak <jkwak@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 10:53:37 by jkwak             #+#    #+#             */
/*   Updated: 2022/06/17 10:13:56 by jkwak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_reverse_rotate(t_stack *a)
{
	int	i;
	int	temp;

	if (a->count < 2)
		return ;
	temp = a->arr[0];
	i = 0;
	while (i < (a->count - 1))
	{
		a->arr[i] = a->arr[i + 1];
		i++;
	}
	a->arr[a->count - 1] = temp;
}

void	rra(t_stack *a)
{
	ft_reverse_rotate(a);
	ft_putstr_fd("rra\n", 1);
}

void	rrb(t_stack *b)
{
	ft_reverse_rotate(b);
	ft_putstr_fd("rrb\n", 1);
}

void	rrr(t_stack *a, t_stack *b)
{
	ft_reverse_rotate(a);
	ft_reverse_rotate(b);
	ft_putstr_fd("rrr\n", 1);
}
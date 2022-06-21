/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_command.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwak <jkwak@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 10:52:57 by jkwak             #+#    #+#             */
/*   Updated: 2022/06/21 14:07:19 by jkwak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rotate(t_stack *a)
{
	int	i;
	int	temp;

	if (a->count < 2)
		return ;
	temp = a->arr[a->count - 1];
	i = a->count - 1;
	while (i > 0)
	{
		a->arr[i] = a->arr[i - 1];
		i--;
	}
	a->arr[0] = temp;
}

void	ra(t_stack *a, char *s)
{
	if (a->count < 2)
		return ;
	ft_rotate(a);
	ft_putstr_fd(s, 1);
}

void	rb(t_stack *b, char *s)
{
	if (b->count < 2)
		return ;
	ft_rotate(b);
	ft_putstr_fd(s, 1);
}

void	rr(t_stack *a, t_stack *b, char *s)
{
	if ((a->count < 2) && (b->count < 2))
		return ;
	ft_rotate(a);
	ft_rotate(b);
	ft_putstr_fd(s, 1);
}
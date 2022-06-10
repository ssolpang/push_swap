/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_command.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwak <jkwak@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 10:52:57 by jkwak             #+#    #+#             */
/*   Updated: 2022/06/10 20:19:06 by jkwak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rotate(t_stack *a)
{
	int	*temp;

	if ((a->count == 0) || (a->count == 1))
		return ;
	temp = (int *)malloc(sizeof(int) * (a->count));
		if (!temp)
			ft_error_exit();
	ft_memcpy(temp + 1, a->arr, sizeof(int) * (a->count - 1));
	temp[0] = a->arr[a->count - 1];
	free(a->arr);
	a->arr = temp;
}

void	ra(t_stack *a)
{
	ft_rotate(a);
	ft_putstr_fd("ra\n", 1);
}

void	rb(t_stack *b)
{
	ft_rotate(b);
	ft_putstr_fd("rb\n", 1);
}

void	rr(t_stack *a, t_stack *b)
{
	ft_rotate(a);
	ft_rotate(b);
	ft_putstr_fd("rr\n", 1);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_command.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwak <jkwak@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 10:53:37 by jkwak             #+#    #+#             */
/*   Updated: 2022/06/10 20:22:03 by jkwak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_reverse_rotate(t_stack *a)
{
	int	*temp;

	if ((a->count == 0) || (a->count == 1))
		return ;
	temp = (int *)malloc(sizeof(int) * (a->count));
		if (!temp)
			ft_error_exit();
	ft_memcpy(temp, a->arr + 1, sizeof(int) * (a->count - 1));
	temp[a->count - 1] = a->arr[0];
	free(a->arr);
	a->arr = temp;
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
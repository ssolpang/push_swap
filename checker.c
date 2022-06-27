/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwak <jkwak@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 12:44:57 by jkwak             #+#    #+#             */
/*   Updated: 2022/06/27 16:11:02 by jkwak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	apply_command(t_stack *a, t_stack *b, char *s)
{
	if (!ft_strncmp(s, "sa\n", 3))
		sa(a, 0);
	else if (!ft_strncmp(s, "sb\n", 3))
		sb(b, 0);
	else if (!ft_strncmp(s, "ss\n", 3))
		ss(a, b, 0);
	else if (!ft_strncmp(s, "pa\n", 3))
		pa(a, b, 0);
	else if (!ft_strncmp(s, "pb\n", 3))
		pb(a, b, 0);
	else if (!ft_strncmp(s, "ra\n", 3))
		ra(a, 0);
	else if (!ft_strncmp(s, "rb\n", 3))
		rb(b, 0);
	else if (!ft_strncmp(s, "rr\n", 3))
		rr(a, b, 0);
	else if (!ft_strncmp(s, "rra\n", 4))
		rra(a, 0);
	else if (!ft_strncmp(s, "rrb\n", 4))
		rrb(b, 0);
	else if (!ft_strncmp(s, "rrr\n", 4))
		rrr(a, b, 0);
	else
		ft_error_exit();
}

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;
	char	*s;

	a = init_stack();
	make_stack_a(a, argc, argv);
	if (!a->count)
		return (0);
	b = init_stack();
	s = get_next_line(0);
	while (s)
	{
		apply_command(a, b, s);
		free(s);
		s = get_next_line(0);
	}
	if (check_sorted(a) && !b->count)
		ft_putstr_fd("OK\n", 1);
	else
		ft_putstr_fd("KO\n", 1);
	terminate_stack(a);
	terminate_stack(b);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwak <jkwak@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 10:58:53 by jkwak             #+#    #+#             */
/*   Updated: 2022/06/17 13:17:33 by jkwak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

#include <stdio.h>

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;

	if (argc <= 1)
		ft_error_exit();

	a = init_stack();
	make_stack_a(a, argc, argv);
	print_stack(a);
	b = init_stack();
	which_sort(a, b);
	print_stack(a);
	//
	/* printf("make_stack_a : ");
	print_stack(a); */
	//

	return (0);
}
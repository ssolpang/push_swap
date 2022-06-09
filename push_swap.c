/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwak <jkwak@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 10:58:53 by jkwak             #+#    #+#             */
/*   Updated: 2022/06/09 20:02:36 by jkwak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

#include <stdio.h>

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*index;

	if (argc <= 1)
		ft_error_exit();
	a = init_stack();
	setting_stack(argc, argv, a);
	print_stack(a);
	printf("\n");
	index = init_stack();
	setting_stack(argc, argv, index);
	print_stack(index);
	printf("\n");
	arr_indexing(a, index);
	print_stack(a);
	printf("\n");

	return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwak <jkwak@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 10:58:53 by jkwak             #+#    #+#             */
/*   Updated: 2022/06/20 13:36:22 by jkwak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*print stack 함수 for 확인용*/
#include <stdio.h>
void	print_stack(t_stack *stack)
{
	int	i;

	i = stack->count - 1;
	while (i >= 0)
	{
		printf("[%d] : %d ",
				i, stack->arr[i]);
		i--;
	}
	printf("size : %d/%d\n\n", stack->count, stack->max);
	printf("\n");
}

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;

	a = init_stack();
	make_stack_a(a, argc, argv);
	b = init_stack();
	which_sort(a, b);

	return (0);
}
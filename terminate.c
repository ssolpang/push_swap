/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   terminate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwak <jkwak@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 17:25:20 by jkwak             #+#    #+#             */
/*   Updated: 2022/06/13 14:16:13 by jkwak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_error_exit()
{
	ft_putstr_fd("Error\n", 2);
	exit(1);
}

void	ft_free_double_pointer(char **temp, int j)
{
	while (temp[j])
	{
		free(temp[j]);
		j++;
	}
	free(temp);
}

void	terminate_stack(t_stack *stack)
{
	free(stack->arr);
	free(stack);
}

void	exit_all(char **temp, int j, t_stack *stack)
{
	ft_free_double_pointer(temp, j);
	terminate_stack(stack);
	ft_error_exit();
}
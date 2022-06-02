/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwak <jkwak@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 10:59:02 by jkwak             #+#    #+#             */
/*   Updated: 2022/06/02 15:31:45 by jkwak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <unistd.h>
#include <stdlib.h>
#include "libft/libft.h"

int		init_stack(t_stack *stack, int max);
int		push_stack(t_stack *stack, int value);
int		pop_stack(t_stack *stack, int *temp);
int		peek_stack(t_stack *stack, int *temp);
void	terminate_stack(t_stack *stack);

typedef struct s_stack
{
	int	max;
	int	count;
	int	*arr;
} t_stack;

#endif
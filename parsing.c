/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwak <jkwak@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 13:12:51 by jkwak             #+#    #+#             */
/*   Updated: 2022/06/20 11:19:45 by jkwak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_blank_argv(char *s, t_stack *a)
{
	int	i;

	i = 0;
	while(ft_is_white(s[i]))
		i++;
	if (!s[i])
		{
			terminate_stack(a);
			ft_error_exit();
		}
}

int	check_not_number(char *str)
{
	int				i;

	i = 0;
	if ((str[i] == '+') || (str[i] == '-'))
		i++;
	while (str[i])
		if (!ft_isdigit(str[i++]))
			return (1);
	return (0);
}

void	reverse_arr(t_stack *stack)
{
	int	front;
	int	rear;

	front = 0;
	rear = stack->count - 1;
	while (front < (stack->count / 2))
	{
		ft_simple_swap(&(stack->arr[front]), &(stack->arr[rear]));
		front++;
		rear--;
	}
}

void	parse_args(int argc, char **argv, t_stack *a)
{
	int		i;
	int		j;
	int		flag;
	char	**temp;

	i = 0;
	while (++i < argc)
	{
		check_blank_argv(argv[i], a);
		temp = ft_split_ps(argv[i]);
		j = 0;
		while (temp[j])
		{
			if (check_not_number(temp[j]))
				exit_all(temp, j, a);
			flag = push_stack(a, ft_atoi_ps(temp, j, a));
			if (flag == -1)
				exit_all(temp, j, a);
			free(temp[j]);
			j++;
		}
		free(temp);
	}
	reverse_arr(a);
}

void	make_stack_a(t_stack *a, int argc, char **argv)
{
	t_stack	*index;

	index = init_stack();
	parse_args(argc, argv, index);
	parse_args(argc, argv, a);
	insert_index(a, index);
	terminate_stack(index);
}
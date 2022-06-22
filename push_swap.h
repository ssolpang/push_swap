/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwak <jkwak@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 10:59:02 by jkwak             #+#    #+#             */
/*   Updated: 2022/06/22 09:51:10 by jkwak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include "libft/libft.h"

typedef struct s_stack
{
	int	max;
	int	count;
	int	*arr;
}	t_stack;

/*stack.c*/
t_stack	*init_stack(void);
int		push_stack(t_stack *stack, int value);
int		pop_stack(t_stack *stack);

/*split_4_ps.c*/
char	**ft_split_ps(char const *s);

/*parsing.c*/
void	make_stack_a(t_stack *a, int argc, char **argv);

/*parsing_utils.c*/
int		ft_is_white(int c);
void	ft_simple_swap(int *a, int *b);
int		ft_atoi_ps(char **str, int j, t_stack *a);

/*indexing.c*/
void	insert_index(t_stack *a, t_stack *index);

/*terminate.c*/
void	ft_error_exit(void);
void	terminate_stack(t_stack *stack);
void	exit_all(char **temp, int j, t_stack *stack);

/*swap_command.c*/
void	sa(t_stack *a, char *s);
void	sb(t_stack *b, char *s);
void	ss(t_stack *a, t_stack *b, char *s);

/*push_command.c*/
void	pa(t_stack *a, t_stack *b, char *s);
void	pb(t_stack *a, t_stack *b, char *s);

/*rotate_command.c*/
void	ra(t_stack *a, char *s);
void	rb(t_stack *b, char *s);
void	rr(t_stack *a, t_stack *b, char *s);

/*reverse_rotate_command.c*/
void	rra(t_stack *a, char *s);
void	rrb(t_stack *b, char *s);
void	rrr(t_stack *a, t_stack *b, char *s);

/*sort_start.c*/
int		check_sorted(t_stack *a);
void	which_sort(t_stack *a, t_stack *b);

/*sort_3.c*/
void	check_and_sort_3(t_stack *a);

/*sort_5.c*/
void	check_and_sort_5(t_stack *a, t_stack *b);

/*sort_more.c*/
void	check_and_sort_more(t_stack *a, t_stack *b);

#endif
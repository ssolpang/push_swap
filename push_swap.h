/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwak <jkwak@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 10:59:02 by jkwak             #+#    #+#             */
/*   Updated: 2022/06/10 17:08:53 by jkwak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <unistd.h>
#include <stdlib.h>
#include "libft/libft.h"

typedef struct s_stack
{
	int	max;
	int	count;
	int	*arr;
} t_stack;

/*parsing.c*/
void	parse_args(int argc, char **argv, t_stack *a);
void	make_stack_a(t_stack *a, int argc, char **argv);

/*stack.c*/
t_stack	*init_stack(void);
int		push_stack(t_stack *stack, int value);
int		pop_stack(t_stack *stack);
/*확인용 프린트 함수, 삭제 예정*/
void	print_stack(t_stack *stack);

/*add_libft.c*/
int 	ft_is_white(int c);
void	ft_simple_swap(int *a, int *b);
int		ft_atoi_ps(char **str, int j, t_stack *a);

/*split_4_ps.c*/
void	word_clear_ps(char **grp);
int		word_count_ps(char const *s);
char	**word_list_ps(char **grp, char const *s, int count);
char	**ft_split_ps(char const *s);

/*terminate.c*/
void	ft_error_exit();
void	ft_free_double_pointer(char **temp, int j);
void	terminate_stack(t_stack *stack);
void	exit_all(char **temp, int j, t_stack *stack);

/*indexing.c*/
void	ft_bubble_sort(int *arr, int end);
void	insert_index(t_stack *a, t_stack *index);

#endif
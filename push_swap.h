/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwak <jkwak@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 10:59:02 by jkwak             #+#    #+#             */
/*   Updated: 2022/06/08 16:11:16 by jkwak            ###   ########.fr       */
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
int				check_error(char *str);
int				setting_stack(int argc, char **argv, t_stack *a);

/*utils.c*/
t_stack			*init_stack(void);
void			push_stack(t_stack *stack, int value);
int				pop_stack(t_stack *stack);
void			terminate_stack(t_stack *stack);

/*add_libft.c*/
void			ft_error_exit();
int 			ft_is_white(int c);
void			ft_free_double_pointer(char **temp);
long long int	ft_atoi_ps(const char *str);

/*split_4_ps.c*/
void			word_clear_ps(char **grp);
int				word_count_ps(char const *s);
char			**word_list_ps(char **grp, char const *s, int count);
char			**ft_split_ps(char const *s);

#endif
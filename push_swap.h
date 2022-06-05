/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwak <jkwak@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 10:59:02 by jkwak             #+#    #+#             */
/*   Updated: 2022/06/05 23:12:13 by jkwak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <unistd.h>
#include <stdlib.h>
#include "libft/libft.h"

/*utils.c*/
int				init_stack(t_stack *stack, int max);
int				push_stack(t_stack *stack, int value);
int				pop_stack(t_stack *stack, int *temp);
int				peek_stack(t_stack *stack, int *temp);
void			terminate_stack(t_stack *stack);

/*add_libft.c*/
int 			ft_iswhite(int c);
long long int	ft_atoi_ps(const char *str);

/*split_4_ps.c*/
void			word_clear_ps(char **grp);
int				word_count_ps(char const *s);
char			**word_list_ps(char **grp, char const *s, int count);
char			**ft_split_ps(char const *s);

typedef struct s_stack
{
	int	max;
	int	count;
	int	*arr;
} t_stack;

#endif
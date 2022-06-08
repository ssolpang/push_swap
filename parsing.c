/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwak <jkwak@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 13:12:51 by jkwak             #+#    #+#             */
/*   Updated: 2022/06/08 17:01:07 by jkwak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_blank_argv(char *s)
{
	int	i;

	i = 0;
	while(ft_is_white(s[i]))
		i++;
	if (!s[i])
		ft_error_exit();
}

int	check_error(char *str)
{
	int				i;
	long long int	nbr;

	i = 0;
	if ((str[i] == '+') || (str[i] == '-'))
		i++;
	while (str[i])
		if (!ft_isdigit(str[i++]))
			return (1);
	nbr = ft_atoi_ps(str);
	if ((nbr > 2147483647) || (nbr < -2147483648))
		return (1);
	return (0);
}

int	setting_stack(int argc, char **argv, t_stack *a)
{
	int		i;
	int		j;
	char	**temp;

	i = 0;
	while (++i < argc)
	{
		check_blank_argv(argv[i]);
		temp = ft_split_ps(argv[i]);
		j = 0;
		while (temp[j])
		{
			if (check_error(temp[j]))
			{
				ft_free_double_pointer(temp);
				ft_error_exit();
			}
			push_stack(a, ft_atoi(temp[j]));
			free(temp[j]);
			j++;
		}
		free(temp);
	}
	return (0);
}
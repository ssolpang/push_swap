/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwak <jkwak@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 13:12:51 by jkwak             #+#    #+#             */
/*   Updated: 2022/06/07 20:16:17 by jkwak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_error(char *str)
{
	int				i;
	long long int	nbr;

	if (ft_strlen(str) == 0)
		return (1);
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
		temp = ft_split_ps(argv[i]);
		j = 0;
		while (temp[j])
		{
			if (check_error(temp[j]))
				return (-1);
			push_stack(a, ft_atoi(temp[j++]));
		}
	}
	return (0);
}
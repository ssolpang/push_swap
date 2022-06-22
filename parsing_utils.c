/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwak <jkwak@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 16:02:45 by jkwak             #+#    #+#             */
/*   Updated: 2022/06/22 09:48:22 by jkwak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_is_white(int c)
{
	if (((c >= 9) && (c <= 13))
		|| (c == 32))
		return (1);
	return (0);
}

void	ft_simple_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	ft_atoi_ps(char **str, int j, t_stack *a)
{
	int				i;
	int				sign;
	long long int	nbr;

	i = 0;
	sign = 1;
	if ((str[j][i] == '+') || (str[j][i] == '-'))
	{
		if (str[j][i] == '-')
			sign = -1;
		i++;
	}
	nbr = 0;
	while ((str[j][i] >= '0') && (str[j][i] <= '9'))
	{
		nbr = (nbr * 10) + str[j][i] - '0';
		i++;
	}
	nbr = sign * nbr;
	if ((nbr > 2147483647) || (nbr < -2147483648))
		exit_all(str, j, a);
	return ((int)nbr);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_libft.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwak <jkwak@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 16:02:45 by jkwak             #+#    #+#             */
/*   Updated: 2022/06/07 12:13:30 by jkwak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* if(stack->count >= stack->max)
		{
			temp = malloc(sizeof(int) * stack->max * 2);
			if (!temp)
				{
					stack->
				}
			memcpy(temp, stack->arr, stack->max);
			free(stack->arr);
			stack->arr = temp;
			stack->max = stack->max * 2;
		} */

void	error_exit()
{
	ft_putstr_fd("error\n", 1);
	exit(1);
}

int ft_iswhite(int c)
{
    if (((c >= 9) && (c <= 13))
		|| (c == 32))
        return (1);
    return (0);
}

long long int	ft_atoi_ps(const char *str)
{
	int				i;
	int				sign;
	long long int	nbr;

	i = 0;
	while (((str[i] >= 9) && (str[i] <= 13))
		|| (str[i] == 32))
		i++;
	sign = 1;
	if ((str[i] == '+') || (str[i] == '-'))
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	nbr = 0;
	while ((str[i] >= '0') && (str[i] <= '9'))
	{
		nbr = (nbr * 10) + str[i] - '0';
		i++;
	}
	return (sign * nbr);
}
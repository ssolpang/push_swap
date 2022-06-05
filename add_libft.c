/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_libft.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwak <jkwak@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 16:02:45 by jkwak             #+#    #+#             */
/*   Updated: 2022/06/05 21:52:56 by jkwak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
	while (((*(str + i) >= 9) && (*(str + i) <= 13))
		|| (*(str + i) == 32))
		i++;
	sign = 1;
	if ((*(str + i) == '+') || (*(str + i) == '-'))
	{
		if (*(str + i) == '-')
			sign = -1;
		i++;
	}
	nbr = 0;
	while ((*(str + i) >= '0') && (*(str + i) <= '9'))
	{
		nbr = (nbr * 10) + *(str + i) - '0';
		i++;
	}
	return (sign * nbr);
}
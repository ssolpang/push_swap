/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_libft.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwak <jkwak@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 16:02:45 by jkwak             #+#    #+#             */
/*   Updated: 2022/06/08 17:29:22 by jkwak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_error_exit()
{
	ft_putstr_fd("error\n", 1);
	exit(1);
}

int ft_is_white(int c)
{
    if (((c >= 9) && (c <= 13))
		|| (c == 32))
        return (1);
    return (0);
}

void	ft_free_double_pointer(char **temp)
{
	int	i;

	i = 0;
	while (temp[i])
	{
		if (temp[i])
			free(temp[i]);
		i++;
	}
	free(temp);
}

int	ft_atoi_ps(const char *str)
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
	if ((nbr > 2147483647) || (nbr < -2147483648))
		ft_error_exit(); /*에러 및 해제 처리 필요*/
	return ((int)(sign * nbr));
}
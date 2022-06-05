/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwak <jkwak@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 13:12:51 by jkwak             #+#    #+#             */
/*   Updated: 2022/06/05 23:11:16 by jkwak            ###   ########.fr       */
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

char	**if_split(char *str, char **temp)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (ft_iswhite(str[i]))
			{
				temp = ft_split_ps(str);
				return (temp);
			}
		i++;
	}
	return (NULL);
}

int	setting_stack(int argc, char **argv, t_stack *a)
{
	int		i;
	int		j;
	char	**temp;

	i = 0;
	while (++i < argc)
	{
		temp = if_split(argv[i], temp); //split가 실패해도 NULL, split할 게 없어도 NULL..
		if (temp)
		{
			j = 0;
			while (temp[j])
			{
				if (check_error(temp[j]))
					return (/*에러 처리*/ -1);
				a->arr[a->count++] = ft_atoi(temp[j++]);
			}
		}
		else
			if (check_error(argv[i]))
				return (/*에러 처리*/ -1);
			else
				a->arr[a->count++] = ft_atoi(argv[i]);
	}
	return (/*정상 작동*/ 0);
}

//표준 입력으로 인자를 받아서 int로 변환
//int범위를 넘는 수, 수가 아닌 문자 등 예외 에러 처리
//atoi 함수에서 예외처리할 수도 있음

//에러 시 exit하고 "error" 출력하는 함수

//malloc을 안 쓸 수 있으면 되도록 안 쓰고 싶음
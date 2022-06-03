/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwak <jkwak@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 13:12:51 by jkwak             #+#    #+#             */
/*   Updated: 2022/06/03 14:31:28 by jkwak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_error()
{
	//정상이면 0, 에러면 -1 리턴
}

char	**if_split(char *str, char **temp)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 9 && str[i] <= 13)
			|| str[i] == 32)
			{
				temp = ft_split(str, '공백');
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

	i = 1;
	while (i < argc)
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
			check_error(argv[i]);
		a->arr[a->count++] = ft_atoi(argv[i++]);
	}
}

//표준 입력으로 인자를 받아서 int로 변환
//int범위를 넘는 수, 수가 아닌 문자 등 예외 에러 처리
//atoi 함수에서 예외처리할 수도 있음

//에러 시 exit하고 "error" 출력하는 함수
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwak <jkwak@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 13:12:51 by jkwak             #+#    #+#             */
/*   Updated: 2022/06/02 17:13:01 by jkwak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	if_split(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 9 && str[i] <= 13)
			|| str[i] == 32)
			return (1);
		i++;
	}
	return (0);
}

int	setting_stack(int argc, char **argv, t_stack *a)
{
	int	i;
	int	flag;

	i = 1;
	while (i < argc)
	{
		flag = if_split(argv[i]);
		if (flag == 1)
		{
			ft_split(argv[i]);
		}
		a->arr[a->count++] = ft_atoi(argv[i++]);
	}
}

//표준 입력으로 인자를 받아서 int로 변환
//int범위를 넘는 수, 수가 아닌 문자 등 예외 에러 처리
//atoi 함수에서 예외처리할 수도 있음

//에러 시 exit하고 "error" 출력하는 함수
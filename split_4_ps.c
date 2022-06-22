/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split_4_ps.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwak <jkwak@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 19:27:59 by jkwak             #+#    #+#             */
/*   Updated: 2022/06/22 10:05:32 by jkwak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	word_clear_ps(char **grp)
{
	int	i;

	i = 0;
	while (grp[i])
	{
		free(grp[i]);
		i++;
	}
	free(grp);
}

int	word_count_ps(char const *s)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (ft_is_white(s[i]))
			i++;
		else
		{
			count++;
			while (s[i] && (!ft_is_white(s[i])))
				i++;
		}	
	}
	return (count);
}

char	**word_list_ps(char **grp, char const *s, int count)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	j = 0;
	while (s[i] && (j < count))
	{
		len = 0;
		while (s[i] && (ft_is_white(s[i])))
			i++;
		while (s [i] && (!ft_is_white(s[i])))
		{
			i++;
			len++;
		}
		grp[j] = (char *)malloc(sizeof(char) * (len + 1));
		if (!grp[j])
		{
			word_clear_ps(grp);
			return (NULL);
		}
		ft_strlcpy((grp[j++]), &s[i - len], len + 1);
	}
	return (grp);
}

char	**ft_split_ps(char const *s)
{
	int		count;
	char	**grp;

	if (!s)
		return (NULL);
	count = word_count_ps(s);
	grp = (char **)malloc(sizeof(char *) * (count + 1));
	if (!grp)
		return (NULL);
	grp = word_list_ps(grp, s, count);
	if (!grp)
		return (NULL);
	grp[count] = NULL;
	return (grp);
}

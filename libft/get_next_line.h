/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwak <jkwak@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 22:52:43 by jkwak             #+#    #+#             */
/*   Updated: 2022/06/21 16:44:38 by jkwak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>
# include "libft.h"

# define BUFFER_SIZE 100

char	*ft_strjoin_gnl(char *s1, char *s2);

int		check_newline(char *line);
char	*read_line(int fd, char *temp);
char	*the_rest(char *temp);
char	*cut_line(char *temp);
char	*get_next_line(int fd);

#endif

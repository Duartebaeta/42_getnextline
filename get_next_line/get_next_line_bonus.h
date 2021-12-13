/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhomem-d <dhomem-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 15:20:11 by dhomem-d          #+#    #+#             */
/*   Updated: 2021/12/02 13:01:44 by dhomem-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include <fcntl.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

int		find_nl(char *s);
char	*ft_substr(char const *s, size_t start, size_t end);
size_t	ft_strlen(const char *s);
char	*ft_strdup(char const *s);
char	*ft_strjoin(char const *s1, char const *s2);
char	*get_next_line(int fd);
char	*check_return(char **s, int bytes);

#endif
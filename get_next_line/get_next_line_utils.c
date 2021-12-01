/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhomem-d <dhomem-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 15:20:00 by dhomem-d          #+#    #+#             */
/*   Updated: 2021/12/01 16:21:22 by dhomem-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	find_nl(char *s)
{
	int	counter;

	if (!s)
		return (-1);
	counter = 0;
	while (s[counter] != '\0')
	{
		if (s[counter] == '\n')
			return (counter);
		counter++;
	}
	return (-1);
}

char	*ft_substr(char const *s, size_t start, size_t end)
{
	char		*substr;
	size_t		counter;
	size_t		size;

	size = end - start + 1;
	substr = (char *) malloc(sizeof(char) * (size + 1));
	counter = 0;
	while (start <= end && s[start] != '\0')
	{
		substr[counter] = s[start];
		counter++;
		start++;
	}
	substr[counter] = '\0';
	return (substr);
}

size_t	ft_strlen(const char *s)
{
	int	counter;

	counter = 0;
	if (s == NULL)
		return (counter);
	while (s[counter] != '\0')
		counter++;
	return (counter);
}

char	*ft_strdup(char const *s)
{
	char	*newstring;
	int		size;
	int		counter;

	size = ft_strlen(s);
	newstring = (char *) malloc(sizeof(char) * (size + 1));
	if (!newstring)
		return (NULL);
	counter = 0;
	while (s[counter] != '\0' && s != NULL)
	{
		newstring[counter] = s[counter];
		counter++;
	}
	newstring[counter] = '\0';
	return (newstring);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*newstring;
	int		counter;
	int		size;

	size = ft_strlen(s1) + ft_strlen(s2) + 1;
	newstring = (char *) malloc(sizeof(char) * size);
	if (!newstring)
		return (NULL);
	counter = 0;
	while (*s1 != '\0')
	{	
		newstring[counter] = *s1;
		s1++;
		counter++;
	}
	while (*s2 != '\0')
	{
		newstring[counter] = *s2;
		s2++;
		counter++;
	}
	newstring[counter] = '\0';
	return (newstring);
}

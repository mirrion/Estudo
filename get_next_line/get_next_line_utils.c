/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosantan <rosantan@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 14:25:45 by rosantan          #+#    #+#             */
/*   Updated: 2022/04/23 12:12:12 by rosantan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		size;
	int		i;

	size = ft_strlen(s1) + ft_strlen(s2);
	str = malloc(sizeof * str * size + 1);
	if (str == NULL)
		return (NULL);
	i = 0;
	while (size--)
	{
		if (*s1 != '\0')
			str[i++] = *s1++;
		else if (*s2 != '\0')
			str[i++] = *s2++;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_strchr(const char *str, int ch)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == (char)ch)
			return ((char *)str + i);
		i++;
	}
	if (ch == '\0')
		return ((char *)str + i);
	return (NULL);
}

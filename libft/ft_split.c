/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosantan <rosantan@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 14:21:28 by rosantan          #+#    #+#             */
/*   Updated: 2022/03/27 16:00:29 by rosantan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	init(char *s, char c)
{
	int		i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			while (s[i] == c)
			i++;
			return (i);
		}
		i++;
	}
	return (i);
}

int	end(char *s, char c)
{
	int		i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (i);
		}
		i++;
	}
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		i;

	i = 0;
	str = malloc((ft_strlen(s) + 1) * sizeof * str);
	if (str == NULL)
		return (NULL);
	if (*s == c)
		s += init((char *)s, c);
	while (*s != '\0')
	{
		str[i++] = ft_substr(s, 0, (end((char *)s, c)));
		s += init((char *)s, c);
	}
	str[i] = NULL;
	return (str);
}

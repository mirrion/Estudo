/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosantan <rosantan@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 19:56:02 by rosantan          #+#    #+#             */
/*   Updated: 2022/03/09 11:25:19 by rosantan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

size_t	ft_strlcpy(char *str, char *src, size_t n)
{
	unsigned int	i;
	unsigned int	size;

	i = 0;
	size = 0;
	while (src[size] != '\0')
	{
		size++;
	}
	if (n)
	{
		while (src[i] != '\0' && i < n - 1)
		{
			str[i] = src[i];
			i++;
		}
		str[i] = '\0';
	}
	return (size);
}

char	*ft_strdup(const char *s)
{
	char	*str;

	if (s == NULL)
		return (NULL);
	str = malloc((ft_strlen((char *)s)) * 2);
	ft_strlcpy(str, (char *)s, (ft_strlen((char *)s)));
	return (str);
}

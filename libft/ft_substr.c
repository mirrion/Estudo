/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosantan <rosantan@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 19:01:00 by rosantan          #+#    #+#             */
/*   Updated: 2022/04/09 17:21:01 by rosantan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	int		i;
	int		size;

	if (s == NULL)
		return (NULL);
	size = 1 + ft_strlen(s);
	substr = (char *) malloc(sizeof(char) * size);
	if (substr == NULL)
		return (NULL);
	i = 0;
	if (ft_strlen(s) > start)
		while (len-- && s[start] != '\0')
			substr[i++] = s[start++];
	substr[i] = '\0';
	return (substr);
}

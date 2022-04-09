/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosantan <rosantan@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 19:01:00 by rosantan          #+#    #+#             */
/*   Updated: 2022/04/09 20:41:06 by rosantan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	int		i;
	int		size;

	size = 1;
	if (s[start])
		size = ft_strlen(s + start) + 1 * sizeof * substr;
	//printf("\n%i", size);
	substr = malloc(size);
	if (substr == NULL)
		return (NULL);
	i = 0;
	if (ft_strlen(s) > start)
		while (len-- && s[start] != '\0')
			substr[i++] = s[start++];
	substr[i] = '\0';
	return (substr);
}

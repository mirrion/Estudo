/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosantan <rosantan@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 08:36:58 by rosantan          #+#    #+#             */
/*   Updated: 2022/03/25 13:32:16 by rosantan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

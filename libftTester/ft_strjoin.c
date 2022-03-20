/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosantan <rosantan@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 08:36:58 by rosantan          #+#    #+#             */
/*   Updated: 2022/03/12 08:55:56 by rosantan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*strjoin;
	int		size;
	int		i;


	size = ft_strlen(s1) + ft_strlen(s2);
	strjoin = (char *)malloc(sizeof(char) * (size));
	if (strjoin == NULL)
		return (NULL);
	i = 0;
	while (size--)
	{
		if (*s1 != '\0')
			strjoin[i++] = *s1++;
		else if (*s2 != '\0')
			strjoin[i++] = *s2++;
	}
	return (strjoin);
}

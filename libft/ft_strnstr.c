/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosantan <rosantan@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 06:39:04 by rosantan          #+#    #+#             */
/*   Updated: 2022/03/23 11:46:33 by rosantan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char	*big, const char *little, size_t len)
{
	size_t	i;
	int		j;

	i = 0;
	j = 0;
	if (ft_strlen(little) == 0)
		return ((char *)big);
	while (len--)
	{
		if (little[j] == big[i])
		{
			i++;
			j++;
		}
		if (little[j] == '\0')
			return ((char *)big + i - j);
		if (big[i] == '\0')
			return ((char *) big);
		j = 0;
		i++;
	}
	return (NULL);
}

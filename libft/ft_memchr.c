/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosantan <rosantan@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 17:52:59 by rosantan          #+#    #+#             */
/*   Updated: 2022/03/09 18:12:16 by rosantan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *buffer, int ch, size_t count)
{
	int		i;
	char	*str;

	i = 0;
	str = (char *)buffer;
	while (i < count)
	{
		if (str[i] == ch)
			return (str + i);
		i++;
	}
	return (NULL);
}

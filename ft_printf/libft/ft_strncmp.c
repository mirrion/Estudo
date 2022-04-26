/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosantan <rosantan@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 08:51:49 by rosantan          #+#    #+#             */
/*   Updated: 2022/03/20 17:54:03 by rosantan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t count)
{
	char	c1;
	char	c2;

	while (count)
	{
		c1 = *str1++;
		c2 = *str2++;
		if (c1 != c2)
			return ((unsigned char)c1 - (unsigned char)c2);
		if (!c1)
			break ;
		count--;
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosantan <rosantan@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 17:39:46 by rosantan          #+#    #+#             */
/*   Updated: 2022/03/23 12:41:32 by rosantan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *str, const char *src, size_t n)
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

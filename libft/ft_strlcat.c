/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosantan <rosantan@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 18:55:11 by rosantan          #+#    #+#             */
/*   Updated: 2022/03/09 11:25:26 by rosantan         ###   ########.fr       */
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

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int	i;
	int	sizecpy;
	int	sizedst;

	i = 0;
	sizedst = ft_strlen(dst);
	sizecpy = (size - sizedst - 1);
	if (size < sizedst)
		return (size + ft_strlen((char *)src));
	while (i != sizecpy && src[i] != '\0')
	{
		dst[sizedst + i] = src[i];
		i++;
	}
	dst[sizedst + i] = '\0';
	return (ft_strlen(dst));
}

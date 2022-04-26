/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosantan <rosantan@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 18:55:11 by rosantan          #+#    #+#             */
/*   Updated: 2022/03/23 10:43:31 by rosantan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int		i;
	int		sizecpy;
	size_t	sizedst;

	i = 0;
	sizedst = ft_strlen(dst);
	sizecpy = (size - sizedst - 1);
	if (size <= sizedst)
		return (size + ft_strlen((char *)src));
	while (i != sizecpy && src[i] != '\0')
	{
		dst[sizedst + i] = src[i];
		i++;
	}
	dst[sizedst + i] = '\0';
	return (sizedst + ft_strlen(src));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosantan <rosantan@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 19:53:56 by rosantan          #+#    #+#             */
/*   Updated: 2022/03/10 18:55:47 by rosantan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*tempdst;
	const char	*tempsrc;

	if (dest == 0)
		return (NULL);
	tempdst = dest;
	tempsrc = src;
	if (dest <= src)
		while (n--)
			*tempdst++ = *tempsrc++;
	else
	{
		tempdst += n;
		tempsrc += n;
		while (n--)
			*--tempdst = *--tempsrc;
	}
	return (dest);
}

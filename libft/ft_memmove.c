/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosantan <rosantan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 19:53:56 by rosantan          #+#    #+#             */
/*   Updated: 2022/04/06 15:39:05 by rosantan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*tempdst;
	const char	*tempsrc;

	if (dest == NULL && src == NULL)
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

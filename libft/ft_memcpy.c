/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosantan <rosantan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 19:33:49 by rosantan          #+#    #+#             */
/*   Updated: 2022/04/06 15:38:27 by rosantan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const char	*sc;
	char		*dt;

	if (dest == NULL && src == NULL)
		return (NULL);
	sc = src;
	dt = dest;
	while (n--)
	{
		*dt++ = *sc++;
	}
	return (dest);
}

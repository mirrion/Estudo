/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosantan <rosantan@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 19:33:49 by rosantan          #+#    #+#             */
/*   Updated: 2022/03/10 10:11:41 by rosantan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const char	*sc;
	char		*dt;

	if (dest == 0)
		return (NULL);
	sc = src;
	dt = dest;
	while (n--)
	{
		*dt++ = *sc++;
	}
	return (dest);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosantan <rosantan@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 06:32:44 by rosantan          #+#    #+#             */
/*   Updated: 2022/03/10 09:49:17 by rosantan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *buf1, const void *buf2, size_t count)
{
	while (count--)
	{
		if ((char *)buf1++ != (char *)buf2++)
			return ((char *)--buf1 - (char *)--buf2);
	}
	return (0);
}

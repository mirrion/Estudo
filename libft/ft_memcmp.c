/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosantan <rosantan@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 06:32:44 by rosantan          #+#    #+#             */
/*   Updated: 2022/03/09 11:24:55 by rosantan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *buf1, const void *buf2, size_t count)
{
	int	i;

	i = 0;
	while (count != 0)
	{
		if ((((char *)buf1)[i] == '\0') && (((char *)buf2)[i] == '\0'))
			return (0);
		if (((char *)buf1)[i] == '\0')
			return (-1);
		if (((char *)buf2)[i] == '\0')
			return (1);
		i++;
	}
	return (0);
}

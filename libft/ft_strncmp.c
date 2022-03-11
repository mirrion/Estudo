/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosantan <rosantan@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 08:51:49 by rosantan          #+#    #+#             */
/*   Updated: 2022/03/11 08:19:26 by rosantan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t count)
{
	int	i;

	i = 0;
	while (count--)
	{
		if (((char *)str1)[i] != ((char *)str2)[i])
			return ((((char *)str1) + i) - (((char *)str2) + i));
		if (!(((char *)str1)[i]))
			break ;
		i++;
	}
	return (0);
}

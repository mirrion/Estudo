/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosantan <rosantan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 08:11:27 by rosantan          #+#    #+#             */
/*   Updated: 2022/05/04 15:33:05 by rosantan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int ch)
{
	int		i;
	int		j;

	i = 0;
	j = ft_strlen(str);
	while (i <= j)
	{
		if (str[i] == (char)ch)
			return ((char *)&str[i]);
		i++;
	}
	return (NULL);
}

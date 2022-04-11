/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosantan <rosantan@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 08:11:27 by rosantan          #+#    #+#             */
/*   Updated: 2022/04/11 18:46:51 by rosantan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int ch)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == (char)ch)
			return ((char *)str + i);
		i++;
	}
	if (ch == '\0' || !ft_isascii(ch))
		return ((char *)str + i);
	return (NULL);
}

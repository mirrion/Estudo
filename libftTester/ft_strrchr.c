/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosantan <rosantan@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 08:40:02 by rosantan          #+#    #+#             */
/*   Updated: 2022/03/09 11:27:13 by rosantan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	int		i;
	char	*ret;

	i = 0;
	ret = (char *)str;
	while (ret[i] != '\0')
	{
		i++;
	}
	while (i != -1)
	{
		if (ret[i] == ch)
		{
			return (ret + i);
		}
		i--;
	}
	return (NULL);
}

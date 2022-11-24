/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosantan <rosantan@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 19:56:02 by rosantan          #+#    #+#             */
/*   Updated: 2022/03/23 12:45:21 by rosantan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*str;

	str = malloc(ft_strlen(s) * sizeof * str + 1);
	if (str == NULL)
		return (NULL);
	ft_strlcpy(str, (char *)s, (ft_strlen((char *)s) + 1));
	return (str);
}

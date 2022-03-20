/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosantan <rosantan@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 19:56:02 by rosantan          #+#    #+#             */
/*   Updated: 2022/03/11 19:30:17 by rosantan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*str;

	if (s == NULL)
		return (NULL);
	str = malloc((ft_strlen((char *)s)) * 2);
	ft_strlcpy(str, (char *)s, (ft_strlen((char *)s)));
	return (str);
}

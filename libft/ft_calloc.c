/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosantan <rosantan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 11:57:45 by rosantan          #+#    #+#             */
/*   Updated: 2022/05/04 15:35:31 by rosantan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	*rtn;
	size_t	total;

	total = size * nmemb;
	if (nmemb != 0 && total / nmemb != size)
		return (NULL);
	rtn = malloc(nmemb * size);
	if (rtn == NULL)
		return (NULL);
	ft_bzero(rtn, nmemb * size);
	return (rtn);
}

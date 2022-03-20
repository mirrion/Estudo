/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_callloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosantan <rosantan@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 11:22:27 by rosantan          #+#    #+#             */
/*   Updated: 2022/03/02 19:11:34 by rosantan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	int	*rtn;

	if (nmemb == '0' || size == '0')
	{
		return (NULL);
	}
	rtn = (int *) malloc (nmemb * size);
	ft_bzero(rtn, nmemb * size);
	return (rtn);
}

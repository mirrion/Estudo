/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosantan <rosantan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 11:57:45 by rosantan          #+#    #+#             */
/*   Updated: 2022/04/06 15:57:04 by rosantan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	int	*rtn;

	rtn = (int *) malloc (nmemb * size);
	if (rtn == NULL)
		return (NULL);
	ft_bzero(rtn, nmemb * size);
	return (rtn);
}

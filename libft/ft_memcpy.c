/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosantan <rosantan@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 19:33:49 by rosantan          #+#    #+#             */
/*   Updated: 2022/03/09 11:25:00 by rosantan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_memcpy(char *str, char *src, int size)
{
	int	i;

	i = 0;
	while (i != size)
	{
		str[i] = src[i];
		i++;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosantan <rosantan@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 19:26:26 by rosantan          #+#    #+#             */
/*   Updated: 2022/03/02 18:49:38 by rosantan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		i;
	int		negative;

	negative = 1;
	i = 0;
	while (ft_strchr("\t\n\v\f\r ", *str))
	*str++;
	while (ft_strchr("+-", *str))
		if (*str++ == '-')
			negative *= -1;
	while (*str <= '9' && *str >= '0')
	{
		i *= 10;
		i += *str - '0';
		str++;
	}
	return (i * negative);
}

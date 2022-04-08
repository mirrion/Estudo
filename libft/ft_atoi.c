/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosantan <rosantan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 19:26:26 by rosantan          #+#    #+#             */
/*   Updated: 2022/04/06 16:30:23 by rosantan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long int	ft_atoi(const char *str)
{
	int		i;
	int		negative;

	negative = 1;
	i = 0;
	while (*str != '\0' && ft_strchr("\t\n\v\f\r ", *str) != NULL)
		str++;
	if (*str != '\0' && ft_strchr("+-", *str) != NULL)
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

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosantan <rosantan@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 05:35:30 by rosantan          #+#    #+#             */
/*   Updated: 2022/03/19 05:37:06 by rosantan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	size(int n)
{
	int	i;

	i = 0;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;

	if (n == -2147483648)
		return (ft_strdup("-2147483648 "));
	str = malloc(size(n) * sizeof * str);
	if (str == NULL)
		return (NULL);
	i = size(n);
	if (n < 0)
	{
		i++;
		str[0] = '-';
		n *= -1;
	}
	str[i] = '\0';
	while (n != 0)
	{
		str[--i] = (n % 10) + '0';
		n = n / 10;
	}
	return (str);
}

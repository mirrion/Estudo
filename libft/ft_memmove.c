/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosantan <rosantan@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 19:53:56 by rosantan          #+#    #+#             */
/*   Updated: 2022/02/20 20:32:21 by rosantan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_memmove(char *str, char *src, int size)
{
	int		i;
	char	temp;

	i = 0;
	while (i != size)
	{
		temp = src[i];
		str[i] = temp;
		i++;
	}
}

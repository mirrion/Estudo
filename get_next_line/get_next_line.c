/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosantan <rosantan@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 14:25:32 by rosantan          #+#    #+#             */
/*   Updated: 2022/04/11 15:25:35 by rosantan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char		*temp;
	char			*temp2;
	int				i;

	if (fd < 0 || BUFFER_SIZE < 0)
		return (NULL);
	i = 0;
	temp = malloc(sizeof * temp * (BUFFER_SIZE + 1));
	temp2 = malloc(sizeof * temp * (BUFFER_SIZE + 1));
	if (!temp || !temp2)
		return (NULL);
	read(fd, temp, BUFFER_SIZE);
	while (*temp != '\n')
		temp2[i++] = *temp++;
	temp2[i] = '\0';
	return (temp2);
}

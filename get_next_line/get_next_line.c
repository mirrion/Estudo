/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosantan <rosantan@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 14:25:32 by rosantan          #+#    #+#             */
/*   Updated: 2022/04/20 07:26:34 by rosantan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*readfull(int fd, char *full)
{
	char	*temp;

	temp = malloc(sizeof * temp * (BUFFER_SIZE + 1));
	if (!full)
		return (NULL);
	if (read(fd, temp, BUFFER_SIZE) == -1)
	{
		free(temp);
		return (NULL);
	}
	temp[ft_strlen(temp) + 1] = '\0';
	full = ft_strjoin(full, temp);
	free(temp);
	return (full);
}

char	*readline(char *full)
{
	char			*temp2;
	int				i;

	i = 0;
	temp2 = malloc(sizeof * full * (BUFFER_SIZE + 1));
	if (!temp2)
		return (NULL);
	while (*full != '\n')
		temp2[i++] = *full++;
	temp2[i] = '\0';
	return (temp2);
}

char	*get_next_line(int fd)
{
	static char		*full;
	char			*linetemp;

	if (fd < 0 || BUFFER_SIZE < 0)
		return (NULL);
	full = readfull(fd, full);
	if (!full)
		return (NULL);
	linetemp = readline(full);
	return (linetemp);
}

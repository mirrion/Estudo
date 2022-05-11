/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosantan <rosantan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 22:09:30 by rosantan          #+#    #+#             */
/*   Updated: 2022/05/04 23:51:36 by rosantan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	*readfull(int fd, char *full[])
{
	char	*temp;
	int		readbt;

	temp = malloc(sizeof * temp * (BUFFER_SIZE + 1));
	if (!temp)
		return ;
	readbt = -1;
	while (!ft_strchr(full[fd], '\n') && readbt != 0)
	{
		readbt = read(fd, temp, BUFFER_SIZE);
		if (readbt == -1)
		{
			free(temp);
			full[fd] = NULL;
			return ;
		}
		temp[readbt] = '\0';
		full[fd] = ft_strjoin(full[fd], temp);
	}
	free(temp);
}

char	*readline(char *full)
{
	char			*temp2;
	int				i;

	i = 0;
	if (!full[i])
		return (NULL);
	while (full[i] && full[i] != '\n')
		i++;
	temp2 = malloc(sizeof * full * (i + 2));
	if (!temp2)
		return (NULL);
	i = 0;
	while (full[i] && full[i] != '\n')
	{
		temp2[i] = full[i];
		i++;
	}
	if (full[i] == '\n')
	{
		temp2[i] = full[i];
		i++;
	}
	temp2[i] = '\0';
	return (temp2);
}

void	*newfull(char *full[], int fd)
{
	int		i;
	int		j;
	char	*temp;

	i = 0;
	while (full[fd][i] && full[fd][i] != '\n')
		i++;
	if (!full[fd][i])
	{
		free(full[fd]);
		full[fd] = NULL;
		return (NULL);
	}
	temp = malloc(sizeof * temp * (ft_strlen(full[fd]) - i + 1));
	if (!temp)
		return (NULL);
	i++;
	j = 0;
	while (full[fd][i])
		temp[j++] = full[fd][i++];
	temp[j] = '\0';
	free(full[fd]);
	full[fd] = temp;
}

char	*get_next_line(int fd)
{
	static char		*full[1024];
	char			*linetemp;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	readfull(fd, full);
	if (!full[fd])
		return (NULL);
	linetemp = readline(full[fd]);
	newfull(full, fd);
	return (linetemp);
}

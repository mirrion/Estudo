/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosantan <rosantan@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 14:25:32 by rosantan          #+#    #+#             */
/*   Updated: 2023/01/10 16:43:46 by rosantan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*readfull(int fd, char *full)
{
	char	*temp;
	int		readbt;

	temp = malloc(sizeof * temp * (BUFFER_SIZE + 1));
	if (!temp)
		return (NULL);
	readbt = 1;
	while (!ft_strchr2(full, '\n') && readbt != 0)
	{
		readbt = read(fd, temp, BUFFER_SIZE);
		if (readbt == -1)
		{
			free(temp);
			return (NULL);
		}
		temp[readbt] = '\0';
		full = ft_strjoin2(full, temp);
	}
	free(temp);
	return (full);
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

char	*newfull(char *full)
{
	int		i;
	int		j;
	char	*temp;

	i = 0;
	while (full[i] && full[i] != '\n')
		i++;
	if (!full[i])
	{
		free(full);
		return (NULL);
	}
	temp = malloc(sizeof * temp * (ft_strlen(full) - i + 1));
	if (!temp)
		return (NULL);
	i++;
	j = 0;
	while (full[i])
		temp[j++] = full[i++];
	temp[j] = '\0';
	free(full);
	return (temp);
}

char	*get_next_line(int fd)
{
	static char		*full;
	char			*linetemp;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	full = readfull(fd, full);
	if (!full)
		return (NULL);
	linetemp = readline(full);
	full = newfull(full);
	return (linetemp);
}

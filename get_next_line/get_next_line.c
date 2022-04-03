/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosantan <rosantan@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 14:25:32 by rosantan          #+#    #+#             */
/*   Updated: 2022/04/03 09:59:56 by rosantan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*read_file(char *file, int fd)
{
	char	*temp;

	temp = malloc(sizeof * temp * (BUFFER_SIZE + 1));
	if (temp == NULL)
		return (NULL);
	if (read(fd, temp, BUFFER_SIZE) == -1)
		return (NULL);
	file = temp;
	free(temp);
	return (file);

}

char	*get_next_line(int fd)
{
	static char	*file;

	if (fd < 0 || BUFFER_SIZE < 0)
		return (NULL);
	file = malloc(sizeof * file * BUFFER_SIZE);
	return (file);
}

int	main(void)
{
	char	*line;
	int		i;
	int		fd1;
	int		fd2;
	int		fd3;

	fd1 = open("tests/test.txt", O_RDONLY);
	fd2 = open("tests/test2.txt", O_RDONLY);
	fd3 = open("tests/test3.txt", O_RDONLY);
	i = 1;
	while (i < 7)
	{
		line = get_next_line(fd1);
		printf("line [%02d]: %s", i, line);
		free(line);
		line = get_next_line(fd2);
		printf("line [%02d]: %s", i, line);
		free(line);
		line = get_next_line(fd3);
		printf("line [%02d]: %s", i, line);
		free(line);
		i++;
	}
	i = 0;
	line = get_next_line(fd3);
	while (line[i] != '\0')
	{
		printf("\nTexto\n %c", line[i]);
		i++;
	}
	printf("\n fd3 %i", fd1);
	free(line);
	close(fd1);
	close(fd2);
	close(fd3);
	return (0);
}

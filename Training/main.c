/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosantan <rosantan@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 10:06:29 by rosantan          #+#    #+#             */
/*   Updated: 2022/04/11 15:15:50 by rosantan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <fcntl.h>

#define BUF_SIZE 128

char	*display(int fd)
{
	static char		*temp;
	char			*temp2;
	int				i;

	i = 0;
	temp = malloc(sizeof * temp * (BUF_SIZE + 1));
	temp2 = malloc(sizeof * temp * (BUF_SIZE + 1));
	if (!temp || !temp2)
		return (NULL);
	read(fd, temp, BUF_SIZE);
	while (*temp != '\n')
		temp2[i++] = *temp++;
	temp2[i] = '\0';
	return (temp2);
}


int	main(void)
{
	int		fd;
	char	*str;

	fd = open("program.txt", O_RDONLY);
	if (fd == -1)
	{
		printf("O arquivo nao pode ser aberto.\n");
		exit(1);
	}
	str = display(fd);
	printf("%s\n", str);
	close(fd);
}


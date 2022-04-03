/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosantan <rosantan@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 10:06:29 by rosantan          #+#    #+#             */
/*   Updated: 2022/04/03 10:49:13 by rosantan         ###   ########.fr       */
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

void input (char *buf, int fd)
{
	register int t;

	do
	{
		for (t=0 ; t< BUF_SIZE; t++) buf[t] = '\0';
		//gets(buf);
		if(write(fd, buf, BUF_SIZE) != BUF_SIZE)
		{
			printf("Erro de escrita.\n");
		}
	}	while (strcmp(buf, "quit"));
}

void display(char *buf, int fd)
{
	for(;;)
	{
		if(read(fd, buf, BUF_SIZE) == 0) return;
		printf("%s\n", buf);
	}
}


int	main(void)
{
	int		fd;
	char	buf[BUF_SIZE];

	/*
	if ((fd = open ("text.txt", O_RDONLY)) == -1)
	{
		printf("Nao pode abrir arquivo. \n");
		exit(1);
	}
	input(buf, fd);
	close(fd);*/

	if((fd = open("program.txt", O_RDONLY)) == -1)
	{
		printf("O arquivo nao pode ser aberto.\n");
		exit(1);
	}
	display(buf, fd);
	close(fd);
}


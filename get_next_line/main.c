/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosantan <rosantan@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 15:39:20 by rosantan          #+#    #+#             */
/*   Updated: 2022/04/11 15:39:48 by rosantan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

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
	str = get_next_line(fd);
	printf("%s\n", str);
	close(fd);
}

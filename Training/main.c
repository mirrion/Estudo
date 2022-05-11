/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosantan <rosantan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 10:06:29 by rosantan          #+#    #+#             */
/*   Updated: 2022/05/04 16:11:00 by rosantan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <fcntl.h>

typedef struct s_list
{
	int			*content;
	struct s_list	*next;
}	t_list;

int	main(void)
{
	t_list	test;

	test.content[0] = 112313123;
	printf("%i", test.content[0]);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosantan <rosantan@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 12:11:02 by rosantan          #+#    #+#             */
/*   Updated: 2022/04/30 10:42:42 by rosantan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <stdarg.h>

int	ft_printf(const char *str, ...);

void	testit(int i, ...)
{
	va_list	argptr;
	int		n;
	char	*s;

	va_start(argptr, i);
	if (i == 0)
	{
		n = va_arg(argptr, int);
		printf("%d\n", n);
	}
	else
	{
		s = va_arg(argptr, char *);
		printf("%s\n", s);
	}

	va_end(argptr);
}

int	main(void)
{
	testit(1, "R"); // 1st problem: 0xffffffff is not an int
    testit(1, NULL);       // 2nd problem: NULL is not a char*
	printf("TEstando");
	return (0);
}

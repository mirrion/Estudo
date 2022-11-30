/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosantan <rosantan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 12:11:02 by rosantan          #+#    #+#             */
/*   Updated: 2022/05/02 19:09:08 by rosantan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	valid(va_list argptr, const char str);
int	ft_putchar(int c);

int	ft_printf(const char *str, ...)
{
	va_list	argptr;
	int		n;
	int		i;

	i = 0;
	n = 0;
	va_start(argptr, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			n += valid(argptr, str[i + 1]);
			i++;
		}
		else
			n += ft_putchar(str[i]);
		i++;
	}	
	va_end(argptr);
	return (n);
}

int	valid(va_list argptr, const char str)
{
	int	i;

	i = 0;
	if (str == 'c')
		i += ft_putchar(va_arg(argptr, int));
	else if (str == 's')
		i += ft_printstr(va_arg(argptr, char *));
	else if (str == 'd' || str == 'i')
		i += ft_printnbr(va_arg(argptr, int));
	else if (str == 'p')
		i += ft_printptr(va_arg(argptr, unsigned long long));
	else if (str == 'u')
		i += ft_printunsigned(va_arg(argptr, unsigned int));
	else if (str == 'x' || str == 'X')
		i += ft_printhex(va_arg(argptr, unsigned int), str);
	else if (str == '%')
		i += ft_printporcent();
	return (i);
}

int	ft_putchar(int c)
{
	write(1, &c, 1);
	return (1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosantan <rosantan@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 19:48:38 by rosantan          #+#    #+#             */
/*   Updated: 2022/11/24 12:00:25 by rosantan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	exit_error(void)
{
	ft_putstr("Error\n");
	exit(1);
}

void	nulify(t_stacks *stack, t_data *new)
{
	new->element_count = 0;
	stack->count_a = 0;
	stack->count_b = 0;
	stack->min = 0;
	stack->av = 0;
	stack->max = 0;
	stack->a = NULL;
	stack->b = NULL;
}

int	ft_isspace(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != 0)
	{
		if (!((str[i] >= 9 && str[i] <= 13) || str[i] == 32))
			return (0);
		i++;
	}
	return (1);
}

int	word_count(char const *str, char c)
{
	size_t	i;
	size_t	count;
	char	c2;

	i = 0;
	count = 0;
	c2 = c;
	if (c == 32)
		c2 = 9;
	while (str[i] != 0)
	{
		if (str[i] != c && str[i] != c2)
		{
			while ((str[i] != c && str[i] != c2) && str[i] != 0)
				i++;
			count++;
		}
		else
			i++;
	}
	return (count);
}

int	*copy_int(int *dest, const int *src, int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

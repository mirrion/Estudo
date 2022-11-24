/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosantan <rosantan@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 10:18:10 by rosantan          #+#    #+#             */
/*   Updated: 2022/11/23 10:27:54 by rosantan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	check_string(const char *str)
{
	size_t	i;
	int		num;
	int		sign;

	i = 0;
	num = 0;
	sign = 0;
	while (str[i] != 0)
	{
		if (str[i] >= 48 && str[i] <= 57)
			num++;
		else if (str[i] == 32)
		{
			if (sign != 0 && num == 0)
				exit_error();
			num = 0;
			sign = 0;
		}
		else if ((str[i] == '+' || str[i] == '-') && (sign == 0 && num == 0) \
				&& str[i + 1] != 0)
			sign = 1;
		else
			exit_error();
		i++;
	}
}

int	validate(int argc, char **argv)
{
	int	i;
	int	temp;

	temp = 0;
	i = 1;
	while (i < argc)
	{
		if (!ft_isspace(argv[i]))
		{
			ft_isalnum(argv[i]);
			check_string(argv[i]);
			temp = 1;
		}
		i++;
	}
	return (temp);
}

int	check_sorted(t_data *new)
{
	int	i;

	i = 0;
	while (i < (new->element_count - 1))
	{
		if (new->a[i] > new->a[i + 1])
			return (1);
		i++;
	}
	return (0);
}

int	lst_min(t_stack *a, int min)
{
	size_t	i;

	i = 0;
	while (a)
	{
		if (a->data == min)
			break ;
		a = a->next;
		i++;
	}
	return (i);
}

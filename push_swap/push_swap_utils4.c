/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils4.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosantan <rosantan@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 10:06:45 by rosantan          #+#    #+#             */
/*   Updated: 2022/11/23 10:10:35 by rosantan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	search(const int *duplicate, int count)
{
	int	i;

	i = 0;
	while (i != count)
	{
		if (duplicate[i] == duplicate[i + 1])
			exit_error();
		i++;
	}
}

static int	partition(int *array, int start, int end)
{
	int	tab;
	int	temp;
	int	i;
	int	j;

	tab = array[end];
	i = start - 1;
	j = start;
	while (j < end)
	{
		if (array[j] <= tab)
		{
			i++;
			temp = array[i];
			array[i] = array[j];
			array[j] = temp;
		}
		j++;
	}
	temp = array[i + 1];
	array[i + 1] = array[end];
	array[end] = temp;
	return (i + 1);
}

void	quick_sort(int *array, int start, int end)
{
	int	hell;

	if (start < end)
	{
		hell = partition(array, start, end);
		quick_sort(array, start, hell - 1);
		quick_sort(array, hell + 1, end);
	}
}

void	find_duplicate(t_data *new, t_stacks *stacks)
{
	int	*duplicate;

	duplicate = malloc(sizeof(int) * (new->element_count));
	if (!duplicate)
		exit_error();
	duplicate = copy_int(duplicate, new->a, new->element_count);
	quick_sort(duplicate, 0, new->element_count - 1);
	search(duplicate, new->element_count - 1);
	stacks->count_a = new->element_count;
	stacks->count_b = 0;
	stacks->min = duplicate[0];
	stacks->av = duplicate[new->element_count / 2];
	stacks->max = duplicate[new->element_count - 1];
	free (duplicate);
}

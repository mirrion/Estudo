/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosantan <rosantan@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 10:14:22 by rosantan          #+#    #+#             */
/*   Updated: 2022/11/23 10:15:25 by rosantan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_stack	*create_stack(const int *buff, int count)
{
	int		i;
	t_stack	*new;
	t_stack	*first_element;

	i = 0;
	new = malloc(sizeof(t_stack));
	if (!new)
		exit_error();
	first_element = new;
	while (i < count)
	{
		if (i < count - 1)
		{
			new->next = malloc(sizeof(t_stack));
			if (!new->next)
				exit_error();
		}
		new->data = buff[i];
		if (i == (count - 1))
			new->next = NULL;
		else
			new = new->next;
		i++;
	}
	return (first_element);
}

void	init_stack(t_data *new, t_stacks *stacks)
{
	stacks->a = create_stack(new->a, new->element_count);
	stacks->b = NULL;
}

void	free_stack(t_stacks *stacks)
{
	int		i;
	t_stack	*buff;

	i = 0;
	while (i < stacks->count_a)
	{
		buff = stacks->a;
		stacks->a = stacks->a->next;
		free(buff);
		i++;
	}
	i = 0;
	while (i < stacks->count_b)
	{
		buff = stacks->b;
		stacks->b = stacks->b->next;
		free(buff);
		i++;
	}
}

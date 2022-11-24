/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils5.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosantan <rosantan@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 10:24:41 by rosantan          #+#    #+#             */
/*   Updated: 2022/11/23 10:26:00 by rosantan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	check_best_option(t_stack *a, int buff, int src)
{
	t_stack	*save;
	int		value;

	save = a;
	value = 0;
	while (save && value == 0)
	{
		if (save->data < buff && save->data > src)
			value = 1;
		save = save->next;
	}
	return (value);
}

static void	find_place_volt(t_stacks *s, t_stack *b, int *action, int *buff)
{
	while (s->a)
	{
		*buff = s->a->data;
		if (b->data > s->a->data)
		{
			*action += 1;
			if (b->data < s->a->next->data)
				break ;
			s->a = s->a->next;
		}
		else
			break ;
	}
	if (check_best_option(s->a, *buff, b->data) == 1)
	{
		while (s->a)
		{
			if (s->a->data < *buff && s->a->data > b->data)
				break ;
			*action += 1;
			s->a = s->a->next;
		}
	}
}

int	find_place(t_stacks *s, t_stack *b, t_step_count *c, int min)
{
	int	action;
	int	value;
	int	buff;

	action = 0;
	buff = 0;
	find_place_volt(s, b, &action, &buff);
	if (s->a->rotate == -1)
		action = s->count_a - action;
	if (min == -1 || (action + b->step) < min)
	{
		c->dest_a = s->a->rotate;
		c->dest_b = b->rotate;
		c->count_a = action;
		c->count_b = b->step;
		value = action + b->step;
	}
	else
		value = min;
	return (value);
}

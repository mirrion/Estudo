/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosantan <rosantan@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 10:19:33 by rosantan          #+#    #+#             */
/*   Updated: 2022/11/23 10:28:29 by rosantan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	execute(t_stacks *stacks, t_step_count *count)
{
	while (count->count_a > 0)
	{
		if (count->dest_a != 1)
			rra(&stacks->a, 1);
		else
			ra(&stacks->a, 1);
		count->count_a--;
	}
	while (count->count_b > 0)
	{
		if (count->dest_b != 1)
			rrb(&stacks->b, 1);
		else
			rb(&stacks->b, 1);
		count->count_b--;
	}
	pa(stacks, 1);
}

static void	insert_steps(t_stacks *stacks, t_step_count *count)
{
	size_t	effective;
	t_stack	*pos_one_a;
	t_stack	*pos_one_b;

	effective = -1;
	pos_one_a = stacks->a;
	pos_one_b = stacks->b;
	while (stacks->b)
	{
		effective = find_place(stacks, stacks->b, count, effective);
		stacks->a = pos_one_a;
		stacks->b = stacks->b->next;
	}
	stacks->b = pos_one_b;
}

static void	step_marking(t_stack *block, int count)
{
	int		i;
	int		j;
	t_stack	*buff;

	i = 0;
	j = count / 2;
	buff = block;
	while (i <= j)
	{
		buff->step = i;
		buff->rotate = 1;
		buff = buff->next;
		i++;
	}
	if (count % 2 == 0)
		i--;
	while (--i > 0)
	{
		buff->step = i;
		buff->rotate = -1;
		buff = buff->next;
	}
}

static void	sort_initialize(t_stacks *stacks)
{
	t_step_count	*count;

	count = malloc(sizeof(t_step_count));
	if (!count)
		exit_error();
	while (stacks->count_b != 0)
	{
		count->count_a = -1;
		count->count_b = -1;
		count->dest_a = 0;
		count->dest_b = 0;
		step_marking(stacks->a, stacks->count_a);
		step_marking(stacks->b, stacks->count_b);
		insert_steps(stacks, count);
		execute(stacks, count);
	}
	if (lst_min(stacks->a, stacks->min) < stacks->count_a / 2)
	{
		while (stacks->a->data != stacks->min)
			ra(&stacks->a, 1);
	}
	else
		while (stacks->a->data != stacks->min)
			rra(&stacks->a, 1);
	free(count);
}

void	sort_big(t_stacks *stacks)
{
	while (stacks->count_a > 2)
	{
		if (stacks->a->data != stacks->min && stacks->a->data != stacks->max)
		{
			pb(stacks, 1);
			if (stacks->b->data > stacks->av)
				rb(&stacks->b, 1);
		}
		else
			ra(&stacks->a, 1);
	}
	if (stacks->a->data < stacks->a->next->data)
		sa(stacks->a, 1);
	pa(stacks, 1);
	sort_initialize(stacks);
}

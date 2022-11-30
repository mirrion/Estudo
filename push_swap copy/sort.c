/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosantan <rosantan@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 10:18:18 by rosantan          #+#    #+#             */
/*   Updated: 2022/11/24 11:18:56 by rosantan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	sort_three(t_stacks *stacks)
{
	int	max;

	max = find_max(stacks->a);
	if (stacks->count_a == 1)
		return ;
	else if (stacks->count_a == 2)
	{
		if (stacks->a->data > stacks->a->next->data)
			swap_a(stacks->a, 1);
		return ;
	}
	else if (stacks->count_a == 3)
	{
		if (stacks->a->data == max)
			rotate_a(&stacks->a, 1);
		if (stacks->a->next->data == max)
			rr_a(&stacks->a, 1);
		if (stacks->a->data > stacks->a->next->data)
			swap_a(stacks->a, 1);
	}
}

static void	sort_five(t_stacks *stacks)
{
	while (stacks->count_b < 2)
	{
		if (stacks->a->data == stacks->min || stacks->a->data == stacks->max)
			push_b(stacks, 1);
		else
			rotate_a(&stacks->a, 1);
	}
	sort_three(stacks);
	push_a(stacks, 1);
	push_a(stacks, 1);
	if (stacks->a->data == stacks->max)
	{
		rotate_a(&stacks->a, 1);
	}
	else
	{
		swap_a(stacks->a, 1);
		rotate_a(&stacks->a, 1);
	}
}

void	sort(t_stacks *stacks)
{
	if (stacks->count_a <= 3)
		sort_three(stacks);
	else if (stacks->count_a <= 5)
		sort_five(stacks);
	else
		sort_big(stacks);
}

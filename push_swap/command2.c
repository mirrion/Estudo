/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   command2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosantan <rosantan@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 08:07:55 by rosantan          #+#    #+#             */
/*   Updated: 2022/11/30 17:03:03 by rosantan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_b(t_stack *b, int display)
{
	int	buff;

	if (display == 1)
		ft_putstr("sb\n");
	if (!b || !(b->next))
		return ;
	buff = b->data;
	b->data = b->next->data;
	b->next->data = buff;
}

void	push_b(t_stacks *s, int display)
{
	t_stack	*buff;

	if (display == 1)
		ft_putstr("pb\n");
	if (!(s->a))
		return ;
	s->count_a -= 1;
	s->count_b += 1;
	buff = s->a;
	s->a = s->a->next;
	buff->next = s->b;
	s->b = buff;
}

void	rotate_b(t_stack **b, int display)
{
	t_stack	*fist;
	t_stack	*temp;
	t_stack	*last;

	if (display == 1)
		ft_putstr("rb\n");
	if (!(*b) || !((*b)->next))
		return ;
	temp = *b;
	fist = (*b)->next;
	last = *b;
	while (last->next)
		last = last->next;
	temp->next = NULL;
	last->next = temp;
	*b = fist;
}

void	rr_b(t_stack **b, int display)
{
	t_stack	*fist;
	t_stack	*temp;
	t_stack	*last;

	if (display == 1)
		ft_putstr("rrb\n");
	if (!(*b) || !((*b)->next))
		return ;
	fist = *b;
	last = *b;
	while (last->next->next != NULL)
		last = last->next;
	temp = last->next;
	last->next = NULL;
	temp->next = fist;
	*b = temp;
}

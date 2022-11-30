/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   command.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosantan <rosantan@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 12:10:53 by rosantan          #+#    #+#             */
/*   Updated: 2022/11/30 16:57:35 by rosantan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_a(t_stack *a, int display)
{
	int	buff;

	if (display == 1)
		ft_putstr("sa\n");
	if (!a || !(a->next))
		return ;
	buff = a->data;
	a->data = a->next->data;
	a->next->data = buff;
}

void	push_a(t_stacks *s, int display)
{
	t_stack	*buff;

	if (display == 1)
		ft_putstr("pa\n");
	if (!(s->b))
		return ;
	s->count_a += 1;
	s->count_b -= 1;
	buff = s->b;
	s->b = s->b->next;
	buff->next = s->a;
	s->a = buff;
}

void	rotate_a(t_stack **a, int display)
{
	t_stack	*fist;
	t_stack	*temp;
	t_stack	*last;

	if (display == 1)
		ft_putstr("ra\n");
	if (!(*a) || !((*a)->next))
		return ;
	temp = *a;
	fist = (*a)->next;
	last = *a;
	while (last->next)
		last = last->next;
	temp->next = NULL;
	last->next = temp;
	*a = fist;
}

void	rr_a(t_stack **a, int display)
{
	t_stack	*fist;
	t_stack	*temp;
	t_stack	*last;

	if (display == 1)
		ft_putstr("rra\n");
	if (!(*a) || !((*a)->next))
		return ;
	fist = *a;
	last = *a;
	while (last->next->next != NULL)
		last = last->next;
	temp = last->next;
	last->next = NULL;
	temp->next = fist;
	*a = temp;
}

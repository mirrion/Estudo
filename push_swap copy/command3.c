/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   command3.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosantan <rosantan@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 08:16:00 by rosantan          #+#    #+#             */
/*   Updated: 2022/11/24 12:00:17 by rosantan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_ss(t_stacks *s, int display_flag)
{
	if (display_flag == 1)
		ft_putstr("ss\n");
	swap_a(s->a, 0);
	swap_b(s->b, 0);
}

void	rotate_rr(t_stacks *s, int display_flag)
{
	if (display_flag == 1)
		ft_putstr("rr\n");
	rotate_a(&s->a, 0);
	rotate_b(&s->b, 0);
}

void	rr_r(t_stacks *s, int display_flag)
{
	if (display_flag == 1)
		ft_putstr("rrr\n");
	rr_a(&s->a, 0);
	rr_b(&s->b, 0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosantan <rosantan@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 12:57:04 by rosantan          #+#    #+#             */
/*   Updated: 2022/11/30 17:53:21 by rosantan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	push_swap(int argc, char **argv, t_data *new, t_stacks *stacks)
{
	if (validate(argc, argv))
	{
		separate(argc, argv, new);
		find_duplicate(new, stacks);
		if (check_sorted(new))
		{
			init_stack(new, stacks);
			sort(stacks);
			free_stack(stacks);
		}
	}
	else
	{
		free(new);
		free(stacks);
		exit_error();
	}
	free(new);
	free(stacks);
}

int	main(int argc, char **argv)
{
	t_data		*new;
	t_stacks	*stacks;

	if (argc < 2)
		return (0);
	new = malloc(sizeof(t_data) + 1);
	if (!new)
		exit_error();
	stacks = malloc(sizeof(t_stacks) + 1);
	if (!stacks)
		exit_error();
	nulify(stacks, new);
	push_swap(argc, argv, new, stacks);
	return (0);
}

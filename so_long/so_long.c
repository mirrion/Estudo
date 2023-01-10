/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosantan <rosantan@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 11:08:28 by rosantan          #+#    #+#             */
/*   Updated: 2023/01/10 16:43:18 by rosantan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int argc, char *argv[])
{
	t_game	*game;

	game = malloc(sizeof(t_game));
	start_all(game, argc, argv);
	create_sprites(game);
	draw_map(game);
	mlx_hook(game->win_ptr, KeyPress, KeyPressMask, &handle_input, game);
	mlx_hook(game->win_ptr, DestroyNotify, NoEventMask, &close_game, game);
	mlx_loop_hook(game->mlx_ptr, &handle_no_event, game);
	mlx_expose_hook(game->win_ptr, &redraw, game);
	mlx_loop(game->mlx_ptr);
	destroy_all(game);
}

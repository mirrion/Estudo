/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   start_all.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosantan <rosantan@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 15:24:35 by rosantan          #+#    #+#             */
/*   Updated: 2023/01/10 16:42:26 by rosantan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	start_mlx(t_game *game)
{
	game->mlx_ptr = mlx_init();
	if (game->mlx_ptr == NULL)
		error_msg(game, RED"MLX_ERROR: "GREY"mlx not initialising.\n"RESET);
	game->win_ptr = mlx_new_window(game->mlx_ptr, game->width, \
	game->height, TITLE);
	if (game->win_ptr == NULL)
	{
		free(game->win_ptr);
		error_msg(game, RED"MLX_ERROR: "GREY"failed to create window.\n"\
		RESET);
	}
}

void	open_map_args(t_game *game)
{
	game->map.columns = 0;
	game->map.number_lines = 0;
	game->map.map_lines = 0;
	game->map.player = 0;
	game->map.keys = 0;
	game->map.exit = 0;
	game->map.enemys = 0;
	game->width = 0;
	game->height = 0;
	game->moves = 0;
	game->text = "CONSTRUTION";
}

void	create_paths(t_game *game)
{
	game->wall.path = "./img/wall.xpm";
	game->floor.path = "./img/floor.xpm";
	game->player.path = "./img/move_d.xpm";
	game->key.path = "./img/key.xpm";
	game->exit.path = "./img/door_close.xpm";
	game->door_open.path = "./img/door_open.xpm";
}

void	start_all(t_game *game, int argc, char **argv)
{
	open_map_args(game);
	create_paths(game);
	check_extension(argc, argv, game);
	load_map(argv[1], game);
	check_map_lines(game);
	init_game(game);
	valid_map_parameters(game);
	start_mlx(game);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosantan <rosantan@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 11:08:28 by rosantan          #+#    #+#             */
/*   Updated: 2023/01/07 13:13:16 by rosantan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	init_mlx(t_game *game)
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

void	init_all(t_game *game, int argc, char **argv)
{
	init_map_args(game);
	create_paths(game);
	verify_map_extension(argc, argv, game);
	init_map(argv[1], game);
	check_map_lines(game);
	init_game(game);
	valid_map_parameters(game);
	init_mlx(game);
}

void	init_map_args(t_game *game)
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

int main(int argc, char *argv[])
{
	t_game *game;

	game = malloc(sizeof(t_game));
	init_all(game, argc, argv);
	create_sprites(game);
	draw_map(game);
	mlx_hook(game->win_ptr, KeyPress, KeyPressMask, &ft_handle_input, game);
	mlx_hook(game->win_ptr, DestroyNotify, NoEventMask, &close_game, game);
	mlx_loop_hook(game->mlx_ptr, &handle_no_event, game);
	mlx_expose_hook(game->win_ptr, &ft_redraw, game);
	mlx_loop(game->mlx_ptr);
	ft_destroy_all(game);
}

